#include "Pessoa.h"

Pessoa::Pessoa(string nome, int maximo) : Perfil(nome, maximo) {

}

Pessoa::~Pessoa() {

}

void Pessoa::imprimir() {
    Perfil::imprimir();
}