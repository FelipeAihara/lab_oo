#include "Pagina.h"

Pagina::Pagina(string nome, PessoaVerificada* proprietario, int maximo) : 
               Perfil(nome, maximo), proprietario(proprietario) {
    this->adicionarContato(proprietario);
}

Pagina::~Pagina() {

}

void Pagina::imprimir() {
    cout << "Nome: " << getNome();
    cout << " - Proprietario: " << proprietario->getNome() << endl; 
}