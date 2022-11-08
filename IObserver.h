#ifndef METEO_IOBSERVER_H
#define METEO_IOBSERVER_H


#include "ISubject.h"

class IObserver {
public :
    virtual void update(ISubject*) = 0;
};


#endif //METEO_IOBSERVER_H
