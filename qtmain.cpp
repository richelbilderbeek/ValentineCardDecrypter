#pragma GCC diagnostic push


#include <QApplication>
#include "qtvalentinecarddecryptermenudialog.h"
#pragma GCC diagnostic pop

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  ribi::QtValentineCardDecrypterMenuDialog w;
  w.show();
  return a.exec();
}
