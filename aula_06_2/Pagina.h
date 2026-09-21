#ifndef PAGINA_H
#define PAGINA_H

#include "PessoaVerificada.h"

class Pagina: public Perfil {
public: 
    Pagina(string nome, PessoaVerificada* proprietario, int maximo);
    ~Pagina();

    PessoaVerificada* getProprietario() { return proprietario; };
    void imprimir() override;

private:
    PessoaVerificada* proprietario;

};

#endif