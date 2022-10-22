/*
* LEDDriverFreeBSD.cpp
*
*/

#include <iostream>
#include "LEDDriverFreeBSD.h"

LEDDriverFreeBSD::LEDDriverFreeBSD() {}

LEDDriverFreeBSD::~LEDDriverFreeBSD() {}

void LEDDriverFreeBSD::turnON() const {
    std::cout << "LED ON on FreeBSD" << std::endl;
}

void LEDDriverFreeBSD::turnOFF() const {
    std::cout << "LED OFF on FreeBSD" << std::endl;
}
