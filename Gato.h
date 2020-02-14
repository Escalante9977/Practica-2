#ifndef GATO_H
#define GATO_H

class Gato{
	
public:
	
Gato(int edadInicial);
~Gato();

int ObtenerEdad();

void AsignarEdad(int edad);

void Maullar();

private:
int suEdad;



};
#endif
