#include "Postagem.h"

Postagem::Postagem(string texto, int data, Perfil* autor) {
  this->texto = texto;
  this->data = data;
  this->autor = autor;
}

// Destrutor
Postagem::~Postagem() {
  cout << "Destrutor de postagem: " << texto << endl;
}