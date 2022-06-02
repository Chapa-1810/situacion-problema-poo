#ifndef Peliculas_h
#define Peliculas_h

#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Pelicula.h"
using namespace std;

class Peliculas{
  protected:
    const int kMaxPeliculas = 50;
    Pelicula *arrPtrPeliculas_[50]; 
    int cantidad_ ;

  public:
    //Constructores    
    Peliculas();
    
    //Setters
    void setPtrPeliculas(Pelicula *arrPtrPeliculas);
    void setCantidadPeliculas(int cantidad);

    //Getters
    Pelicula *getPtrPelicula(string titulo);
    int getCantidadPeliculas();

    //Methods
    void leerArchivo();

    void reporteTodasPeliculas();
    void reporteConCalificacion(int calificacion);
    void reporteGenero(string genero);   
};

#endif