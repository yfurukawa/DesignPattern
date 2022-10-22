/*
* DriverFactoryFreeBSD.cpp
*
*/
#include <new>
#include <iostream>
#include "DriverFactoryFreeBSD.h"

bool DriverFactoryFreeBSD::destroyed_ = false;

DriverFactoryFreeBSD::~DriverFactoryFreeBSD() {
    destroyed_ = true;
}

DriverFactory* DriverFactory::getInstance() {
    static DriverFactoryFreeBSD theFactory;
    if(DriverFactoryFreeBSD::isDestroyed()) {
        (void) new(&theFactory) DriverFactoryFreeBSD;
    }
    return &theFactory;
}
