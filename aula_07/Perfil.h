#ifndef PERFIL_H
#define PERFIL_H

#include <string>
#include <iostream>

using namespace std;

#include "Postagem.h"

class Postagem;

class Perfil {
public:
    Perfil(string nome, int maximo);
    virtual ~Perfil();

    bool adicionarContato(Perfil *contato);
    bool adicionar(Perfil *contato);
    bool publicar(string texto, int data);

    void setNome(string nome) { this->nome = nome; };
    string getNome() { return nome; };

    int getQuantidadeDeContatos() { return quantidadeDeContatos; };
    Perfil** getContatos() { return contatos; };

    int getQuantidadeDePostagens() { return quantidadeDePostagens; };
    Postagem** getPostagens() { return postagens; };

    virtual void imprimir();

private:
    int maximo;
    string nome;

    Perfil **contatos;
    int quantidadeDeContatos = 0;

    Postagem **postagens;
    int quantidadeDePostagens = 0;

    void adicionarContatoUnilateral(Perfil *contato);
};

#endif 