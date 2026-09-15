#include "Postagem.h"

string Postagem::getTexto() {
    return texto;
}

int Postagem::getData() {
    return data;
}

Perfil* Postagem::getAutor() {
    return autor;
}

void Postagem::setTexto(string texto) {
    this->texto = texto;
}

void Postagem::setData(int data) {
    this->data = data;
}

void Postagem::setAutor(Perfil* autor) {
    this->autor = autor;
}