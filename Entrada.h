#include <iostream>
#include <list>
#include <string>

#define PAUSA			system("pause")

using namespace std;

// Imports
#include "Anuncio.h"

class Entrada
{
public:
	Entrada();
	~Entrada();
	virtual list<Anuncio> ler();
	void inicializar(string params);

private:
	Anuncio *ads;
	list<Anuncio> advertisement;
};

