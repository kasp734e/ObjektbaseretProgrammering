#pragma once
#include <iostream>
#include "Dato.h"

// Det her er den del af opgave a og resten af uml diagrammet
class Parkeringsboede {
    private:
    std::string sted;
    double beloeb;
    Dato dato;
    bool trukketTilbage;

    public:
    Parkeringsboede(std::string sted, double beloeb, Dato dato);
    std::string getSted();
    double getBeloeb();
    Dato getDato();
    bool isTrukketTilbage();
    int getAar();

    void setSted(std::string sted);
    void setBeloeb(double beloeb);
    void setDato(Dato dato);
    void setTrukketTilbage(bool TrukketTilbage);

};