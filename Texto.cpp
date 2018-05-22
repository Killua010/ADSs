#include "Texto.h"



Texto::Texto()
{
}


Texto::~Texto()
{
}


list<Anuncio> Entrada::ler()
{
	ads = new Anuncio();
	ads->setTitulo("Programação Orientada a Objetos");
	ads->setConteudo("Estudem bastante e aprendam a programar em Python!!!!!");
	ads->setEndereco("Texto");
	advertisement.push_back(*ads);
	return advertisement;
}