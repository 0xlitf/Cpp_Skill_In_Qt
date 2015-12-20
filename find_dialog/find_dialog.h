#ifndef FINDDIALOG_H
#define FINDDIALOG_H
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
class FindDialog : public QDialog {
	Q_OBJECT
public:
	FindDialog(QWidget *parent = 0);
	~FindDialog();

private slots:
     void findClicked();
     void enableFindButton(const QString &text);

private:
     QLabel *label;
     QLineEdit *lineEdit;
     QCheckBox *caseCheckBox;
     QCheckBox *backwardCheckBox;
     QPushButton *findButton;
     QPushButton *closeButton; 
};


#endif // FINDDIALOG_H
