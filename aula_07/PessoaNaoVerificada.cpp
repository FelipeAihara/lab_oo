#include "PessoaNaoVerificada.h"

PessoaNaoVerificada::PessoaNaoVerificada(string nome, int maximo) : Perfil(nome, maximo) {

}

PessoaNaoVerificada::~PessoaNaoVerificada() {

}

void PessoaNaoVerificada::imprimir() {
    Perfil::imprimir();
}