#include "DataBase.h"



DataBase::DataBase()
{
}


DataBase::~DataBase()
{
}

list<Anuncio> Entrada::ler()
{
	// Simulando leitura em banco de dados
	ads = new Anuncio();
	ads->setTitulo("Programa��o Orientada a Objetos");
	ads->setConteudo("Estudem bastante e aprendam a programar em Python!!!!!");
	ads->setEndereco("DataBase");
	advertisement.push_back(*ads);
	return advertisement;
}