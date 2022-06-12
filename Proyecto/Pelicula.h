#ifndef Pelicula_h
#define Pelicula_h

#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Video.h"
using namespace std;

class Pelicula :public Video {
protected:
    int oscares;

public:
    //Constructores    
    Pelicula();
    Pelicula(string iD_, string titulo_, int duracion_, string genero_, double calificacion_promedio_, int oscares_);

    //Destructor
    ~Pelicula();

    //Setters
    void setOscares(int oscares_);

    //Getters
    int getOscares();

    //Methods
    string str();

    friend ostream& operator<<(ostream& out, const Pelicula &v);

};

#endif
#pragma once
