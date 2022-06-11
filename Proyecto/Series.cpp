#include "Series.h"

//Constructores
Series::Series(): Video(){
  cantidad_ = 0;
}

Series::Series(string iD, string titulo, int duracion, string genero, double calificacion_promedio) : Video(iD, titulo, duracion, genero, 0){
  cantidad_ = 0;
}

    
//Setters
void Series::setEpisodio(Episodio episodio, int num_episodio){
  if (cantidad_ >= 0 && (num_episodio >= 0 && num_episodio <= cantidad_)){
    episodios_[num_episodio] = episodio;
  }
}

void Series::setCantidad(int cantidad){
  if (cantidad < 0){
    cantidad_ = 0;
  } else if (cantidad > 4){
    cantidad_ = 4;
  }
}

//Getters
Episodio Series::getEpisodio(int num_episodio){
  if(num_episodio >= 0 && num_episodio <= cantidad_){
    return episodios_[num_episodio];
  } else {
    return Episodio();
  } 
}

int Series::getCantidad(){
  return cantidad_;
} 

//Methods
double Series::calculaCalificacionPromedio(){
  double calificacion_promedio = 0;
  for (int num_episodio = 0; num_episodio < cantidad_; num_episodio++){
    calificacion_promedio += episodios_[num_episodio].getCalificacion();
  }
  if (cantidad_ > 0){
    calificacion_promedio_ = calificacion_promedio / cantidad_;
    return calificacion_promedio/cantidad_;
  } else return 0;
}

string Series::str(){
  string episodios;
  for (int num_episodio = 0; num_episodio < cantidad_; num_episodio++){
    episodios += "\n  " + episodios_[num_episodio].str();
  }

  return "Serie " + iD_ + ", " + titulo_ + ", " + to_string(duracion_) + ", " + genero_ + ", " + to_string(calculaCalificacionPromedio()) + "\nEpisodios: " + episodios;
}

ostream &operator<<(ostream &out, const Series &series){
  string episodios = " ";
  for (int num_episodio = 0; num_episodio < series.cantidad_; num_episodio++){
    episodios += "\n  " + series.episodios_[num_episodio].str();
  }
  out << "Series " << series.iD_ << ", " << series.titulo_ << ", " << to_string(series.duracion_) << ", " << series.genero_ << ", " << to_string(series.calificacion_promedio_) << "\nEpisodios: " << episodios;
  return out;
}
