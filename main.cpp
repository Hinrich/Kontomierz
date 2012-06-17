#include <QtGui/QApplication>
#include "Kontomierz.h"
#include "KontomierzReply.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    Kontomierz foo;
    KontomierzReply a("https://kontomierz.pl/user_accounts.xml");
    foo.show();
    return app.exec();
}
