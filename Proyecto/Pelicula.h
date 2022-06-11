#ifndef Pelicula_h
#define Pelicula_h

#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Video.h"
using namespace std;

class Pelicula:public Video{
  protected:
    int oscares_;

  public:
    //Constructores    
    Pelicula();
    Pelicula(string iD, string titulo, int duracion, string genero, double calificacion_promedio, int oscares_);

    //Destructor
    ~Pelicula();
    
    //Setters
    void setOscares(int oscares);

    //Getters
    int getOscares();   

    //Methods
    string str();
    friend ostream &operator<<(ostream &out, const Pelicula &pelicula);
};

#endif