#include <QFile>
#include <qDebug>
int _tmain(int argc, char* argv[])
{
	QFile  f("data/test.txt");
	if (!f.open(QIODevice::ReadOnly | QIODevice::Text))
         return -1;

	QByteArray data=f.readAll();
	qDebug() << data;
}

