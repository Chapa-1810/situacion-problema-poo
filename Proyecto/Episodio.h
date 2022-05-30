#ifndef EPISODIO_h
#define EPISODIO_h

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Episodio{
  protected:
    string titulo_;
    int temporada_;
    int calificacion_;

  public:
    //Constructores    
    Episodio();
    Episodio(string titulo, int temporada, int calificacion);
    
    //Setters
    void setTitulo(string titulo);
    void setTemporada(int temporada);
    void setCalificacion(int calificacion);

    //Getters
    string getTitulo();
    int getTemporada();
    int getCalificacion();  

    //Methods
    string str();
};

#endif
