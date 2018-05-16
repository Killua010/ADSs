#pragma once
#include "iSaida.h"
#include "Anuncio.h"
#include <list>

class SMS: public iSaida
{
public:
	SMS();
	~SMS();

	bool enviar()
	{
		return true;
	}

	int enviar(std::list<Anuncio> lAnuncio) 
	{

	}
};

