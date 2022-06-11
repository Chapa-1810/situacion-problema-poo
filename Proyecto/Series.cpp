#include "Series.h"

Series::Series() {
    cantidad = 0;
}


//Setters
void Series::setPtrSeries(Serie* arrPtrSeries_) {
    if (cantidad < kMaxSeries) {
        arrPtrSeries[cantidad++] = arrPtrSeries_;
    }
}

void Series::setCantidadSeries(int cantidad_) {
    if (cantidad_ >= 0 && cantidad_ <= kMaxSeries) {
        cantidad = cantidad_;
    }
}


//Getters
Serie* Series::getPtrSerie(string iD_) {
    for (int index_serie = 0; index_serie < cantidad; index_serie++) {
        if (arrPtrSeries[index_serie]->getId() == iD_) {
            return arrPtrSeries[index_serie];
        }
    }
    cout << "Serie no encontrada" << endl;
}

int Series::getCantidadSeries() {
    return cantidad;
}


//Methods
void Series::leerArchivo() {
    string line, word, row[6];
    int iRow{}, iS{}, cantEpisodios{};
    fstream lectura;
    Episodio* episodio;
    
    lectura.open("C:\\Users\\Andrés Carrizales\\Desktop\\Andrés\\2do - SEMESTRE\\TC1030.301 - Programación orientada a objetos\\Serie2021.csv", ios::in);

    cantidad = 0;

    while (getline(lectura, line)) {
        std::stringstream registro(line);
        int iR = 0;
        while (getline(registro, word, ',')) {
            row[iR++] = word;
        }

        setPtrSeries(new Serie(row[0], row[1], stoi(row[2]), row[3], stod(row[4])));
    }
    lectura.close();

    lectura.open("C:\\Users\\Andrés Carrizales\\Desktop\\Andrés\\2do - SEMESTRE\\TC1030.301 - Programación orientada a objetos\\Episodio2021.csv", ios::in);
    while (getline(lectura, line)) {
        std::stringstream registro(line);

        int iR = 0;

        while (getline(registro, word, ',')) {
            row[iR++] = word;
        }
        iS = stoi(row[0]) - 500;

        episodio = new Episodio(row[1], stoi(row[2]), stod(row[3]));

        cantEpisodios = arrPtrSeries[iS]->getCantidad();

        if (cantEpisodios < 5) {
            arrPtrSeries[iS]->setEpisodio(cantEpisodios, *(episodio));
            arrPtrSeries[iS]->setCantidad(++cantEpisodios);
        }

    }

    lectura.close();

}


void Series::reporteTodasSeries() {
    double sum_calificacion = 0;
    if (cantidad == 0) {
        cout << "No hay series para hacer el reporte" << endl;
        return;
    }

    for (int index_serie = 0; index_serie < cantidad; index_serie++) {
        cout << index_serie << "-" << arrPtrSeries[index_serie]->str() << endl;;
        sum_calificacion += arrPtrSeries[index_serie]->getCalificacion();
    }

    cout << "El promedio de la calificacoin de las " << cantidad << " peliculas es de: " << sum_calificacion / cantidad << endl;
}

void Series::reporteConCalificacionSeries(int calificacion_) {
    bool check_calificacion = false;
    for (int index_serie = 0; index_serie < cantidad; index_serie++) {
        if (arrPtrSeries[index_serie]->getCalificacion() >= calificacion_) {
            if (!check_calificacion) { check_calificacion = true; }

            cout << "- " << arrPtrSeries[index_serie]->str() << endl;
        }
    }

    if (!check_calificacion) {
        cout << "No se encontro series con la calificacion deseada." << endl;
    }
}

void Series::reporteGeneroSeries(string genero) {
    bool check_genero = false;
    for (int index_serie = 0; index_serie < cantidad; index_serie++) {
        if (arrPtrSeries[index_serie]->getGenero() == genero) {
            if (!check_genero) { check_genero = true; }

            cout << "- " << arrPtrSeries[index_serie]->str() << endl;
        }
    }

    if (!check_genero) {
        cout << "No se encontro series con el genero deseada." << endl;
    }
}

void Series::caluclarCalificacionSeries(){
    double promedio = 0;
    for (int index_serie = 0; index_serie < cantidad; index_serie++) {
        promedio += arrPtrSeries[index_serie]->calculaCalificacionPromedio();
    }
    cout << "El promedio de la calificacion de las " << cantidad << " series es de: " << promedio / cantidad << endl;
}
