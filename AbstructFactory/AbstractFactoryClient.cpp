/*
* AbstractFactoryClient.cpp
*
*/

#include <iostream>
#include "AbstractFactoryClient.h"
#include "DriverFactory.h"
#include "LEDDriver.h"

AbstractFactoryClient::AbstractFactoryClient() {
    driverFactory_ = DriverFactory::getInstance();
    driver_ = driverFactory_->createLEDDriver();
}

AbstractFactoryClient::~AbstractFactoryClient() {
}

void AbstractFactoryClient::execute() {
	std::cout << "Execute AbstractFactoryClient" << std::endl;
	driverFactory_->displayName();
	driver_->turnON();
}
