#ifndef Peliculas_h
#define Peliculas_h

#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Pelicula.h"

using namespace std;


class Peliculas{
private:
    Pelicula* arrPtrPeliculas[50];
    int cantidad;

public:
    //Constructores    
    Peliculas();

    //Setters
    void setPtrPeliculas(Pelicula* _arrPtrPeliculas);
    void setCantidadPeliculas(int _cantidad);

    //Getters
    Pelicula* getPtrPelicula(string _iD);
    int getCantidadPeliculas();

    //Methods
    void leerArchivo();

    void reporteTodasLasPeliculas();
    void reporteConCalificacion(double _calificacion);
    void reporteGenero(string _genero);
};

#endif
