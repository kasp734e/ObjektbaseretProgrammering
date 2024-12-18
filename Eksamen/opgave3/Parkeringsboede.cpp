// opgave 3a
#include "Dato.h"
#include "Parkeringsboede.h"
#include <iostream>
Parkeringsboede::Parkeringsboede(std::string sted, double beloeb, Dato dato) {
this -> sted = sted;
this -> beloeb = beloeb;
this -> dato = dato;
this -> trukketTilbage = false;
}
std::string Parkeringsboede::getSted() {
    return sted;
}
double Parkeringsboede::getBeloeb() {
    return beloeb;
}
Dato Parkeringsboede::getDato() {
    return dato;
}
bool Parkeringsboede::isTrukketTilbage() {
    return trukketTilbage;
}
int Parkeringsboede::getAar() {
    return dato.getÅr();
}
void Parkeringsboede::setSted(std::string sted) {
    this -> sted = sted;
}
void Parkeringsboede::setBeloeb(double beloeb) {
    this -> beloeb = beloeb;
}
void Parkeringsboede::setDato(Dato dato) {
    this -> dato = dato;
}
void Parkeringsboede::setTrukketTilbage(bool trukketTilbage) {
    this -> trukketTilbage = trukketTilbage;
}