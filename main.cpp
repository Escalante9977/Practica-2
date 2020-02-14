#include <iostream>
#include "Gato.h"

using namespace std;

int main(){
	
Gato Pelusa(5);
Pelusa.Maullar();

cout << "Albus es un gato que tiene";
cout << Pelusa.ObtenerEdad() << "anios de edad" << endl;
Pelusa.Maullar();
Pelusa.AsignarEdad(7);
cout << "Ahora Albus tiene " ;
cout << Pelusa.ObtenerEdad() << " anios de edad" << endl;
return 0;
}
