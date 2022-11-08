#ifndef METEO_ISUBJECT_H
#define METEO_ISUBJECT_H

#include "IObserver.h"
#include <iostream>
#include <list>

class ISubject{
public :
    virtual void add(IObserver*);
    virtual void remove(IObserver*);
    virtual void notify() = 0;
};

#endif //METEO_ISUBJECT_H
