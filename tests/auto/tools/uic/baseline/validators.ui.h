/********************************************************************************
** Form generated from reading UI file 'validators.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef VALIDATORS_H
#define VALIDATORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ledwidget.h"
#include "localeselector.h"

QT_BEGIN_NAMESPACE

class Ui_ValidatorsForm
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    LocaleSelector *localeSelector;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout1;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *minVal;
    QLabel *label_2;
    QSpinBox *maxVal;
    QFrame *frame;
    QVBoxLayout *vboxLayout2;
    LEDWidget *ledWidget;
    QLabel *label_7;
    QSpacerItem *spacerItem1;
    QLineEdit *editor;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout2;
    QGridLayout *gridLayout1;
    QLabel *label_3;
    QDoubleSpinBox *doubleMinVal;
    QLabel *label_5;
    QComboBox *doubleFormat;
    QLabel *label_4;
    QDoubleSpinBox *doubleMaxVal;
    QLabel *label_6;
    QSpinBox *doubleDecimals;
    QFrame *frame_2;
    QVBoxLayout *vboxLayout4;
    LEDWidget *doubleLedWidget;
    QLabel *label_8;
    QSpacerItem *spacerItem2;
    QLineEdit *doubleEditor;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem4;
    QPushButton *pushButton;

    void setupUi(QWidget *ValidatorsForm)
    {
        if (ValidatorsForm->objectName().isEmpty())
            ValidatorsForm->setObjectName("ValidatorsForm");
        ValidatorsForm->resize(526, 668);
        vboxLayout = new QVBoxLayout(ValidatorsForm);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName("hboxLayout");
        localeSelector = new LocaleSelector(ValidatorsForm);
        localeSelector->setObjectName("localeSelector");

        hboxLayout->addWidget(localeSelector);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        groupBox = new QGroupBox(ValidatorsForm);
        groupBox->setObjectName("groupBox");
        vboxLayout1 = new QVBoxLayout(groupBox);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName("vboxLayout1");
        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout1->setObjectName("hboxLayout1");
        gridLayout = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        minVal = new QSpinBox(groupBox);
        minVal->setObjectName("minVal");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(minVal->sizePolicy().hasHeightForWidth());
        minVal->setSizePolicy(sizePolicy);
        minVal->setMinimum(-1000000);
        minVal->setMaximum(1000000);

        gridLayout->addWidget(minVal, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        maxVal = new QSpinBox(groupBox);
        maxVal->setObjectName("maxVal");
        sizePolicy.setHeightForWidth(maxVal->sizePolicy().hasHeightForWidth());
        maxVal->setSizePolicy(sizePolicy);
        maxVal->setMinimum(-1000000);
        maxVal->setMaximum(1000000);
        maxVal->setValue(1000);

        gridLayout->addWidget(maxVal, 1, 1, 1, 1);


        hboxLayout1->addLayout(gridLayout);

        frame = new QFrame(groupBox);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        vboxLayout2 = new QVBoxLayout(frame);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout2->setObjectName("vboxLayout2");
        ledWidget = new LEDWidget(frame);
        ledWidget->setObjectName("ledWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ledWidget->sizePolicy().hasHeightForWidth());
        ledWidget->setSizePolicy(sizePolicy1);
        ledWidget->setPixmap(QPixmap(QString::fromUtf8(":/ledoff.png")));
        ledWidget->setAlignment(Qt::AlignCenter);

        vboxLayout2->addWidget(ledWidget);

        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");

        vboxLayout2->addWidget(label_7);


        hboxLayout1->addWidget(frame);


        vboxLayout1->addLayout(hboxLayout1);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        vboxLayout1->addItem(spacerItem1);

        editor = new QLineEdit(groupBox);
        editor->setObjectName("editor");

        vboxLayout1->addWidget(editor);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ValidatorsForm);
        groupBox_2->setObjectName("groupBox_2");
        vboxLayout3 = new QVBoxLayout(groupBox_2);
#ifndef Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout3->setObjectName("vboxLayout3");
        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout2->setObjectName("hboxLayout2");
        gridLayout1 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout1->setObjectName("gridLayout1");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_3, 0, 0, 1, 1);

        doubleMinVal = new QDoubleSpinBox(groupBox_2);
        doubleMinVal->setObjectName("doubleMinVal");
        sizePolicy.setHeightForWidth(doubleMinVal->sizePolicy().hasHeightForWidth());
        doubleMinVal->setSizePolicy(sizePolicy);
        doubleMinVal->setMinimum(-100000.000000000000000);
        doubleMinVal->setMaximum(100000.000000000000000);
        doubleMinVal->setValue(0.000000000000000);

        gridLayout1->addWidget(doubleMinVal, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_5, 0, 2, 1, 1);

        doubleFormat = new QComboBox(groupBox_2);
        doubleFormat->addItem(QString());
        doubleFormat->addItem(QString());
        doubleFormat->setObjectName("doubleFormat");

        gridLayout1->addWidget(doubleFormat, 0, 3, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_4, 1, 0, 1, 1);

        doubleMaxVal = new QDoubleSpinBox(groupBox_2);
        doubleMaxVal->setObjectName("doubleMaxVal");
        sizePolicy.setHeightForWidth(doubleMaxVal->sizePolicy().hasHeightForWidth());
        doubleMaxVal->setSizePolicy(sizePolicy);
        doubleMaxVal->setMinimum(-100000.000000000000000);
        doubleMaxVal->setMaximum(100000.000000000000000);
        doubleMaxVal->setValue(1000.000000000000000);

        gridLayout1->addWidget(doubleMaxVal, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_6, 1, 2, 1, 1);

        doubleDecimals = new QSpinBox(groupBox_2);
        doubleDecimals->setObjectName("doubleDecimals");
        doubleDecimals->setValue(2);

        gridLayout1->addWidget(doubleDecimals, 1, 3, 1, 1);


        hboxLayout2->addLayout(gridLayout1);

        frame_2 = new QFrame(groupBox_2);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Sunken);
        vboxLayout4 = new QVBoxLayout(frame_2);
#ifndef Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout4->setObjectName("vboxLayout4");
        doubleLedWidget = new LEDWidget(frame_2);
        doubleLedWidget->setObjectName("doubleLedWidget");
        doubleLedWidget->setPixmap(QPixmap(QString::fromUtf8(":/ledoff.png")));
        doubleLedWidget->setAlignment(Qt::AlignCenter);

        vboxLayout4->addWidget(doubleLedWidget);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");

        vboxLayout4->addWidget(label_8);


        hboxLayout2->addWidget(frame_2);


        vboxLayout3->addLayout(hboxLayout2);

        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        vboxLayout3->addItem(spacerItem2);

        doubleEditor = new QLineEdit(groupBox_2);
        doubleEditor->setObjectName("doubleEditor");

        vboxLayout3->addWidget(doubleEditor);


        vboxLayout->addWidget(groupBox_2);

        spacerItem3 = new QSpacerItem(20, 111, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vboxLayout->addItem(spacerItem3);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName("hboxLayout3");
        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout3->addItem(spacerItem4);

        pushButton = new QPushButton(ValidatorsForm);
        pushButton->setObjectName("pushButton");

        hboxLayout3->addWidget(pushButton);


        vboxLayout->addLayout(hboxLayout3);


        retranslateUi(ValidatorsForm);
        QObject::connect(pushButton, &QPushButton::clicked, ValidatorsForm, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(ValidatorsForm);
    } // setupUi

    void retranslateUi(QWidget *ValidatorsForm)
    {
        ValidatorsForm->setWindowTitle(QCoreApplication::translate("ValidatorsForm", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ValidatorsForm", "QIntValidator", nullptr));
        label->setText(QCoreApplication::translate("ValidatorsForm", "Min:", nullptr));
        label_2->setText(QCoreApplication::translate("ValidatorsForm", "Max:", nullptr));
        label_7->setText(QCoreApplication::translate("ValidatorsForm", "editingFinished()", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ValidatorsForm", "QDoubleValidator", nullptr));
        label_3->setText(QCoreApplication::translate("ValidatorsForm", "Min:", nullptr));
        label_5->setText(QCoreApplication::translate("ValidatorsForm", "Format:", nullptr));
        doubleFormat->setItemText(0, QCoreApplication::translate("ValidatorsForm", "Standard", nullptr));
        doubleFormat->setItemText(1, QCoreApplication::translate("ValidatorsForm", "Scientific", nullptr));

        label_4->setText(QCoreApplication::translate("ValidatorsForm", "Max:", nullptr));
        label_6->setText(QCoreApplication::translate("ValidatorsForm", "Decimals:", nullptr));
        doubleLedWidget->setText(QString());
        label_8->setText(QCoreApplication::translate("ValidatorsForm", "editingFinished()", nullptr));
        pushButton->setText(QCoreApplication::translate("ValidatorsForm", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ValidatorsForm: public Ui_ValidatorsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VALIDATORS_H
