/*
* DriverFactoryCentOS.h
*
*/

#ifndef DRIVERFACTORYCENTOS_H_
#define DRIVERFACTORYCENTOS_H_

#include <iostream>
#include "DriverFactory.h"
#include "LEDDriverCentOS.h"

class DriverFactoryCentOS: public DriverFactory {
    public:
        DriverFactoryCentOS() {
            DriverFactoryCentOS::destroyed_ = false;
        }
        virtual ~DriverFactoryCentOS();
        static bool isDestroyed() {
            return DriverFactoryCentOS::destroyed_;
        }
        void displayName() const {
            std::cout << "DriverFactoryCentOS" << std::endl;
        }
        LEDDriver* createLEDDriver() const {
            return dynamic_cast<LEDDriver*>(new LEDDriverCentOS());
        }
    private:
        static bool destroyed_;
};

#endif /* DRIVERFACTORYCENTOS_H_ */
