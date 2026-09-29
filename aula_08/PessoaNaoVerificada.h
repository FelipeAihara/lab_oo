#ifndef PESSOANAOVERIFICADA_H
#define PESSOANAOVERIFICADA_H

#include "Perfil.h"

class PessoaNaoVerificada: public Perfil {
public:
    PessoaNaoVerificada(string nome, int maximo);
    ~PessoaNaoVerificada();
    void imprimir();
};

#endif