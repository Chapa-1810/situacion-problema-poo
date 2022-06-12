#ifndef Peliculas_h
#define Peliculas_h

#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Pelicula.h"
#include <fstream>
#include <sstream>
using namespace std;
const int kMaxPeliculas = 50;

class Peliculas {
protected:

    Pelicula* arrPtrPeliculas[kMaxPeliculas];
    int cantidad;

public:
    //Constructores    
    Peliculas();

    //Setters
    void setPtrPeliculas(Pelicula* arrPtrPeliculas_);
    void setCantidadPeliculas(int cantidad_);

    //Getters
    Pelicula* getPtrPelicula(string iD_);
    int getCantidadPeliculas();

    //Methods
    void leerArchivo();

    void reporteTodasPeliculas();
    void reporteConCalificacion(int calificacion_);
    void reporteGenero(string genero_);
};

#endif
#pragma once
