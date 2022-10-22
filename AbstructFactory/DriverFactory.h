/*
* DriverFactory.h
*
*/

#ifndef DRIVERFACTORY_H_
#define DRIVERFACTORY_H_

class LEDDriver;

class DriverFactory {
    public:
        DriverFactory() {};
        virtual ~DriverFactory() {};
        static DriverFactory* getInstance();
        virtual LEDDriver* createLEDDriver() const = 0;
        virtual void displayName() const = 0;
};

#endif /* DRIVERFACTORY_H_ */
