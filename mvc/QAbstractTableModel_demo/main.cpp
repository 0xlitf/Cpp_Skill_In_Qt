#include "TableModel.h"
#include <QApplication>
#include <QTableView>

int _tmain(int argc, char* argv[])
{
	QApplication a(argc, argv);
	TableModel table(0);
	QTableView tableView;
	tableView.setModel( & table );
	tableView.show();
	return a.exec();
}
