#include "Video.h"
#include <string>
#include <iostream>
using namespace std;

//Constructores    
Video::Video() {
    iD = " ";
    titulo = " ";
    duracion = 0;
    genero = " ";
    calificacion_promedio = 0;
}

Video::Video(string iD_, string titulo_, int duracion_, string genero_, double calificacion_promedio_) {
    iD = iD_;
    titulo = titulo_;
    duracion = duracion_;
    genero = genero_;
    calificacion_promedio = calificacion_promedio_;
}


//Setters
void Video::setId(string iD_) {
    iD = iD_;
}

void Video::setNombre(string titulo_) {
    titulo = titulo_;
}

void Video::setDuracion(int duracion_) {
    duracion = duracion_;
}

void Video::setGenero(string genero_) {
    genero = genero_;
}

void Video::setCalificacion(double calificacion_promedio_) {
    calificacion_promedio = calificacion_promedio_;
}


//Getters
string Video::getId() {
    return iD;
}

string Video::getNombre() {
    return  titulo;
}

int Video::getDuracion() {
    return  duracion;
}

string Video::getGenero() {
    return genero;
}

double Video::getCalificacion() {
    return  calificacion_promedio;
}


//Methods
string Video::str() {
    return iD + "," + titulo + "," + to_string(duracion) + "," + genero + "," + to_string(calificacion_promedio);
}
//Se comento porque esta ahora sera una funcion virtual pura

