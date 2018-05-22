#include "Entrada.h"

Entrada::Entrada()
{
}


Entrada::~Entrada()
{
}

void Entrada::inicializar(string params)
{
	char cOpcao;
	cout << "Base de dados Inicializada com as seguintes configurações: " << params << endl;
	cin >> cOpcao;
}
