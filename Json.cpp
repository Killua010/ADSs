#include "Json.h"



Json::Json()
{
}


Json::~Json()
{
}

list<Anuncio> Entrada::ler()
{
	ads = new Anuncio();
	ads->setTitulo("Programação Orientada a Objetos");
	ads->setConteudo("Estudem bastante e aprendam a programar em Python!!!!!");
	ads->setEndereco("Objeto Json");
	advertisement.push_back(*ads);
	return advertisement;
}