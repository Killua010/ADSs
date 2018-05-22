#include "Gerenciador.h"

Gerenciador::Gerenciador()
{
}


Gerenciador::~Gerenciador()
{
}

void Gerenciador::carregar()
{
	char cOpcao;

	cout << "---------- INICIALIZAR BASE DE DADOS ----------" << endl;
	cout << "1 - Banco de Dados" << endl;
	cout << "2 - Json" << endl;
	cout << "3 - XML" << endl;
	cout << "4 - Texto" << endl;
	cout << "0 - Cancelar" << endl;
	cout << "\tSelecione a base de Dados: ";
	cin >> cOpcao;
	switch (cOpcao)
	{
	case '1':
		cout << "Inicializando DataBase !!!" << endl;
		entrada.inicializar("DataBase");
		advertisement = db.ler();
		cin >> cOpcao;
		break;
	case '2':
		cout << "Inicializando Json !!!" << endl;
		entrada.inicializar("Json");
		advertisement = json.ler();
		cin >> cOpcao;
		break;

	case '3':
		cout << "Inicializando XML !!!" << endl;
		entrada.inicializar("XML");
		advertisement = xml.ler();
		cin >> cOpcao;
		
	case '4':
		cout << "Inicializando Texto !!!" << endl;
		entrada.inicializar("Texto");
		advertisement = txt.ler();
		cin >> cOpcao;
		break;
	case '0':
		cout << "Inicializa��o de Base de Dados Cancelada" << endl;
		cin >> cOpcao;
		break;
	default:
		cout << "Op��o Inv�lida!!!" << endl;
		cin >> cOpcao;
		break;
	}
}

void Gerenciador::disparar()
{
	char cOpcao;
	cout << "------------ DISPARAR AN�NCIOS ------------" << endl;
	cout << "1 - WhatsApp" << endl;
	cout << "2 - SMS" << endl;
	cout << "3 - Facebook" << endl;
	cout << "0 - Cancelar" << endl;
	cout << "\tSelecione: ";
	cin >> cOpcao;
	switch (cOpcao)
	{
		case '1':
			cout << "Disparando An�ncios para WhatsApp..." << endl;
			whatsApp->enviar(advertisement);
			cout << "An�ncios Disparados com Sucesso !!!" << endl;
			cin >> cOpcao;
			break;
		case '2':
			cout << "Disparando An�ncios para SMS..." << endl;
			sms->enviar(advertisement);
			cout << "An�ncios Disparados com Sucesso !!!" << endl;
			cin >> cOpcao;
			break;

		case '3':
			cout << "Disparando An�ncios para Facebook..." << endl;
			faceBook->enviar(advertisement);
			cout << "An�ncios Disparados com Sucesso !!!" << endl;
			cin >> cOpcao;
		case '0':
			cout << "Disparo de An�ncios cancelado" << endl;
			cin >> cOpcao;
			break;
		default:
			cout << "Op��o Inv�lida!!!" << endl;
			cin >> cOpcao;
			break;
	}
}
