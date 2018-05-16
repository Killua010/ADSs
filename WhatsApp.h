#pragma once
#include "iSaida.h"
#include "Anuncio.h"
#include <list>

class WhatsApp : public iSaida
{
public:
	WhatsApp();
	~WhatsApp();

	bool enviar()
	{
		return true;
	}

	int enviar(std::list<Anuncio> lAnuncio)
	{

	}
};

