#include "Episodio.h"
#include <string>
#include <iostream>
using namespace std;

//Constructores
Episodio::Episodio() {
    titulo = " ";
    temporada = 0;
    calificacion = 0;
}

Episodio::Episodio(string titulo_, int temporada_, int calificacion_) {
    titulo = titulo_;
    temporada = temporada_;
    calificacion = calificacion_;
}


//Setters
void Episodio::setTitulo(string titulo_) {
    titulo = titulo_;
}

void Episodio::setTemporada(int temporada_) {
    temporada = temporada_;
}

void Episodio::setCalificacion(int calificacion_) {
    calificacion = calificacion_;
}


//Getters
string Episodio::getTitulo() {
    return titulo;
}

int Episodio::getTemporada() {
    return temporada;
}

int Episodio::getCalificacion() {
    return calificacion;
}


//Methods
string Episodio::str() {
    return titulo + ", " + to_string(temporada) + ", " + to_string(calificacion);
}
