#ifndef PERFIL_H
#define PERFIL_H

#include <iostream>
#include <string>

#include "Postagem.h"
class Postagem;

#define MAXIMO_POSTAGENS 20
#define MAXIMO_CONTATOS 20

using namespace std;

class Perfil {
private: 
    string nome;
    Perfil* contatos[MAXIMO_CONTATOS];
    int quantidadeDeContatos = 0;
    Postagem *postagens[MAXIMO_POSTAGENS];
    int quantidadeDePostagens = 0;

public:
    bool adicionarContato(Perfil* contato);
    bool adicionarPostagem(Postagem *p);
    void imprimir();
    string getNome();
    void setNome(string nome);
    int getQuantidadeDeContatos();
    int getQuantidadeDePostagens();
    Perfil** getContatos();
    Postagem** getPostagens();
};

#endif