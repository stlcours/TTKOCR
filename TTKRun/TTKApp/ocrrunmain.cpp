#include "ocrrunapplication.h"
#include "ocrrunobject.h"
#include "ocrobject.h"

int main(int argc, char *argv[])
{
    OCRRunApplication app(argc, argv);

    QCoreApplication::setOrganizationName(APPNAME);
    QCoreApplication::setOrganizationDomain(APPCOME);
    QCoreApplication::setApplicationName(APPNAME);

    if(app.isRunning())
    {
        qDebug() << "One app has already run!";
        return -1;
    }

    OCRRunObject object;
    object.checkValid();
    object.run(argc, argv);

    return app.exec();
}
