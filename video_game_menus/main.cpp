#include <QApplication>
#include "./menu_handler.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    menu_handler b;
    b.show();
    return a.exec();
}
