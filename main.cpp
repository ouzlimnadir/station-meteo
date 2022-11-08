#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "StationMeteo.h"
#include "ConditionsActuelles.h"


using namespace std;

int main() {
    ISubject *Agadir = new StationMeteo();
    IObserver *maintenant = new ConditionsActuelles();

    std::string tabDir[4] = {"Nord","Est","Sud","West"};
    std::string tabApp[3] = {"Degage","Nuageux","Couvert"};
    ofstream file;
    file.open("data.txt");
    srand((unsigned int)time(0));
    for (int i=0; i<5; i++) {
        ((StationMeteo*)Agadir)->setPression(1000 + rand()%30);
        ((StationMeteo*)Agadir)->setTemperature(20 + rand()%20);
        ((StationMeteo*)Agadir)->setHumidite(rand()%70);
        ((StationMeteo*)Agadir)->setPrecipitation(rand()%100);
        ((StationMeteo*)Agadir)->setVent(10 + rand()%20);
        ((StationMeteo*)Agadir)->setVentDirection(tabDir[rand()%4]);
        ((StationMeteo*)Agadir)->setApercu(tabApp[rand()%3]);
        cout << ((StationMeteo*)Agadir)->getPression() << endl;
        file.write((char*)&Agadir,sizeof(*Agadir));
    }
    file.close();
    ((StationMeteo*)Agadir)->listener();

    return 0;
}
