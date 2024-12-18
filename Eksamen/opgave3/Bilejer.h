#pragma once
// opgave 3c

#include <string>
#include "Parkeringsboede.h"
#include <vector>
class Bilejer {

    private:
    std::string navn;
    std::string adresse;
    std::vector<Parkeringsboede> boeder;

    public:
    Bilejer(std::string navn, std::string adresse);
    void tilfoejBoede(Parkeringsboede boede); // overloaded funktion fordi jeg skal bruge den senere.
    void tilfoejBoede(std::string sted, double beloeb, Dato dato);
    std::vector<Parkeringsboede> hentAlleBoeder();
    std::vector<Parkeringsboede> findBoederIAar(int aar);
    double gennemsnitligBoedestoerrelse();
    double samletBoede();

};