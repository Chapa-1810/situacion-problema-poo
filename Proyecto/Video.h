#ifndef VIDEO_h
#define VIDEO_h

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Video{
  protected:
    string iD_;
    string titulo_;
    int duracion_;
    string genero_;
    double calificacion_promedio_;

  public:
    //Constructores    
    Video();
    Video(string iD, string titulo, int duracion, string genero, double calificacion_promedio);
    
    //Setters
    void setId(string iD);
    void setNombre(string titulo);
    void setDuracion(int duracion);
    void setGenero(string genero);
    void setCalificacion(double calificacion_promedio); 

    //Getters
    string getId();
    string getNombre();
    int getDuracion();
    string getGenero();
    double getCalificacion();    

    //Methods
    string str();
};

#endif
