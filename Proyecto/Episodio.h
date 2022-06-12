#ifndef EPISODIO_h
#define EPISODIO_h

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Episodio {
protected:
    string titulo;
    int temporada;
    int calificacion;

public:
    //Constructores    
    Episodio();
    Episodio(string titulo_, int temporada_, int calificacion_);

    //Setters
    void setTitulo(string titulo_);
    void setTemporada(int temporada_);
    void setCalificacion(int calificacion_);

    //Getters
    string getTitulo();
    int getTemporada();
    int getCalificacion();

    //Methods
    string str();
};

#endif
#pragma once
