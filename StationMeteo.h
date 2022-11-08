#ifndef METEO_STATIONMETEO_H
#define METEO_STATIONMETEO_H

#include <iostream>
#include "IObserver.h"
#include "ISubject.h"

class StationMeteo : public ISubject{
private :
    std::list<IObserver *> list_observer;
    int pression;
    double temperature;
    double humidite;
    int precipitation;
    double vent;
    std::string ventDirection;
    std::string apercu;
public :
    void add(IObserver*);
    void remove(IObserver*);
    void notify();
    void listener();

    int getPression() const;
    double getTemperature() const;
    double getHumidite() const;
    int getPrecipitation() const;
    double getVent() const;
    const std::string &getVentDirection() const;
    const std::string &getApercu() const;

    void setPression(int pression);
    void setTemperature(double temperature);
    void setHumidite(double humidite);
    void setPrecipitation(int precipitation);
    void setVent(double vent);
    void setVentDirection(const std::string &ventDirection);
    void setApercu(const std::string &apercu);

};


#endif //METEO_STATIONMETEO_H
