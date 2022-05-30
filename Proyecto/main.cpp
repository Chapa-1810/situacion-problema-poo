#include <iostream>
#include "Video.h"  
#include "Series.h"


using namespace std;

int main(){
  Video video1, video2("01", "Drama de los rayados", 129, "Drama", 100);
  // Como ahora, Video.h tiene una funcion virtual pura, esta es una clase
  // abstracta entonces no se pueden declarar objetos
  
  Series serie1, serie2("02","La Reina", 300, "Drama", 0);
  Episodio episodio1("Coronacion", 1, 10);
  // Declaracion arreglo de la clase video
  Video *arrPtrVideo[] = {&video1, &video2, &serie2};  
    
  cout <<"Pointer de arreglo de videos: " <<endl;
  for (int i = 0; i < 3; i++){
    cout << arrPtrVideo[i] << endl;
  }

  // Esto es el polimorfismo, cuando se utiliza un mismo metodo VIRTUAL
  // para mandar a llamar un metodo de diferentess tipos de clases, esto es
  // posible gracias al uso de un arreglo de apuntdadores, cuando se declara
  // apuntador, se le tiene que dar &variable, esto porque el & representa una
  // direccion, al tener el arreglo de apuntadores, de clases hijas de la clase 
  // padre se obtiene un apuntador de tipo Video.  
  cout <<"Pointer arreglo virtual function CLASES: " <<endl;
  for (int i = 0; i < 3; i++){
    cout << arrPtrVideo[i]->str() << endl;
  }

  cout <<"Pointer arreglo virtual function VIDEO: " <<endl;
  for (int i = 0; i < 3; i++){
    cout << arrPtrVideo[i]->Video::str() << endl;
  }

  return 0;
}