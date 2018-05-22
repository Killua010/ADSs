#include "Anuncio.h"



Anuncio::Anuncio()
{
}


Anuncio::~Anuncio()
{
}

void Anuncio::setConteudo(string conteudo)
{
	this->conteudo = conteudo;
}

void Anuncio::setDestinatraio(string destinatario)
{
	this->destinatario = destinatario;
}

void Anuncio::setEndereco(string endereco)
{
	this->endereco = endereco;
}

void Anuncio::setTitulo(string titulo)
{
	this->titulo = titulo;
}

string Anuncio::getConteudo()
{
	return conteudo;
}

string Anuncio::getDestinatario()
{
	return destinatario;
}

string Anuncio::getEndereco()
{
	return endereco;
}

string Anuncio::getTitulo()
{
	return endereco;
}
