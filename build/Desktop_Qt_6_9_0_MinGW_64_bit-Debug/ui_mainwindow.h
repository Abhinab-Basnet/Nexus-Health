/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frameDoctors;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QFrame *doc1;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblDoc1Name;
    QProgressBar *pbDoc1;
    QFrame *doc2;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *lblDoc2Name;
    QProgressBar *pbDoc2;
    QFrame *doc3;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *lblDoc3Name;
    QProgressBar *pbDoc3;
    QFrame *frameQueue;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *listPatients;
    QFrame *frameInput;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnNormal;
    QPushButton *btnEmergency;
    QLabel *totalTreated;
    QSpacerItem *verticalSpacer;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupSearch;
    QLineEdit *searchEdit;
    QLabel *lblHistory;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupNav;
    QLabel *lblMap;
    QPushButton *btnToER1;
    QLabel *lblRouteResult;
    QPushButton *btnToER2;
    QPushButton *btnToICU;
    QPushButton *btnToSurgery;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupLogs;
    QListWidget *listLogs;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1048, 658);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 581, 321));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frameDoctors = new QFrame(horizontalLayoutWidget);
        frameDoctors->setObjectName("frameDoctors");
        frameDoctors->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: #7FA1C3;\n"
"    border-radius: 12px;\n"
"    border: 1px solid #DDDAD0;\n"
"}"));
        frameDoctors->setFrameShape(QFrame::Shape::StyledPanel);
        frameDoctors->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget_3 = new QWidget(frameDoctors);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(0, 0, 191, 321));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        doc1 = new QFrame(verticalLayoutWidget_3);
        doc1->setObjectName("doc1");
        doc1->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: #E2DAD6;\n"
"    \n"
"    margin: 5px;\n"
"}"));
        doc1->setFrameShape(QFrame::Shape::StyledPanel);
        doc1->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget_4 = new QWidget(doc1);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(0, 0, 191, 101));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lblDoc1Name = new QLabel(verticalLayoutWidget_4);
        lblDoc1Name->setObjectName("lblDoc1Name");
        lblDoc1Name->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #6482AD;\n"
"    font-family: \"Segoe UI\";\n"
"    font-weight: 500;\n"
"}"));
        lblDoc1Name->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(lblDoc1Name);

        pbDoc1 = new QProgressBar(verticalLayoutWidget_4);
        pbDoc1->setObjectName("pbDoc1");
        pbDoc1->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    \n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"    color: orange;\n"
"    font-weight: bold;\n"
"    background-color: #FFF4EA;\n"
"border: 1px solid #BF4646;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #06D6A0, stop:1 #00B4D8);\n"
"    border-radius: 3px;\n"
"}"));
        pbDoc1->setValue(0);

        verticalLayout_4->addWidget(pbDoc1);


        verticalLayout_3->addWidget(doc1);

        doc2 = new QFrame(verticalLayoutWidget_3);
        doc2->setObjectName("doc2");
        doc2->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: #E2DAD6;\n"
"    \n"
"    margin: 5px;\n"
"}"));
        doc2->setFrameShape(QFrame::Shape::StyledPanel);
        doc2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget_5 = new QWidget(doc2);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(0, 0, 191, 101));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        lblDoc2Name = new QLabel(verticalLayoutWidget_5);
        lblDoc2Name->setObjectName("lblDoc2Name");
        lblDoc2Name->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #6482AD;\n"
"    font-family: \"Segoe UI\";\n"
"    font-weight: 500;\n"
"}"));
        lblDoc2Name->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(lblDoc2Name);

        pbDoc2 = new QProgressBar(verticalLayoutWidget_5);
        pbDoc2->setObjectName("pbDoc2");
        pbDoc2->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    \n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"    color: orange;\n"
"    font-weight: bold;\n"
"    background-color: #FFF4EA;\n"
"border: 1px solid #BF4646;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #06D6A0, stop:1 #00B4D8);\n"
"    border-radius: 3px;\n"
"}"));
        pbDoc2->setValue(0);

        verticalLayout_5->addWidget(pbDoc2);


        verticalLayout_3->addWidget(doc2);

        doc3 = new QFrame(verticalLayoutWidget_3);
        doc3->setObjectName("doc3");
        doc3->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: #E2DAD6;\n"
"    \n"
"    margin: 5px;\n"
"}"));
        doc3->setFrameShape(QFrame::Shape::StyledPanel);
        doc3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget_6 = new QWidget(doc3);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(0, 0, 191, 101));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lblDoc3Name = new QLabel(verticalLayoutWidget_6);
        lblDoc3Name->setObjectName("lblDoc3Name");
        lblDoc3Name->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #6482AD;\n"
"    font-family: \"Segoe UI\";\n"
"    font-weight: 500;\n"
"}"));
        lblDoc3Name->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(lblDoc3Name);

        pbDoc3 = new QProgressBar(verticalLayoutWidget_6);
        pbDoc3->setObjectName("pbDoc3");
        pbDoc3->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    \n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"    color: orange;\n"
"    font-weight: bold;\n"
"    background-color: #FFF4EA;\n"
"border: 1px solid #BF4646;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #06D6A0, stop:1 #00B4D8);\n"
"    border-radius: 3px;\n"
"}"));
        pbDoc3->setValue(0);

        verticalLayout_6->addWidget(pbDoc3);


        verticalLayout_3->addWidget(doc3);


        horizontalLayout->addWidget(frameDoctors);

        frameQueue = new QFrame(horizontalLayoutWidget);
        frameQueue->setObjectName("frameQueue");
        frameQueue->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: #7FA1C3;\n"
"    border-radius: 12px;\n"
"    border: 1px solid #DDDAD0;\n"
"}"));
        frameQueue->setFrameShape(QFrame::Shape::StyledPanel);
        frameQueue->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget_2 = new QWidget(frameQueue);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 181, 311));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #E0E0E0;\n"
"    font-family: \"Segoe UI\";\n"
"    font-weight: 500;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label);

        listPatients = new QListWidget(verticalLayoutWidget_2);
        listPatients->setObjectName("listPatients");
        listPatients->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    background-color: #6482AD;\n"
"    border: 1px solid #DDDAD0;\n"
"    border-radius: 8px;\n"
"    color: #E0E0E0;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    font-size: 14px;\n"
"    padding: 5px;\n"
"}"));

        verticalLayout_2->addWidget(listPatients);


        horizontalLayout->addWidget(frameQueue);

        frameInput = new QFrame(horizontalLayoutWidget);
        frameInput->setObjectName("frameInput");
        frameInput->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: #7FA1C3;\n"
"    border-radius: 12px;\n"
"    border: 1px solid #DDDAD0;\n"
"}"));
        frameInput->setFrameShape(QFrame::Shape::StyledPanel);
        frameInput->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget = new QWidget(frameInput);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 191, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnNormal = new QPushButton(verticalLayoutWidget);
        btnNormal->setObjectName("btnNormal");
        btnNormal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F5EDED;\n"
"    color: #6482AD;\n"
"    font-weight: bold;\n"
"    border-radius: 6px;\n"
"    padding: 12px;\n"
"    font-size: 13px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #0096C7;\n"
"color:white;\n"
"}"));

        verticalLayout->addWidget(btnNormal);

        btnEmergency = new QPushButton(verticalLayoutWidget);
        btnEmergency->setObjectName("btnEmergency");
        btnEmergency->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: #E63946;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 6px;\n"
"    padding: 12px;\n"
"    font-size: 13px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #D62828;\n"
"}"));

        verticalLayout->addWidget(btnEmergency);

        totalTreated = new QLabel(verticalLayoutWidget);
        totalTreated->setObjectName("totalTreated");
        totalTreated->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #E0E0E0;\n"
"    font-family: \"Segoe UI\";\n"
"    font-weight: 500;\n"
"}"));

        verticalLayout->addWidget(totalTreated);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(frameInput);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(610, 0, 421, 321));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupSearch = new QGroupBox(horizontalLayoutWidget_2);
        groupSearch->setObjectName("groupSearch");
        groupSearch->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"    border: 2px solid #3d3d5c;\n"
"    border-radius: 10px;\n"
"    margin-top: 20px;\n"
"  \n"
"	color: rgb(0, 0, 127);\n"
"    font-weight: bold;\n"
"}"));
        groupSearch->setAlignment(Qt::AlignmentFlag::AlignCenter);
        searchEdit = new QLineEdit(groupSearch);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setGeometry(QRect(10, 40, 171, 31));
        searchEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color: #F5EDED;\n"
"    border: 1px solid #00d4ff;\n"
"    border-radius: 5px;\n"
"    padding: 8px;\n"
"    color: #6482AD;\n"
"}"));
        lblHistory = new QLabel(groupSearch);
        lblHistory->setObjectName("lblHistory");
        lblHistory->setGeometry(QRect(10, 80, 401, 231));
        lblHistory->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: #E2DAD6;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    color: #6482AD;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 13px;\n"
"}"));
        lblHistory->setWordWrap(true);

        horizontalLayout_2->addWidget(groupSearch);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(0, 330, 581, 281));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupNav = new QGroupBox(horizontalLayoutWidget_3);
        groupNav->setObjectName("groupNav");
        groupNav->setStyleSheet(QString::fromUtf8("QGroupBox#groupNav {\n"
"    border: 2px solid #55557f;\n"
"    border-radius: 10px;\n"
"    margin-top: 15px;\n"
"    \n"
"	color: rgb(0, 0, 127);\n"
"    font-weight: bold;\n"
"}"));
        groupNav->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lblMap = new QLabel(groupNav);
        lblMap->setObjectName("lblMap");
        lblMap->setGeometry(QRect(30, 30, 201, 31));
        lblMap->setStyleSheet(QString::fromUtf8("QLabel#lblMap {\n"
"    background-color: #E2DAD6;\n"
"    border: 1px solid #55557f;\n"
"    padding: 10px;\n"
"    color: #8888aa;\n"
"    font-family: \"Courier New\"; /* Monospace for map feel */\n"
"    font-size: 11px;\n"
"}"));
        btnToER1 = new QPushButton(groupNav);
        btnToER1->setObjectName("btnToER1");
        btnToER1->setGeometry(QRect(20, 70, 121, 31));
        btnToER1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: #E63946;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 6px;\n"
"    padding: 8px;\n"
"    font-size: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #D62828;\n"
"\n"
"}"));
        lblRouteResult = new QLabel(groupNav);
        lblRouteResult->setObjectName("lblRouteResult");
        lblRouteResult->setGeometry(QRect(30, 120, 531, 141));
        lblRouteResult->setStyleSheet(QString::fromUtf8("QLabel#lblRouteResult {\n"
"    color: #6482AD;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"background-color:#E2DAD6;\n"
"}"));
        lblRouteResult->setWordWrap(true);
        btnToER2 = new QPushButton(groupNav);
        btnToER2->setObjectName("btnToER2");
        btnToER2->setGeometry(QRect(150, 70, 121, 31));
        btnToER2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: #E63946;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 6px;\n"
"    padding: 8px;\n"
"    font-size: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #D62828;\n"
"\n"
"}"));
        btnToICU = new QPushButton(groupNav);
        btnToICU->setObjectName("btnToICU");
        btnToICU->setGeometry(QRect(290, 70, 121, 31));
        btnToICU->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: #E63946;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 6px;\n"
"    padding: 8px;\n"
"    font-size: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #D62828;\n"
"\n"
"}"));
        btnToSurgery = new QPushButton(groupNav);
        btnToSurgery->setObjectName("btnToSurgery");
        btnToSurgery->setGeometry(QRect(420, 70, 121, 31));
        btnToSurgery->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: #E63946;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 6px;\n"
"    padding: 8px;\n"
"    font-size: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #D62828;\n"
"\n"
"}"));

        horizontalLayout_3->addWidget(groupNav);

        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(610, 330, 421, 281));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupLogs = new QGroupBox(horizontalLayoutWidget_4);
        groupLogs->setObjectName("groupLogs");
        groupLogs->setStyleSheet(QString::fromUtf8("QGroupBox#groupLogs {\n"
"    border: 1px solid #333333;\n"
"    border-radius: 5px;\n"
"    margin-top: 10px;\n"
"    \n"
"	color: rgb(0, 0, 127);\n"
"    font-weight: bold;\n"
"    background-color: #7FA1C3;\n"
"}"));
        groupLogs->setAlignment(Qt::AlignmentFlag::AlignCenter);
        listLogs = new QListWidget(groupLogs);
        listLogs->setObjectName("listLogs");
        listLogs->setGeometry(QRect(10, 30, 401, 241));
        listLogs->setStyleSheet(QString::fromUtf8("QListWidget#listLogs {\n"
"    background-color: #E2DAD6;\n"
"    border: none;\n"
"    color: #6482AD; \n"
"    font-family: 'Courier New', monospace;\n"
"    font-size: 11px;\n"
"}"));
        listLogs->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);

        horizontalLayout_4->addWidget(groupLogs);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lblDoc1Name->setText(QCoreApplication::translate("MainWindow", "Doctor Alpha: Idle", nullptr));
        lblDoc2Name->setText(QCoreApplication::translate("MainWindow", "Doctor Alpha: Abhinab", nullptr));
        lblDoc3Name->setText(QCoreApplication::translate("MainWindow", "Doctor Alpha: Ram", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "LIVE WAITING ROOM", nullptr));
        btnNormal->setText(QCoreApplication::translate("MainWindow", "Add Normal Case", nullptr));
        btnEmergency->setText(QCoreApplication::translate("MainWindow", "ADD EMERGENCY", nullptr));
        totalTreated->setText(QCoreApplication::translate("MainWindow", "Total Treated: 0", nullptr));
        groupSearch->setTitle(QCoreApplication::translate("MainWindow", "PATIENT RECORD SYSTEM", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter 4-Digit Patient ID...", nullptr));
        lblHistory->setText(QCoreApplication::translate("MainWindow", "Patient details will appear here.", nullptr));
        groupNav->setTitle(QCoreApplication::translate("MainWindow", "HOSPITAL NAVIGATION (DIJKSTRA)", nullptr));
        lblMap->setText(QCoreApplication::translate("MainWindow", "A simple text-based map", nullptr));
        btnToER1->setText(QCoreApplication::translate("MainWindow", "Emergency Room 1", nullptr));
        lblRouteResult->setText(QCoreApplication::translate("MainWindow", "Route will appear here...", nullptr));
        btnToER2->setText(QCoreApplication::translate("MainWindow", "Emergency Room 2", nullptr));
        btnToICU->setText(QCoreApplication::translate("MainWindow", "ICU", nullptr));
        btnToSurgery->setText(QCoreApplication::translate("MainWindow", "Surgery", nullptr));
        groupLogs->setTitle(QCoreApplication::translate("MainWindow", "SYSTEM EVENT LOG (CIRCULAR BUFFER)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
