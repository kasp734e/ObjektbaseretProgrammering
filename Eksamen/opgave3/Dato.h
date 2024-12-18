#ifndef DATO_H
#define DATO_H

class Dato {
  public:
    Dato();
    Dato(int år, int måned, int dag);
    int getÅr() const;
    int getMåned() const;
    int getDag() const;
  private:
    int år;
    int måned;
    int dag;
};

#endif