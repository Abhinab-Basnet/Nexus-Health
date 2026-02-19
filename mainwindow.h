#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <queue>
#include <QTimer>
#include <QString>
#include <unordered_map>
#include <map>
#include <vector>
#include <deque>


struct Patient {
    QString name;
    int priority;
    int treatmentTime;

    // Overloading the < operator for the Priority Queue.
    // std::priority_queue is a Max-Heap. To make "1" the highest
    // priority, we return true if this priority is GREATER than the other.
    bool operator<(const Patient& other) const {
        return priority > other.priority;
    }
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_btnNormal_clicked();
    void on_btnEmergency_clicked();
    void on_searchEdit_returnPressed();
    void processHospitalLogic();
    void on_btnToER1_clicked();
    void on_btnToER2_clicked();
    void on_btnToICU_clicked();
    void on_btnToSurgery_clicked();

private:
    Ui::MainWindow *ui;
    std::priority_queue<Patient> pq;

    // Hash Map: Handles Instant Patient Retrieval
    std::unordered_map<int, QString> patientDatabase;

    //Graph Handles Routing Logistics
    std::map<QString, std::vector<std::pair<QString, int>>> hospitalGraph;

    std::deque<QString> eventLogs;

    QTimer *systemTimer; // Timer that ticks every 1.5 seconds

    //DOCTOR STATES
    int doc1Time = 0, doc1Max = 1;
    int doc2Time = 0, doc2Max = 1;
    int doc3Time = 0, doc3Max = 1;


    void updateQueueDisplay();       // Refreshes the QListWidget
    void findPathTo(QString target); // The Graph Traversal Logic

    void addLog(QString message);
};

#endif // MAINWINDOW_H
