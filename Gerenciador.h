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
#include "DataBase.h"
#include "Xml.h"
#include "Texto.h"
#include "Json.h"

class Gerenciador
{
public:
	Gerenciador();
	~Gerenciador();
	void carregar();
	void disparar();

private:
	list<Anuncio> advertisement;
	Entrada entrada;
	DataBase db;
	Xml xml;
	Texto txt;
	Json json;
	// Need to think about this association ,(Entrada --> Isaida (<-- WhatsApp, SMS, Facebook), how should we code this?
	iSaida *whatsApp = new WhatsApp();
	iSaida *sms = new SMS();
	iSaida *faceBook = new Facebook();

};

