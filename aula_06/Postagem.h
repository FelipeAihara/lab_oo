#ifndef POSTAGEM_H
#define POSTAGEM_H

#include <string>

using namespace std;

#include "Perfil.h"

class Perfil;

class Postagem {
public:
    Postagem(string texto, int data, Perfil *autor);
    ~Postagem();

    // Getters
    string getTexto() { return texto; };
    int getData() { return data; };
    Perfil* getAutor() { return autor; };

    // Setters
    void setTexto(string texto) { this->texto = texto; };
    void setData(int data) { this->data = data; };
    void setAutor(Perfil* autor) { this->autor = autor; };

private:
    string texto;
    int data;
    Perfil *autor;
};

#endif