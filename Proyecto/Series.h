#ifndef Series_h
#define Series_h

#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Serie.h"
#include <fstream>
#include <sstream>
using namespace std;
const int kMaxSeries = 50;

class Series {
protected:

    Serie* arrPtrSeries[kMaxSeries];
    int cantidad;

public:
    //Constructores    
    Series();

    //Setters
    void setPtrSeries(Serie* arrPtrSeries_);
    void setCantidadSeries(int cantidad_);

    //Getters
    Serie* getPtrSerie(string iD_);
    int getCantidadSeries();

    //Methods
    void leerArchivo();

    void reporteTodasSeries();
    void reporteConCalificacionSeries(int calificacion_);
    void reporteGeneroSeries(string genero_);
};

#endif
#pragma once
