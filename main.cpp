#include "rlpcmain.hpp"
#include "search.hpp"
#include <QApplication>

int main(int argc, char *argv[]){
  QApplication a(argc, argv);
  rlpcMain w;
  w.show();
  return a.exec();
}
