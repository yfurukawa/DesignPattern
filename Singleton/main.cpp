#include <iostream>
#include "Singleton.h"

int main(int argc,char* argv[]) {
    Singleton* singleton1(Singleton::getInstance());
    singleton1->setGreeting("Good Morning");
    singleton1->sayHello();
    std::cout << std::endl;

    Singleton* singleton2(Singleton::getInstance());
    singleton2->setGreeting("Good Evening");
    singleton1->sayHello();
    singleton2->sayHello();
    std::cout << std::endl;

}

