/*
* DriverFactoryCentOS.cpp
*
*/
#include <new>
#include <iostream>
#include "DriverFactoryCentOS.h"

bool DriverFactoryCentOS::destroyed_ = false;


DriverFactoryCentOS::~DriverFactoryCentOS() {
    destroyed_ = true;
}

// クラス名がDriverFactoryであることに注意
DriverFactory* DriverFactory::getInstance() {
    static DriverFactoryCentOS theFactory;
    if(DriverFactoryCentOS::isDestroyed()) {
        (void) new(&theFactory) DriverFactoryCentOS;
    }
    return &theFactory;
}
