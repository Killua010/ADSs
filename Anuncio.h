#include <string>

using namespace std;

class Anuncio
{
public:
	Anuncio();
	~Anuncio();
	void setDestinatraio(string destinatario);
	void setTitulo(string titulo);
	void setConteudo(string conteudo);
	void setEndereco(string endereco);
	string getDestinatario();
	string getTitulo();
	string getConteudo();
	string getEndereco();


private:
	string destinatario;
	string titulo;
	string conteudo;
	string endereco;
};

