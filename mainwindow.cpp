#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
#include <QTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Initialize the Progressbar Timer
    systemTimer = new QTimer(this);
    connect(systemTimer, &QTimer::timeout, this, &MainWindow::processHospitalLogic);
    systemTimer->start(1500);

    //The Hospital Graph
    hospitalGraph["Entrance"] = {{"Hallway A", 5}, {"Hallway B", 12}};
    hospitalGraph["Hallway A"] = {{"ER 1", 5}, {"ER 2", 10}, {"ICU", 15}};
    hospitalGraph["Hallway B"] = {{"ER 1", 20}, {"ER 2", 8}, {"Surgery", 5}};
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Circular Buffer (Deque)
void MainWindow::addLog(QString message) {
    // Add new message to the top of the list
    eventLogs.push_front(message);

    //Keep only 10 most recent items
    if (eventLogs.size() > 10) {
        eventLogs.pop_back();
    }

    // Refresh UI listLogs
    ui->listLogs->clear();
    for (const QString& log : eventLogs) {
        ui->listLogs->addItem(log);
    }
}

//Adding Patients
void MainWindow::on_btnNormal_clicked() {
    int id = QRandomGenerator::global()->bounded(1000, 9999);
    Patient p = {"ID:" + QString::number(id), 3, 5};

    // Store in Hash Map
    patientDatabase[id] = "RECORD #" + QString::number(id) + "\nStatus: Stable\nType: Normal Case";

    pq.push(p);
    updateQueueDisplay();
}

void MainWindow::on_btnEmergency_clicked() {
    int id = QRandomGenerator::global()->bounded(1000, 9999);
    Patient p = {"CRITICAL (ID:" + QString::number(id) + ")", 1, 10};

    // Store in Hash Map
    patientDatabase[id] = "EMERGENCY RECORD #" + QString::number(id) + "\nStatus: CRITICAL\nAction: Immediate Triage";

    pq.push(p);
    updateQueueDisplay();
}

//GRAPH ROUTING:(Dijkstra Principle)
void MainWindow::findPathTo(QString targetRoom) {
    QString bestPath = "";
    int minDistance = 9999;

    for (auto& branch : hospitalGraph["Entrance"]) {
        QString hallway = branch.first;
        int distToHallway = branch.second;

        for (auto& subBranch : hospitalGraph[hallway]) {
            if (subBranch.first == targetRoom) {
                int totalDist = distToHallway + subBranch.second;
                if (totalDist < minDistance) {
                    minDistance = totalDist;
                    bestPath = "Entrance ➔ " + hallway + " ➔ " + targetRoom;
                }
            }
        }
    }

    if (bestPath != "") {
        ui->lblRouteResult->setText("TARGET: " + targetRoom + "\n" + bestPath +
                                    "\nShortest Distance: " + QString::number(minDistance) + "m");
    }
    ui->lblRouteResult->setStyleSheet("color: #ffaa00; font-weight: bold; padding: 5px; border: 1px solid #ffaa00;");
}

void MainWindow::on_btnToER1_clicked() { findPathTo("ER 1"); }
void MainWindow::on_btnToER2_clicked() { findPathTo("ER 2"); }
void MainWindow::on_btnToICU_clicked() { findPathTo("ICU"); }
void MainWindow::on_btnToSurgery_clicked() { findPathTo("Surgery"); }

//HASH MAP: Search Function
void MainWindow::on_searchEdit_returnPressed() {
    int id = ui->searchEdit->text().toInt();
    if (patientDatabase.find(id) != patientDatabase.end()) {
        ui->lblHistory->setText(patientDatabase[id]);
        ui->lblHistory->setStyleSheet("color: #00ff00; border: 1px solid #00ff00; background: #121225;");
    } else {
        ui->lblHistory->setText("ID " + QString::number(id) + " Not Found.");
        ui->lblHistory->setStyleSheet("color: #ff4444; border: 1px solid #ff4444;");
    }
    ui->searchEdit->clear();
}

//Priority Queue Display
void MainWindow::updateQueueDisplay() {
    ui->listPatients->clear();
    std::priority_queue<Patient> temp = pq;
    while(!temp.empty()) {
        Patient p = temp.top();
        temp.pop();
        ui->listPatients->addItem(QString("[%1] %2").arg(p.priority).arg(p.name));
    }
}

// Doctor Treatment Logic
void MainWindow::processHospitalLogic() {
    // DOCTOR 1 (Alpha)
    if (doc1Time > 0) {
        doc1Time--;
        ui->pbDoc1->setValue(((doc1Max - doc1Time) * 100) / doc1Max);
        if (doc1Time == 0) {
            QString id = ui->lblDoc1Name->text().split(":").last();
            addLog("Doctor Alpha treated ID " + id + " in time " + QString::number(doc1Max) + "s");
        }
    } else {
        ui->pbDoc1->setValue(0);
        ui->lblDoc1Name->setText("Doctor Alpha: Idle");
        if (!pq.empty()) {
            Patient p = pq.top(); pq.pop();
            doc1Time = doc1Max = p.treatmentTime;
            ui->lblDoc1Name->setText("Doctor Alpha: " + p.name);
            updateQueueDisplay();
        }
    }

    // DOCTOR 2 (Beta)
    if (doc2Time > 0) {
        doc2Time--;
        ui->pbDoc2->setValue(((doc2Max - doc2Time) * 100) / doc2Max);
        if (doc2Time == 0) {
            QString id = ui->lblDoc2Name->text().split(":").last();
            addLog("Doctor Beta treated ID " + id + " in time " + QString::number(doc2Max) + "s");
        }
    } else {
        ui->pbDoc2->setValue(0);
        ui->lblDoc2Name->setText("Doctor Beta: Idle");
        if (!pq.empty()) {
            Patient p = pq.top(); pq.pop();
            doc2Time = doc2Max = p.treatmentTime;
            ui->lblDoc2Name->setText("Doctor Beta: " + p.name);
            updateQueueDisplay();
        }
    }

    // DOCTOR 3 (Gamma)
    if (doc3Time > 0) {
        doc3Time--;
        ui->pbDoc3->setValue(((doc3Max - doc3Time) * 100) / doc3Max);
        if (doc3Time == 0) {
            QString id = ui->lblDoc3Name->text().split(":").last();
            addLog("Doctor Gamma treated ID " + id + " in time " + QString::number(doc3Max) + "s");
        }
    } else {
        ui->pbDoc3->setValue(0);
        ui->lblDoc3Name->setText("Doctor Gamma: Idle");
        if (!pq.empty()) {
            Patient p = pq.top(); pq.pop();
            doc3Time = doc3Max = p.treatmentTime;
            ui->lblDoc3Name->setText("Doctor Gamma: " + p.name);
            updateQueueDisplay();
        }
    }
}
