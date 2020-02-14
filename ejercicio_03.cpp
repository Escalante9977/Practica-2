#include <iostream>
using namespace std;
class Gato{
public:
Gato(int edadInicial, int pesoI);

~Gato();

int ObtenerEdad() const;
int ObtenerPeso() const;

void asignarPeso(int peso);
void AsignarEdad(int edad);

void Maullar();

private:
	
int suEdad;
int suPeso;

};
//Constructor de Gato
Gato::Gato(int edadInicial, int pesoInicial){
	
suEdad = edadInicial;

suPeso = pesoInicial;

cout << "Se ha creado un objeto Gato de edad " << edadInicial << endl;

cout << "Se ha creado un objeto Gato de peso " << pesoInicial << endl;

}

Gato::~Gato(){
	
cout << "El objeto Gato se destruira en 9,8,7,6,5,4,3,2, 1,0 vidas ...." << endl;

}
// ObtenerEdad, metodo de acceso publico
// regresa el valor de su miembro suEdad

int Gato::ObtenerEdad() const{
return suEdad;
}

int Gato::ObtenerPeso() const{
	return suPeso;
	
}

// Definicion de AsignarEdad, metodo de
// acceso publico
void Gato::AsignarEdad(int edad){
// asignar a la variable miembro su Edad el
// valor pasado por el parametro edad
suEdad = edad;
}
void Gato::asignarPeso(int peso){
	
	suPeso = peso;
}
// definicion del metodo Maullar
// regresa: void
// parametros: ninguno
// accion: imprime "miauu"
void Gato::Maullar(){
cout << "Miau" << endl;
}
// crear un gato, asignar un valor asu edad, hacer que
// maulle, que nos diga su edad, y que vuelva a maullar.
int main(){
Gato Albus(5,12);
Albus.Maullar();

cout << "Albus es un gato que tiene ";
cout << Albus.ObtenerPeso() << " kgs" << endl;

cout << "Albus es un gato que tiene";
cout << Albus.ObtenerEdad() << " anios " << endl;


Albus.Maullar();
Albus.AsignarEdad(7);
Albus.asignarPeso(9);
cout << "Ahora Albus tiene " ;
cout << Albus.ObtenerEdad() << " anios de gato" << endl;
cout << "Ahora Albus tiene " ;
cout << Albus.ObtenerPeso() << " kgs" << endl;
return 0;
}
