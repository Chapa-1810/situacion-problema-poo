#include "Peliculas.h"

Peliculas::Peliculas() {
    cantidad = 0;
}


//Setters
void Peliculas::setPtrPeliculas(Pelicula* arrPtrPeliculas_) {
    if (cantidad < kMaxPeliculas) {
        arrPtrPeliculas[cantidad++] = arrPtrPeliculas_;
    }
}

void Peliculas::setCantidadPeliculas(int cantidad_) {
    if (cantidad_ >= 0 && cantidad_ <= kMaxPeliculas) {
        cantidad = cantidad_;
    }
}


//Getters
Pelicula* Peliculas::getPtrPelicula(string iD_) {
    for (int index_pelicula = 0; index_pelicula < cantidad; index_pelicula++) {
        if (arrPtrPeliculas[index_pelicula]->getId() == iD_) {
            return arrPtrPeliculas[index_pelicula];
        }
    }
    cout << "Pelicula no encontrada" << endl;
}

int Peliculas::getCantidadPeliculas() {
    return cantidad;
}


//Methods
void Peliculas::leerArchivo() {
    fstream fin;
    string row[6];
    string line, word;
    fin.open("C:\\Users\\Andrés Carrizales\\Desktop\\Andrés\\2do - SEMESTRE\\TC1030.301 - Programación orientada a objetos\\Situacion_Pro\\situacion-problema-poo\\Proyecto\\Pelicula.csv", ios::in);

    cantidad_ = 0;

    while (getline(fin, line)) {
        stringstream s(line);
        int iR = 0;
        while (getline(s, word, ',')) {
            row[iR++] = word;
        }

        setPtrPeliculas(new Pelicula(row[0], row[1], stoi(row[2]), row[3], stod(row[4]), stoi(row[5])));
    }
    fin.close();
}


void Peliculas::reporteTodasPeliculas() {
    double sum_calificacion = 0;
    if (cantidad == 0) {
        cout << "No hay peliculas para hacer el reporte" << endl;
        return;
    }

    for (int index_pelicula = 0; index_pelicula < cantidad; index_pelicula++) {
        cout << index_pelicula << "-" << arrPtrPeliculas[index_pelicula]->str() << endl;;
        sum_calificacion += arrPtrPeliculas[index_pelicula]->getCalificacion();
    }

    cout << "El promedio de la calificacoin de las " << cantidad << " peliculas es de: " << sum_calificacion / cantidad << endl;
}

void Peliculas::reporteConCalificacion(int calificacion_) {
    bool check_calificacion = false;
    for (int index_pelicula = 0; index_pelicula < cantidad; index_pelicula++) {
        if (arrPtrPeliculas[index_pelicula]->getCalificacion() >= calificacion_) {
            if (!check_calificacion) { check_calificacion = true; }

            cout << "- " << arrPtrPeliculas[index_pelicula]->str() << endl;
        }
    }

    if (!check_calificacion) {
        cout << "No se encontro peliculas con la calificacion deseada." << endl;
    }
}

void Peliculas::reporteGenero(string genero_) {
    bool check_genero = false;
    for (int index_pelicula = 0; index_pelicula < cantidad; index_pelicula++) {
        if (arrPtrPeliculas[index_pelicula]->getGenero() == genero_) {
            if (!check_genero) { check_genero = true; }

            cout << "- " << arrPtrPeliculas[index_pelicula]->str() << endl;
        }
    }

    if (!check_genero) {
        cout << "No se encontro peliculas con la genero deseada." << endl;
    }
}
