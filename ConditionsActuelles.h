#ifndef METEO_CONDITIONSACTUELLES_H
#define METEO_CONDITIONSACTUELLES_H
#include "ISubject.h"
#include "StationMeteo.h"

class ConditionsActuelles : public IObserver {
private :
    int pressionActuelle;
    double temperatureActuelle;
    double humiditeActuelle;
    int precipitationActuelle;
    double ventActuelle;
    std::string ventDirectionActuelle;
    std::string apercuActuelle;
public :
    //ConditionsActuelles(StationMeteo sub);
    void update(ISubject*);
    void affiche();
};


#endif //METEO_CONDITIONSACTUELLES_H
