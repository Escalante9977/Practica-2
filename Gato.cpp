#include <iostream>
#include "Gato.h"
using namespace std;
//Constructor de Gato
Gato::Gato(int edadInicial){
suEdad = edadInicial;
cout << "Se ha creado un objeto Gato de edad " << edadInicial << endl;
}
Gato::~Gato(){
cout << "El objeto Gato se destruira en 3, 2, 1 .... ya fue...." << endl;
}
// ObtenerEdad, metodo de acceso publico
// regresa el valor de su miembro suEdad
int Gato::ObtenerEdad(){
return suEdad;
}
// Definicion de AsignarEdad, metodo de
// acceso publico
void Gato::AsignarEdad(int edad){
// asignar a la variable miembro su Edad el
// valor pasado por el parametro edad
suEdad = edad;
}
// definicion del metodo Maullar
// regresa: void
// parametros: ninguno
// accion: imprime "miauu"
void Gato::Maullar(){
cout << "Miau" << endl;
}
