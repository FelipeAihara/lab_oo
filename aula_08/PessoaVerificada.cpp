#include "PessoaVerificada.h"

PessoaVerificada::PessoaVerificada(string nome, string email, int maximo) : Perfil(nome, maximo), email(email) {

}

PessoaVerificada::PessoaVerificada(string nome, int maximo) : Perfil(nome, maximo) {
    this->email = "vazio@usp.br";
}


PessoaVerificada::~PessoaVerificada() {
    
}

void PessoaVerificada::imprimir() {
    cout << this->getEmail() << endl;
    Perfil::imprimir();
}