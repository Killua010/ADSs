#pragma once
#include "iSaida.h"
#include "Anuncio.h"
#include <list>

class Facebook : public iSaida
{
public:
	Facebook();
	~Facebook();

	bool enviar()
	{
		return true;
	}

	int enviar(std::list<Anuncio> lAnuncio)
	{

	}
};

