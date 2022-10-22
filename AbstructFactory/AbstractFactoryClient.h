/*
* AbstractFactoryClient.h
*
*/

#ifndef ABSTRACTFACTORYCLIENT_H_
#define ABSTRACTFACTORYCLIENT_H_

class DriverFactory;
class LEDDriver;

class AbstractFactoryClient {
    public:
        AbstractFactoryClient();
        virtual ~AbstractFactoryClient();

        void execute();

    private:
        DriverFactory* driverFactory_;
        LEDDriver* driver_;
};

#endif /* ABSTRACTFACTORYCLIENT_H_ */
