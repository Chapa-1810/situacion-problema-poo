#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
#include "Pelicula.h"

//Constructores
Pelicula::Pelicula(): Video(){
  oscares_ = 0;
}

Pelicula::Pelicula(string iD, string titulo, int duracion, string genero, double calificacion_promedio) : Video(iD, titulo, duracion, genero, 0){
  oscares_ = 0;
}

    
//Setters
void Pelicula::setOscares(int oscares){
  oscares_ = oscares;
}

//Getters
int Pelicula::getOscares(){
  return oscares_;
} 

//Methods
string Pelicula::str(){
  return iD_ + ", " + titulo_ + ", " + to_string(duracion_) + ", " + genero_ + ", " + to_string(calificacion_promedio_) + "Oscares: " + to_string(oscares_);
}