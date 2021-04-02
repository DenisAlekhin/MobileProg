#ifdef QT_QML_DEBUG
#include <QtQuick>
#endif

#include <sailfishapp.h>
#include "counter.h"
#include "MyList.h"


int main(int argc, char *argv[])
{
    //QGuiApplication* app = SailfishApp::main(argc,argv);

    qmlRegisterType<Counter>("Counter", 1, 0, "Counter");
    qmlRegisterType<List>("List", 1, 0, "List");

    return SailfishApp::main(argc, argv);
}