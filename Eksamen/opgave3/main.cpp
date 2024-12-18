#include <iostream>
#include "Dato.h"
#include "Parkeringsboede.h"
#include "Bilejer.h"
int main(int argc, char** argv) {
  std::cout << "Opgave 3" << std::endl;
    // Opgave 3b
    Dato dato1(2002, 9, 8);
    Dato dato2(2005, 12, 05);

    Parkeringsboede boede1("Sted1", 10, dato1);
    Parkeringsboede boede2("Sted2", 20, dato2);
// opgave 3g
    Bilejer ejer1("Jens", "Byvej");

    ejer1.tilfoejBoede(boede1);
    ejer1.tilfoejBoede(boede2);

    std:: cout << ejer1.gennemsnitligBoedestoerrelse()<< std::endl;

  return 0;
}