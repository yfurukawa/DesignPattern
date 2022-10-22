/*
* DriverFactoryFreeBSD.h
*
*/

#ifndef DRIVERFACTORYFREEBSD_H_
#define DRIVERFACTORYFREEBSD_H_

#include <iostream>
#include "DriverFactory.h"
#include "LEDDriverFreeBSD.h"

class DriverFactoryFreeBSD: public DriverFactory {
    public:
        DriverFactoryFreeBSD() {
            DriverFactoryFreeBSD::destroyed_ = false;
        }
        virtual ~DriverFactoryFreeBSD();
        static bool isDestroyed() {
            return DriverFactoryFreeBSD::destroyed_;
        }
        void displayName() const {
            std::cout << "DriverFactoryFreeBSD" << std::endl;
        }
        LEDDriver* createLEDDriver() const {
            LEDDriver* ret;
            ret = dynamic_cast<LEDDriver*>(new LEDDriverFreeBSD());
            return ret;
        }
    private:
        static bool destroyed_;
};

#endif /* DRIVERFACTORYFREEBSD_H_ */
