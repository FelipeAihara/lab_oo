#ifndef PESSOA_H
#define PESSOA_H

#include "Perfil.h"

class Pessoa: public Perfil {
public:
    Pessoa(string nome, int maximo);
    ~Pessoa();
    void imprimir() override;
};

#endif