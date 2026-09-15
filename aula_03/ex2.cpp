#include <iostream>
#include <string>

#define MAXIMO_POSTAGENS 2

using namespace std;

class Perfil {
public:
	string nome;
	Perfil* contato = NULL;
	string postagens[MAXIMO_POSTAGENS];
	int quantidadeDePostagens = 0;

	bool adicionarContato(Perfil* contato);
	bool adicionarPostagem(string texto);
	void imprimir();
};

// IMPLEMENTE OS METODOS DA CLASSE
bool Perfil::adicionarContato(Perfil* contato) {
    if (this->contato == NULL) {
        this->contato = contato;
        return true;
    } else {
        return false;
    }
}

bool Perfil::adicionarPostagem(string texto) {
    if (this->quantidadeDePostagens >= 2) return false;

    this->postagens[quantidadeDePostagens] = texto;
    quantidadeDePostagens++;

    return true;
}

// METODOS JA IMPLEMENTADOS
void Perfil::imprimir() {
	cout << endl << "Nome: " << nome << endl;
	cout << "Numero de postagens feitas: " << quantidadeDePostagens << endl;
	for (int i = 0; i < quantidadeDePostagens; i++)
		cout << "Postagens " << i + 1 << " - Texto: " << postagens[i] << endl;

	if (contato != NULL){
		cout << "Contato " << contato->nome << endl;
		for(int i = 0; i < contato->quantidadeDePostagens; i++)
			cout << "Postagens " << i + 1 << " do contato - Texto: " << contato->postagens[i] << endl;
	}
	else
		cout << "Sem contato " << endl;
}

void imprimirRede (Perfil* p1, Perfil* p2) {
	cout << "==================================" << endl;
	p1->imprimir();
	p2->imprimir();
}

void teste (){
	cout << endl << " ===== Cria perfil de Antonio" << endl;
	// IMPLEMENTE
    Perfil *antonio = new Perfil;
    antonio->nome = "Antonio";

	cout << " ===== Cria perfil da Maria" << endl;
	// IMPLEMENTE
    Perfil *maria = new Perfil;
    maria->nome = "Maria";

	cout << " ===== Maria se torna contato de Antonio"<< endl;
	// IMPLEMENTE
    antonio->adicionarContato(maria);

	cout << " ===== Maria publica Msg 1"<< endl;
	// IMPLEMENTE
    maria->adicionarPostagem("Msg 1");

	// TIRE O COMENTARIO E IMPLEMENTE
	imprimirRede(antonio, maria);

	cout << " ===== Antonio publica Msg 2"<< endl;
	// IMPLEMENTE
    antonio->adicionarPostagem("Msg 2");

	// TIRE O COMENTARIO E IMPLEMENTE
	imprimirRede (antonio, maria);

	cout << " ===== Antonio se torna contato de Maria"<< endl;
	// IMPLEMENTE
    maria->adicionarContato(antonio);

	cout << " ===== Maria publica Msg 3"<< endl;
	// IMPLEMENTE
    maria->adicionarPostagem("Msg 3");

	// TIRE O COMENTARIO E IMPLEMENTE
    imprimirRede(antonio, maria);
}


// int main() {
// 	teste();
// 	return 0;
// }
