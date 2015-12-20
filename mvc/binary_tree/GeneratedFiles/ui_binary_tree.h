/********************************************************************************
** Form generated from reading UI file 'binary_tree.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BINARY_TREE_H
#define UI_BINARY_TREE_H

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

class Ui_binary_treeClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *binary_treeClass)
    {
        if (binary_treeClass->objectName().isEmpty())
            binary_treeClass->setObjectName(QStringLiteral("binary_treeClass"));
        binary_treeClass->resize(600, 400);
        menuBar = new QMenuBar(binary_treeClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        binary_treeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(binary_treeClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        binary_treeClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(binary_treeClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        binary_treeClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(binary_treeClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        binary_treeClass->setStatusBar(statusBar);

        retranslateUi(binary_treeClass);

        QMetaObject::connectSlotsByName(binary_treeClass);
    } // setupUi

    void retranslateUi(QMainWindow *binary_treeClass)
    {
        binary_treeClass->setWindowTitle(QApplication::translate("binary_treeClass", "binary_tree", 0));
    } // retranslateUi

};

namespace Ui {
    class binary_treeClass: public Ui_binary_treeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BINARY_TREE_H
