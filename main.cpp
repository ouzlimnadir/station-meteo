#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int pression;
    double temperature;
    double humidite;
    int precipitation;
    double vent;
    std::string ventDirection;
    std::string apercu;
    std::string tabDir[4] = {"Nord","Est","Sud","West"};
    std::string tabApp[3] = {"Degage","Nuageux","Couvert"};
    ofstream monFlux("data.txt");
    srand((unsigned int)time(0));
    for (int i=0; i<50; i++) {
        pression = 1000 + rand()%30 ;
        temperature = 20 + rand()%20;
        humidite = rand()%70;
        precipitation = rand()%100;
        vent = 10 + rand()%20;
        ventDirection = tabDir[rand()%4];
        apercu = tabApp[rand()%3];
        monFlux << pression << " " << temperature << " " << humidite << " " << precipitation << " " << vent << " " << ventDirection << " " << apercu << endl;
    }
    return 0;
}
