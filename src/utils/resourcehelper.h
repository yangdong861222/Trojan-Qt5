#ifndef RESOURCEHELPER_H
#define RESOURCEHELPER_H

#include <QSettings>

class ResourceHelper
{
public:
    ResourceHelper();
    static void installTAPDriver();

    static void copyDatFiles();
};

#endif // RESOURCEHELPER_H
