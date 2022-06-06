#include "Peliculas.h"
#include <iostream>
#include<string.h>
using namespace std;

Peliculas::Peliculas() {}

void Peliculas::leerArchivo() {
	fstream fin;
	string row[6];
	string line, word;
	fin.open("", ios::in);

	cantidad = 0;

	while (getline(fin, line)) {
		cout << cantidad << line << endl;
		stringstream s(line);

		int iR = 0;
		while (getline(s, word, ",")) {
			row[iR++] = word;
		}
	}
	arrPtrPeliculas[cantidad] = new Pelicula(row[0], row[1], stoi(row[2]), row[3],
		stod(row[4]), stoi(row[5]));

	cout << "iD: " << row[0] << "\n";
	cout << "iD: " << row[1] << "\n";
	cout << "iD: " << row[2] << "\n";
	cout << "iD: " << row[3] << "\n";
	cout << "iD: " << row[4]<< "\n";
	cout << "iD: " << row[5] << "\n";
}
void Peliculas::reporteTodasLasPeliculas() {}
void Peliculas::reporteConCalificacion(double _calificacion) {}
void Peliculas::reporteGenero(string _genero) {}

Pelicula* Peliculas::getPtrPelicula(string _iD) {}
int Peliculas::getCantidadPeliculas() {}

void Peliculas::setPtrPeliculas(Pelicula *_arrPtrPeliculas) {}
void Peliculas::setCantidadPeliculas(int _cantidad) {}

