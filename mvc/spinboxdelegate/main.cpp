
/* This file is part of the examples of the Qt Toolkit.*/

#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QItemSelectionModel>
#include <QStandardItemModel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QStyleFactory>
#include "delegate.h"
int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	//	QApplication::setStyle("plastique"); 
	QApplication::setStyle(QStyleFactory::create("Fusion"));

	QStandardItemModel model(5, 2);
	QTableView tableView;
	tableView.setModel(&model);

	SpinBoxDelegate spinbox_dg;
	tableView.setItemDelegate(&spinbox_dg);

	for (int row = 0; row < 5; ++row) {
		for (int column = 0; column < 2; ++column) {
			QModelIndex index = model.index(row, column, QModelIndex());
			model.setData(index, QVariant((row + 1) * (column + 1)));
		}
	}
	tableView.setWindowTitle(QObject::tr("Spin Box Delegate"));
	tableView.show();
	return app.exec();
}

