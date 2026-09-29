#include "PessoaVerificada.h"

PessoaVerificada::PessoaVerificada(string nome, string email, int maximo) : Pessoa(nome, maximo), email(email) {

}

PessoaVerificada::PessoaVerificada(string nome, int maximo) : Pessoa(nome, maximo) {
    this->email = "vazio@usp.br";
}


PessoaVerificada::~PessoaVerificada() {
    
}

void PessoaVerificada::imprimir() {
    cout << this->getEmail() << endl;
    Perfil::imprimir();
}