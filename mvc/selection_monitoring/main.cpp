#include "mainwindow.h"

int _tmain(int argc, char* argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();
}
