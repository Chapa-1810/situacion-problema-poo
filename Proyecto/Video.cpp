#include "Video.h"

//Constructores    
Video::Video(){
  iD_ = " ";
  titulo_ = " ";
  duracion_ = 0;
  genero_ = " ";
  calificacion_promedio_ = 0;
}

Video::Video(string iD, string titulo, int duracion, string genero, double calificacion_promedio){
  iD_ = iD;
  titulo_ = titulo;
  duracion_ = duracion;
  genero_ = genero;
  calificacion_promedio_ = calificacion_promedio;
}

    
//Setters
void Video::setId(string iD){
  iD_ = iD;
}

void Video::setNombre(string titulo){
  titulo_ = titulo;
}

void Video::setDuracion(int duracion){
  duracion_ = duracion;
}

void Video::setGenero(string genero){
  genero_ = genero;
}

void Video::setCalificacion(double calificacion_promedio){
  calificacion_promedio_ = calificacion_promedio;
} 


//Getters
string Video::getId(){
  return iD_;
}

string Video::getNombre(){
    return  titulo_;
}

int Video::getDuracion(){
    return  duracion_;
}

string Video::getGenero(){
    return genero_;
}

double Video::getCalificacion(){
    return  calificacion_promedio_;
}  


//Methods
string Video::str(){
    return iD_ + "," + titulo_ + "," + to_string(duracion_) + "," + genero_ + "," + to_string(calificacion_promedio_);
}
