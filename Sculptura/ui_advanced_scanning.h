/********************************************************************************
** Form generated from reading UI file 'advanced_scanning.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCED_SCANNING_H
#define UI_ADVANCED_SCANNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Advanced_scanning
{
public:
    QLabel *set_parameters;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QPushButton *apply_pb;

    void setupUi(QDialog *Advanced_scanning)
    {
        if (Advanced_scanning->objectName().isEmpty())
            Advanced_scanning->setObjectName(QStringLiteral("Advanced_scanning"));
        Advanced_scanning->resize(306, 413);
        Advanced_scanning->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"    background-color: #ecf0f5;\n"
"}"));
        set_parameters = new QLabel(Advanced_scanning);
        set_parameters->setObjectName(QStringLiteral("set_parameters"));
        set_parameters->setGeometry(QRect(80, 10, 191, 21));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        set_parameters->setFont(font);
        label_2 = new QLabel(Advanced_scanning);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 101, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setAutoFillBackground(false);
        label_2->setWordWrap(true);
        doubleSpinBox = new QDoubleSpinBox(Advanced_scanning);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(150, 60, 111, 31));
        doubleSpinBox->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(Advanced_scanning);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 110, 101, 51));
        label_3->setFont(font1);
        label_3->setAutoFillBackground(false);
        label_3->setWordWrap(true);
        doubleSpinBox_2 = new QDoubleSpinBox(Advanced_scanning);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(150, 120, 111, 31));
        doubleSpinBox_2->setStyleSheet(QStringLiteral(""));
        apply_pb = new QPushButton(Advanced_scanning);
        apply_pb->setObjectName(QStringLiteral("apply_pb"));
        apply_pb->setEnabled(true);
        apply_pb->setGeometry(QRect(100, 370, 102, 31));
        apply_pb->setCursor(QCursor(Qt::PointingHandCursor));
        apply_pb->setStyleSheet(QLatin1String("QPushButton {\n"
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

        retranslateUi(Advanced_scanning);

        QMetaObject::connectSlotsByName(Advanced_scanning);
    } // setupUi

    void retranslateUi(QDialog *Advanced_scanning)
    {
        Advanced_scanning->setWindowTitle(QApplication::translate("Advanced_scanning", "Advanced scanning", 0));
        set_parameters->setText(QApplication::translate("Advanced_scanning", "Set parameters", 0));
        label_2->setText(QApplication::translate("Advanced_scanning", "Number of iterations", 0));
        label_3->setText(QApplication::translate("Advanced_scanning", "RANSAC", 0));
        apply_pb->setText(QApplication::translate("Advanced_scanning", "Apply", 0));
    } // retranslateUi

};

namespace Ui {
    class Advanced_scanning: public Ui_Advanced_scanning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCED_SCANNING_H
