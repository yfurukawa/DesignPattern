/*
 * Singleton.cpp
 *
*/
#include <new>
#include <iostream>
#include "Singleton.h"

bool Singleton::destroyed_  = false;

Singleton::~Singleton() {
    destroyed_ = true;
}

Singleton* Singleton::getInstance() {
    static Singleton theSingleton;
    if( Singleton::isDestroyed() ) {
        (void) new(&theSingleton) Singleton;
    }
    return &theSingleton;
}

void Singleton::sayHello() {
  std::cout << "Hello World!" << std::endl;
  std::cout << greeting_ << std::endl;
}

void Singleton::setGreeting(std::string greeting) {
  greeting_ = greeting;
}

