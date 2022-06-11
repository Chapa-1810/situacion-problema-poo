#ifndef SERIES_h
#define SERIES_h

#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Video.h"
#include "Episodio.h"
using namespace std;

class Series:public Video{
  protected:
    Episodio episodios_[5];
    int cantidad_;

  public:
    //Constructores    
    Series();
    Series(string iD, string titulo, int duracion, string genero, double calificacion_promedio);
    
    //Setters
    void setEpisodio(Episodio episodio, int num_episodio);
    void setCantidad(int cantidad);

    //Getters
    Episodio getEpisodio(int num_episodio);
    int getCantidad();   

    //Methods
    double calculaCalificacionPromedio();
    string str();
    friend ostream &operator<<(ostream &out, const Series &pelicula);
};

#endif
