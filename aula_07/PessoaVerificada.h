#ifndef PESSOAVERIFICADA_H
#define PESSOAVERIFICADA_H

#include "Perfil.h"

class PessoaVerificada: public Perfil {
public:
    PessoaVerificada(string nome, string email, int maximo);
    PessoaVerificada(string nome, int maximo);
    ~PessoaVerificada();

    string getEmail() { return email; };
    void imprimir();
private:
    string email;
};

#endif