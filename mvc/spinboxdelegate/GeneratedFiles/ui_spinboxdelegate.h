/********************************************************************************
** Form generated from reading UI file 'spinboxdelegate.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPINBOXDELEGATE_H
#define UI_SPINBOXDELEGATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_spinboxdelegateClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *spinboxdelegateClass)
    {
        if (spinboxdelegateClass->objectName().isEmpty())
            spinboxdelegateClass->setObjectName(QStringLiteral("spinboxdelegateClass"));
        spinboxdelegateClass->resize(600, 400);
        menuBar = new QMenuBar(spinboxdelegateClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        spinboxdelegateClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(spinboxdelegateClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        spinboxdelegateClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(spinboxdelegateClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        spinboxdelegateClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(spinboxdelegateClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        spinboxdelegateClass->setStatusBar(statusBar);

        retranslateUi(spinboxdelegateClass);

        QMetaObject::connectSlotsByName(spinboxdelegateClass);
    } // setupUi

    void retranslateUi(QMainWindow *spinboxdelegateClass)
    {
        spinboxdelegateClass->setWindowTitle(QApplication::translate("spinboxdelegateClass", "spinboxdelegate", 0));
    } // retranslateUi

};

namespace Ui {
    class spinboxdelegateClass: public Ui_spinboxdelegateClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPINBOXDELEGATE_H
