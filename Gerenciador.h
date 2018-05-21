#include <iostream>
#include <list>
#include <string>

using namespace std;

// Imports
#include "Entrada.h"
#include "Anuncio.h"
#include "WhatsApp.h"
#include "SMS.h"
#include "Facebook.h"

class Gerenciador
{
public:
	Gerenciador();
	~Gerenciador();
	void carregar();
	void disparar();

private:
	list<Anuncio> anuncios;
	Entrada entrada;
	// Need to think about this association ,(Entrada --> Isaida (<-- WhatsApp, SMS, Facebook), how should we code this?
	iSaida *whatsApp = new WhatsApp();
	iSaida *sms = new SMS();
	iSaida *faceBook = new Facebook();

};

