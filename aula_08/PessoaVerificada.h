#ifndef PESSOAVERIFICADA_H
#define PESSOAVERIFICADA_H

#include "Pessoa.h"

class PessoaVerificada: public Pessoa {
public:
    PessoaVerificada(string nome, string email, int maximo);
    PessoaVerificada(string nome, int maximo);
    ~PessoaVerificada();

    string getEmail() { return email; };
    void imprimir() override;
private:
    string email;
};

#endif