#include "ConditionsActuelles.h"
#include "StationMeteo.h"

/*ConditionsActuelles::ConditionsActuelles(ISubject sub){
    sub.add(reinterpret_cast<IObserver *>(this));
}*/
void ConditionsActuelles::update(ISubject *myStation) {
    pressionActuelle = ((StationMeteo*)myStation)->getPression();
    temperatureActuelle = ((StationMeteo*)myStation)->getTemperature();
    humiditeActuelle = ((StationMeteo*)myStation)->getHumidite();
    precipitationActuelle = ((StationMeteo*)myStation)->getPrecipitation();
    ventActuelle = ((StationMeteo*)myStation)->getVent();
    ventDirectionActuelle = ((StationMeteo*)myStation)->getVentDirection();
    apercuActuelle = ((StationMeteo*)myStation)->getApercu();
    ConditionsActuelles::affiche();
}
void ConditionsActuelles::affiche(){
    std::cout << pressionActuelle << std::endl;
}
