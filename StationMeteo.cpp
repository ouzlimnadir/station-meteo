#include "StationMeteo.h"


StationMeteo::StationMeteo(){

}
void StationMeteo::add(IObserver *observer) {
    list_observer.push_back(observer);
}
void StationMeteo::remove(IObserver *observer) {
    list_observer.remove(observer);
}
void StationMeteo::notify() {
    auto i = list_observer.begin();
    //pression=;
    while (i != list_observer.end()) {
        (*i)->update();
        i++;
    }
}
