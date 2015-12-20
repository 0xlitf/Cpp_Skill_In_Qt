#include <QApplication>
#include <QFileSystemModel>
#include <QtGui/QTreeView>

int _tmain(int argc, char* argv[])
{
	 QApplication app(argc, argv);
     QFileSystemModel model;
	 model.setRootPath("C:/Documents and Settings");
	 QTreeView treeView;
     treeView.setModel(&model);
     treeView.show();
	 return app.exec();
 }

