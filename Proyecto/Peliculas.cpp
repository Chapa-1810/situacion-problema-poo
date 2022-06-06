#include "Peliculas.h"

Peliculas::Peliculas(){
    cantidad_ = 0;
}

    
//Setters
void Peliculas::setPtrPeliculas(Pelicula *arrPtrPeliculas){
    if (cantidad_ < kMaxPeliculas){
    arrPtrPeliculas_[cantidad_++] = arrPtrPeliculas;
    }
}

void Peliculas::setCantidadPeliculas(int cantidad){
    if (cantidad >= 0 && cantidad <= kMaxPeliculas){
        cantidad_ = cantidad;
    }
}


//Getters
Pelicula *Peliculas::getPtrPelicula(string iD){
    for (int index_pelicula = 0; index_pelicula < cantidad_; index_pelicula++){
        if (arrPtrPeliculas_[index_pelicula]->getId() == iD){
            return arrPtrPeliculas_[index_pelicula];
        }
    }
    cout << "Pelicula no encontrada" << endl;
}

int Peliculas::getCantidadPeliculas(){
    return cantidad_;
}


//Methods
void Peliculas::leerArchivo(){
    fstream fin;
	string row[6];
	string line, word;
	fin.open("", ios::in);

	cantidad_ = 0;

	while (getline(fin, line)) {
		stringstream s(line);

		int iR = 0;
		while (getline(s, word, ',')) {
			row[iR++] = word;
		}

        arrPtrPeliculas_[cantidad_] = new Pelicula(row[0], row[1], stoi(row[2]), row[3], stod(row[4]), stoi(row[5]));
	}
    fin.close();

    for (int iR = 0; iR < cantidad_; iR++){
        cout << iR << "-" << arrPtrPeliculas_[iR]->str() << endl;
    }
}


void Peliculas::reporteTodasPeliculas(){
    double sum_calificacion = 0;
    if (cantidad_ == 0){
        cout << "No hay peliculas para hacer el reporte" << endl;
        return;
    }

    for (int index_pelicula = 0; index_pelicula < cantidad_; index_pelicula++){
        cout << index_pelicula << "-"<< arrPtrPeliculas_[index_pelicula]->str() << endl;;
        sum_calificacion += arrPtrPeliculas_[index_pelicula]->getCalificacion();
    }

    cout << "El promedio de la calificacoin de las " << cantidad_ << " peliculas es de: " << sum_calificacion/cantidad_<< endl;
}

void Peliculas::reporteConCalificacion(int calificacion){
    //TODO
}

void Peliculas::reporteGenero(string genero){
    //TODO  
}
