#include "StationMeteo.h"
#include <fstream>
#include <thread>

using namespace std;

void StationMeteo::add(IObserver *observer) {
    list_observer.push_back(observer);
}
void StationMeteo::remove(IObserver *observer) {
    list_observer.remove(observer);
}
void StationMeteo::notify() {
    auto i = list_observer.begin();
    while (i != list_observer.end()) {
        (*i)->update(this);
        i++;
    }
}
void StationMeteo::listener(){
    fstream file;
    file.open("data.txt");
    if (file.is_open()) {
        file.read(reinterpret_cast<char*>(this),sizeof(*this));
        int i=0;
        srand((unsigned int)time(0));
        while (!file.eof()){
            StationMeteo::notify();
            file.read(reinterpret_cast<char*>(this),sizeof(*this));
            this_thread::sleep_for (std::chrono::seconds(5+rand()%5));
        }
        file.close();
    }
}

void StationMeteo::setPression(int pression) {
    StationMeteo::pression = pression;
}

void StationMeteo::setTemperature(double temperature) {
    StationMeteo::temperature = temperature;
}

void StationMeteo::setHumidite(double humidite) {
    StationMeteo::humidite = humidite;
}

void StationMeteo::setPrecipitation(int precipitation) {
    StationMeteo::precipitation = precipitation;
}

void StationMeteo::setVent(double vent) {
    StationMeteo::vent = vent;
}

void StationMeteo::setVentDirection(const string &ventDirection) {
    StationMeteo::ventDirection = ventDirection;
}

void StationMeteo::setApercu(const string &apercu) {
    StationMeteo::apercu = apercu;
}

int StationMeteo::getPression() const {
    return pression;
}

double StationMeteo::getTemperature() const {
    return temperature;
}

double StationMeteo::getHumidite() const {
    return humidite;
}

int StationMeteo::getPrecipitation() const {
    return precipitation;
}

double StationMeteo::getVent() const {
    return vent;
}

const string &StationMeteo::getVentDirection() const {
    return ventDirection;
}

const string &StationMeteo::getApercu() const {
    return apercu;
}
