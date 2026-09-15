/*
 * Faca os includes e coloque a implementacao dos metodos aqui!
 */

 #include "Personagem.h"
 #include <iostream>

 
Personagem::Personagem (string nome, int hp, int forca) {
  this->nome = nome;
  this->hp = hp;
  this->forca = forca;
}

string Personagem::getNome(){
  // Complete o código e altere o valor de retorno
  return this->nome;
}

int Personagem::getHp(){
  // Complete o código e altere o valor de retorno
  return this->hp;
}

int Personagem::getForca(){
  // Complete o código e altere o valor de retorno
  return this->forca;
}

void Personagem::setForca(int novaForca){
  this->forca = novaForca;
}

int Personagem::atacar(Personagem* p){
  // Complete o código e altere o valor de retorno
  p->defender(forca);
  return p->getHp();
}

int Personagem::defender(int dano){
  dano = min(dano, this->getHp());
  this->hp -= dano;
  return this->hp;
}

bool Personagem::estaVivo(){
  // Complete o código e altere o valor de retorno
  if (this->getHp() > 0) return true;
  return false;
}

void Personagem::mostrarAtributos() {
    cout << "Nome: " << getNome() << endl;
    cout << "HP: " << getHp() << endl;
    cout << "Forca: " << getForca() << endl;
}
