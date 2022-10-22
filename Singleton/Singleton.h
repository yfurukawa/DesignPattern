/*
 * Singleton.h
 *
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_
#include <string>

class Singleton {
    public:
        Singleton() {
            Singleton::destroyed_ = false;
        }
        virtual ~Singleton();
        static Singleton* getInstance();
        static bool isDestroyed() {
            return Singleton::destroyed_;
        }
        void sayHello();
        void setGreeting(std::string greeting);

    protected:
    private:
        Singleton(Singleton*) {};
        Singleton* operator=(Singleton* s) { return s; };
        static bool destroyed_;
        std::string greeting_;
};

#endif  // SINGLETON_H_
