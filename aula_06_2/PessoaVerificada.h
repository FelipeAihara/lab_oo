#ifndef PESSOAVERIFICADA_H
#define PESSOAVERIFICADA_H

#include "Perfil.h"

class PessoaVerificada: public Perfil {
public:
    PessoaVerificada(string nome, string email, int maximo);
    ~PessoaVerificada();

    string getEmail() { return email; };

private:
    string email;
};

#endif