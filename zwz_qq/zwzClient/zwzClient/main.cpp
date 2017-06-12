#include "loginwindow.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LoginWindow w;
    w.show();
    /**
    FriendWindow friendw;
    friendw.show();**/
    return a.exec();
}
