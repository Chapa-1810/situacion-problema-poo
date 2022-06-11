#ifndef SERIES_h
#define SERIES_h

#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Video.h"
#include "Episodio.h"
using namespace std;

class Serie :public Video {
protected:
    Episodio episodios[5];
    int cantidad;

public:
    //Constructores    
    Serie();
    Serie(string iD_, string titulo_, int duracion_, string genero_, double calificacion_promedio_);

    //Setters
    void setEpisodio(int num_episodio_, Episodio episodio_);
    void setCantidad(int cantidad_);

    //Getters
    Episodio getEpisodio(int num_episodio_);
    int getCantidad();

    //Methods
    double calculaCalificacionPromedio();
    string str();
};

#endif

#pragma once
