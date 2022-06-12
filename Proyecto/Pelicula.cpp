#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
#include "Pelicula.h"

//Constructores
Pelicula::Pelicula() : Video() {
    oscares = 0;
}

Pelicula::Pelicula(string iD_, string titulo_, int duracion_, string genero_, double calificacion_promedio_, int oscares_) : Video(iD_, titulo_, duracion_, genero_, calificacion_promedio_) {
    oscares = oscares_;
}

/*Video(iD, titulo, duracion, genero, calificacion) {}*/

//Destructor
Pelicula::~Pelicula() {

}

//Setters
void Pelicula::setOscares(int oscares_) {
    oscares = oscares_;
}

//Getters
int Pelicula::getOscares() {
    return oscares;
}

//Methods
string Pelicula::str() {
    return iD + ", " + titulo + ", " + to_string(duracion) + ", " + genero + ", " + to_string(calificacion_promedio) + to_string(oscares);
}

ostream& operator<<(ostream& out, const Pelicula& v) {
    out << v.iD <<  ',' << v.titulo << v.duracion << v.genero << v.calificacion_promedio << "," << endl;
    return out;
}