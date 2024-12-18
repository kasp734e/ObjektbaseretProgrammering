#include "Dato.h"

Dato::Dato() : år(0), måned(0), dag(0)  {}

Dato::Dato(int y, int m, int d) : år(y), måned(m), dag(d) { }

int Dato::getÅr() const { 
  return år;
}

int Dato::getMåned() const { 
  return måned;
}

int Dato::getDag() const { 
  return dag;
}