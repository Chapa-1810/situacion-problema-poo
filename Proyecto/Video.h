#ifndef Video_h
#define Video_h

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Video {
protected:
    string iD;
    string titulo;
    int duracion;
    string genero;
    double calificacion_promedio;

public:
    //Constructores    
    Video();
    Video(string iD_, string titulo_, int duracion_, string genero_, double calificacion_promedio_);

    //Setters
    void setId(string iD_);
    void setNombre(string titulo_);
    void setDuracion(int duracion_);
    void setGenero(string genero_);
    void setCalificacion(double calificacion_promedio_);

    //Getters
    string getId();
    string getNombre();
    int getDuracion();
    string getGenero();
    double getCalificacion();

    //Methods
    virtual string str();
    //virtual string str() = 0;

    // Si a la clase virtual, se le hace un = 0, en ese caso ya entra 
    // a ser una funcion pura o abstracta, esto en el .cpp de Video, significa que 
    // no se debe construir la funcion, solo se debe construir en las
    // clases hijas, si se hace de esta forma, la clase se llama clase
    // base abstracta y esta no puede ser declarada en el main, se puede hacer un
    // apuntador de esta, pero no un objeto Video por si solo 
};

#endif

#pragma once
