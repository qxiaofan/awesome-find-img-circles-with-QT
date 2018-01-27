#include "findcirclesapplication.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	findCirclesApplication w;
	w.show();
	return a.exec();
}
