/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionOpen_PointClouds;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *scanningGroupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *preview_window;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_brightness;
    QLabel *label_contrast;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider_brightness;
    QSlider *horizontalSlider_contrast;
    QHBoxLayout *horizontalLayout;
    QLabel *label_simple_scanning;
    QPushButton *start_preview;
    QPushButton *start_scanning;
    QPushButton *advanced_scanning;
    QGroupBox *reconstructionGroupBox;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QGridLayout *gridLayout;
    QVTKWidget *vtkWindow;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *get_3D_model;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *ListGroupBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *list_pc;
    QListView *listPointClouds;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *selectall;
    QPushButton *deletePointCloud;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuPointClouds;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1038, 611);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow\n"
"{\n"
"    background-color: #ecf0f5;\n"
"}"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/sheet.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/Folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/diskette.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon2);
        actionOpen_PointClouds = new QAction(MainWindow);
        actionOpen_PointClouds->setObjectName(QStringLiteral("actionOpen_PointClouds"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/cloud.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_PointClouds->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("QMainWindow\n"
"{\n"
"    background-color: #ecf0f5;\n"
"}"));
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        scanningGroupBox = new QGroupBox(centralWidget);
        scanningGroupBox->setObjectName(QStringLiteral("scanningGroupBox"));
        scanningGroupBox->setMaximumSize(QSize(640, 16777215));
        verticalLayout_3 = new QVBoxLayout(scanningGroupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        preview_window = new QLabel(scanningGroupBox);
        preview_window->setObjectName(QStringLiteral("preview_window"));
        preview_window->setMinimumSize(QSize(320, 240));
        preview_window->setMaximumSize(QSize(640, 480));
        preview_window->setStyleSheet(QLatin1String("QLabel {\n"
"    border: 2px solid lightgray;\n"
"    background-color: white;\n"
"}"));

        verticalLayout_3->addWidget(preview_window);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_brightness = new QLabel(scanningGroupBox);
        label_brightness->setObjectName(QStringLiteral("label_brightness"));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_brightness->setFont(font);

        verticalLayout_2->addWidget(label_brightness);

        label_contrast = new QLabel(scanningGroupBox);
        label_contrast->setObjectName(QStringLiteral("label_contrast"));
        label_contrast->setFont(font);

        verticalLayout_2->addWidget(label_contrast);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSlider_brightness = new QSlider(scanningGroupBox);
        horizontalSlider_brightness->setObjectName(QStringLiteral("horizontalSlider_brightness"));
        horizontalSlider_brightness->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_brightness->setStyleSheet(QLatin1String("QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 5px;\n"
"}"));
        horizontalSlider_brightness->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_brightness);

        horizontalSlider_contrast = new QSlider(scanningGroupBox);
        horizontalSlider_contrast->setObjectName(QStringLiteral("horizontalSlider_contrast"));
        horizontalSlider_contrast->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_contrast->setStyleSheet(QLatin1String("QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 5px;\n"
"}"));
        horizontalSlider_contrast->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_contrast);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_simple_scanning = new QLabel(scanningGroupBox);
        label_simple_scanning->setObjectName(QStringLiteral("label_simple_scanning"));
        label_simple_scanning->setFont(font);

        horizontalLayout->addWidget(label_simple_scanning);

        start_preview = new QPushButton(scanningGroupBox);
        start_preview->setObjectName(QStringLiteral("start_preview"));
        start_preview->setEnabled(true);
        start_preview->setCursor(QCursor(Qt::PointingHandCursor));
        start_preview->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #c0cbd3;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: #748896;\n"
"    font: bold 14px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #748896;\n"
"    border-style: inset;\n"
"}"));

        horizontalLayout->addWidget(start_preview);

        start_scanning = new QPushButton(scanningGroupBox);
        start_scanning->setObjectName(QStringLiteral("start_scanning"));
        start_scanning->setEnabled(true);
        start_scanning->setCursor(QCursor(Qt::PointingHandCursor));
        start_scanning->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #c0cbd3;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: #748896;\n"
"    font: bold 14px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #748896;\n"
"    border-style: inset;\n"
"}"));

        horizontalLayout->addWidget(start_scanning);


        verticalLayout_3->addLayout(horizontalLayout);

        advanced_scanning = new QPushButton(scanningGroupBox);
        advanced_scanning->setObjectName(QStringLiteral("advanced_scanning"));
        advanced_scanning->setEnabled(true);
        advanced_scanning->setCursor(QCursor(Qt::PointingHandCursor));
        advanced_scanning->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #c0cbd3;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: #748896;\n"
"    font: bold 14px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #748896;\n"
"    border-style: inset;\n"
"}"));

        verticalLayout_3->addWidget(advanced_scanning);


        horizontalLayout_5->addWidget(scanningGroupBox);

        reconstructionGroupBox = new QGroupBox(centralWidget);
        reconstructionGroupBox->setObjectName(QStringLiteral("reconstructionGroupBox"));
        verticalLayout_4 = new QVBoxLayout(reconstructionGroupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget = new QWidget(reconstructionGroupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(320, 320));
        widget->setStyleSheet(QLatin1String("QWidget {\n"
"    border: 2px solid lightgray;\n"
"    background-color: white;\n"
"}"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vtkWindow = new QVTKWidget(widget);
        vtkWindow->setObjectName(QStringLiteral("vtkWindow"));
        vtkWindow->setMinimumSize(QSize(320, 320));
        vtkWindow->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(vtkWindow, 0, 0, 1, 1);


        verticalLayout_4->addWidget(widget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        progressBar = new QProgressBar(reconstructionGroupBox);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setEnabled(true);
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setBold(true);
        font1.setWeight(75);
        progressBar->setFont(font1);
        progressBar->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"    background-color: #05B8CC;\n"
"    width: 20px;\n"
"}"));
        progressBar->setValue(0);

        horizontalLayout_4->addWidget(progressBar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        get_3D_model = new QPushButton(reconstructionGroupBox);
        get_3D_model->setObjectName(QStringLiteral("get_3D_model"));
        get_3D_model->setEnabled(true);
        get_3D_model->setCursor(QCursor(Qt::PointingHandCursor));
        get_3D_model->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #c0cbd3;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: #748896;\n"
"    font: bold 14px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #748896;\n"
"    border-style: inset;\n"
"}"));

        horizontalLayout_6->addWidget(get_3D_model);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_6);


        horizontalLayout_5->addWidget(reconstructionGroupBox);

        ListGroupBox = new QGroupBox(centralWidget);
        ListGroupBox->setObjectName(QStringLiteral("ListGroupBox"));
        ListGroupBox->setMinimumSize(QSize(150, 0));
        ListGroupBox->setMaximumSize(QSize(180, 16777215));
        verticalLayout_5 = new QVBoxLayout(ListGroupBox);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        list_pc = new QLabel(ListGroupBox);
        list_pc->setObjectName(QStringLiteral("list_pc"));
        list_pc->setFont(font);

        verticalLayout_5->addWidget(list_pc);

        listPointClouds = new QListView(ListGroupBox);
        listPointClouds->setObjectName(QStringLiteral("listPointClouds"));
        listPointClouds->setMinimumSize(QSize(150, 250));
        listPointClouds->setMaximumSize(QSize(170, 16777215));
        listPointClouds->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listPointClouds->setProperty("isWrapping", QVariant(false));
        listPointClouds->setUniformItemSizes(false);
        listPointClouds->setWordWrap(false);

        verticalLayout_5->addWidget(listPointClouds);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        selectall = new QPushButton(ListGroupBox);
        selectall->setObjectName(QStringLiteral("selectall"));
        selectall->setEnabled(true);
        selectall->setCursor(QCursor(Qt::PointingHandCursor));
        selectall->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #c0cbd3;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: #748896;\n"
"    font: bold 14px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #748896;\n"
"    border-style: inset;\n"
"}"));

        horizontalLayout_2->addWidget(selectall);

        deletePointCloud = new QPushButton(ListGroupBox);
        deletePointCloud->setObjectName(QStringLiteral("deletePointCloud"));
        deletePointCloud->setEnabled(true);
        deletePointCloud->setCursor(QCursor(Qt::PointingHandCursor));
        deletePointCloud->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #c0cbd3;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: #748896;\n"
"    font: bold 14px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #748896;\n"
"    border-style: inset;\n"
"}"));

        horizontalLayout_2->addWidget(deletePointCloud);


        verticalLayout_5->addLayout(horizontalLayout_2);


        horizontalLayout_5->addWidget(ListGroupBox);

        MainWindow->setCentralWidget(centralWidget);
        ListGroupBox->raise();
        scanningGroupBox->raise();
        reconstructionGroupBox->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1038, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuPointClouds = new QMenu(menuBar);
        menuPointClouds->setObjectName(QStringLiteral("menuPointClouds"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuPointClouds->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_as);
        menuPointClouds->addAction(actionOpen_PointClouds);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sculptura", 0));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as", 0));
        actionOpen_PointClouds->setText(QApplication::translate("MainWindow", "Open PointClouds", 0));
        scanningGroupBox->setTitle(QString());
        preview_window->setText(QString());
        label_brightness->setText(QApplication::translate("MainWindow", "Brightness", 0));
        label_contrast->setText(QApplication::translate("MainWindow", "Contrast", 0));
        label_simple_scanning->setText(QApplication::translate("MainWindow", "Simple scanning", 0));
        start_preview->setText(QApplication::translate("MainWindow", "Start preview", 0));
        start_scanning->setText(QApplication::translate("MainWindow", "Start scanning", 0));
        advanced_scanning->setText(QApplication::translate("MainWindow", "Advanced scanning", 0));
        reconstructionGroupBox->setTitle(QString());
        get_3D_model->setText(QApplication::translate("MainWindow", "Get 3D model", 0));
        ListGroupBox->setTitle(QString());
        list_pc->setText(QApplication::translate("MainWindow", "List of Point Clouds", 0));
        selectall->setText(QApplication::translate("MainWindow", "Select all", 0));
        deletePointCloud->setText(QApplication::translate("MainWindow", "Delete", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuPointClouds->setTitle(QApplication::translate("MainWindow", "PointClouds", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
