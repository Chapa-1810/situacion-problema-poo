#include "Serie.h"
#include <string>
#include <iostream>
using namespace std;

//Constructores
Serie::Serie() : Video() {
    cantidad = 0;
}

Serie::Serie(string iD_, string titulo_, int duracion_, string genero_, double calificacion_promedio_) : Video(iD_, titulo_, duracion_, genero_, 0) {
    cantidad = 0;
}


//Setters
void Serie::setEpisodio(int num_episodio_, Episodio episodio_) {
    if ((num_episodio_ >= 0 && num_episodio_ <= cantidad)) {
        episodios[num_episodio_] = episodio_;
    }
}

void Serie::setCantidad(int cantidad_) {
    cantidad = cantidad_;
}

//Getters
Episodio Serie::getEpisodio(int num_episodio_) {
    if (num_episodio_ >= 0 && num_episodio_ <= cantidad) {
        return episodios[num_episodio_];
    }
    else {
        return Episodio();
    }
}

int Serie::getCantidad() {
    return cantidad;
}

//Methods
double Serie::calculaCalificacionPromedio() {
    double calificacion_promedio_ = 0;
    for (int num_episodio_ = 0; num_episodio_ < cantidad; num_episodio_++) {
        calificacion_promedio_ += episodios[num_episodio_].getCalificacion();
    }
    if (cantidad > 0) {
        setCalificacion(calificacion_promedio_ / cantidad);
        return calificacion_promedio_ / cantidad;
    }
    else return 0;
}

string Serie::str() {
    string episodios_ = "\n";
    for (int num_episodio_ = 0; num_episodio_ < cantidad; num_episodio_++) {
        episodios_ = episodios_ +  episodios[num_episodio_].str() + '\n' ;
    }

    return "Serie: " + iD + ", " + titulo + ", " + to_string(duracion) + ", " + genero + ", " + to_string(calculaCalificacionPromedio()) + "\nEpisodios: " + episodios_;
}
