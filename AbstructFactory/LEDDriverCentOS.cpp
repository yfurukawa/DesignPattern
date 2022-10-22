/*
* LEDDriverCentOS.cpp
*
*/

#include <iostream>
#include "LEDDriverCentOS.h"

LEDDriverCentOS::LEDDriverCentOS() {}

LEDDriverCentOS::~LEDDriverCentOS() {}

void LEDDriverCentOS::turnON() const {
    std::cout << "LED ON on CentOS" << std::endl;
}

void LEDDriverCentOS::turnOFF() const {
    std::cout << "LED OFF on CentOS" << std::endl;
}
