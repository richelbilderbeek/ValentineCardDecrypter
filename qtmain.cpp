


#include <QApplication>
#include "qtvalentinecarddecryptermenudialog.h"


int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  ribi::QtValentineCardDecrypterMenuDialog w;
  w.show();
  return a.exec();
}
