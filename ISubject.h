#ifndef METEO_ISUBJECT_H
#define METEO_ISUBJECT_H

#include "IObserver.h"
#include <iostream>
#include <list>

class ISubject{
protected :
    std::list<IObserver *> list_observer;
public :
    virtual void add(IObserver*) = 0;
    virtual void remove(IObserver*) = 0;
    virtual void notify() = 0;
};

#endif //METEO_ISUBJECT_H
