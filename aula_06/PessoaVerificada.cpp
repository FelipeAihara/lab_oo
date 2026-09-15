#include "PessoaVerificada.h"

PessoaVerificada::PessoaVerificada(string nome, string email, int maximo) : Perfil(nome, maximo), email(email) {

}

PessoaVerificada::~PessoaVerificada() {
    
}