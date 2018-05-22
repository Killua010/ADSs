#include "Xml.h"



Xml::Xml()
{
}


Xml::~Xml()
{
}

list<Anuncio> Entrada::ler()
{
	ads = new Anuncio();
	ads->setTitulo("Programação Orientada a Objetos");
	ads->setConteudo("Estudem bastante e aprendam a programar em Python!!!!!");
	ads->setEndereco("XML");
	advertisement.push_back(*ads);
	return advertisement;
}