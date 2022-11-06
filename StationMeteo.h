#ifndef METEO_STATIONMETEO_H
#define METEO_STATIONMETEO_H

#include <iostream>
#include "IObserver.h"

class StationMeteo {
private :
    int pression;
    double temperature;
    double humidite;
    int precipitation;
    double vent;
    std::string ventDirection;
    std::string apercu;
public :
    StationMeteo();
    void add(IObserver);
    void remove(IObserver);
    void notify();

    int getPression();
    double getTemperature();
    double getHumidite();
    int getPrecipitation();
    double getVent();
    std::string getVentDirection();
    std::string getApercu();
};


#endif //METEO_STATIONMETEO_H
