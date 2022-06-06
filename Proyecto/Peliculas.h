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

class Peliculas{
  protected:
    
    Pelicula *arrPtrPeliculas_[kMaxPeliculas]; 
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