#include "Episodio.h"

//Constructores
Episodio::Episodio(){
  titulo_ = " ";
  temporada_ = 0;
  calificacion_ = 0;
}

Episodio::Episodio(string titulo, int temporada, int calificacion){
  titulo_ = titulo;
  temporada_ = temporada;
  calificacion_ = calificacion;
}

    
//Setters
void Episodio::setTitulo(string titulo){
  titulo_ = titulo;
}

void Episodio::setTemporada(int temporada){
  temporada_ = temporada;
}

void Episodio::setCalificacion(int calificacion){
  calificacion_ = calificacion;
}


//Getters
string Episodio::getTitulo(){
  return titulo_;
}

int Episodio::getTemporada(){
  return temporada_;
}

int Episodio::getCalificacion(){
  return calificacion_;
} 


//Methods
string Episodio::str() const{
  return titulo_ + ", " + to_string(temporada_) + ", " + to_string(calificacion_);
}
