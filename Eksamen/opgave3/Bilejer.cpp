#include "Bilejer.h"

// opgave 3d

    Bilejer::Bilejer(std::string navn, std::string adresse) {
        this -> navn = navn;
        this -> adresse = adresse;
    }
// opgave 3d
    void Bilejer::tilfoejBoede(std::string sted, double beloeb, Dato dato) {
        boeder.push_back(Parkeringsboede(sted, beloeb, dato));
    }

    void Bilejer::tilfoejBoede(Parkeringsboede boede) {
        boeder.push_back(boede);
    }
// opgave 3d
    std::vector<Parkeringsboede> Bilejer::hentAlleBoeder() {
        return boeder;
    }
// opgave 3e
    std::vector<Parkeringsboede> Bilejer::findBoederIAar(int aar) {
        std::vector<Parkeringsboede> aarBoeder;

        for (Parkeringsboede boede : boeder) {
            if (boede.getAar() == aar) {
                aarBoeder.push_back(boede);
            }
        }
        return aarBoeder;
    }
// opgave 3e
    double Bilejer::samletBoede() {
        double sum = 0;

        for (Parkeringsboede boede : boeder) {
            sum+=boede.getBeloeb();
        }
        return sum;
    }
// opgave 3f
    double Bilejer::gennemsnitligBoedestoerrelse() {
        double gennemsnitBoedeSum = 0;
        double count = 0;
        for (Parkeringsboede boede : boeder) {
            count++;
        }
        return samletBoede()/count;
    }
