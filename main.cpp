#pragma GCC diagnostic push



#include "valentinecarddecryptermenudialog.h"
#pragma GCC diagnostic pop

int main(int argc, char *argv[])
{
  const std::vector<std::string> args {
    ribi::ValentineCardDecrypterMenuDialog::ConvertArguments(argc,argv)
  };
  ribi::ValentineCardDecrypterMenuDialog d;
  return d.Execute(args);
}
