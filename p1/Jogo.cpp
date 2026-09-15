/*
 * Faca os includes necessários e complete a implementacao dos metodos aqui!
 */

#include "Jogo.h"
#include <iostream>
using namespace std;
 
Jogo::Jogo (Personagem* p){
  this->p = p;
  quantidadeDeMonstros = 0;
}

Jogo::~Jogo (){
  delete p;
  for (int i = 0; i < quantidadeDeMonstros; i++) delete monstros[i];
}

void Jogo::adicionarMonstro(Personagem* monstro){
  if (quantidadeDeMonstros >= MAXIMO_DE_MONSTROS) return;

  for (int i = 0; i < quantidadeDeMonstros; i++) {
    if (monstro == this->monstros[i]) return;
  }

  monstros[quantidadeDeMonstros] = monstro;
  quantidadeDeMonstros++;

  return;
}

void Jogo::lutar(Personagem* monstro){
  while (p->estaVivo() && monstro->estaVivo()) {
    p->atacar(monstro);
    if (monstro->estaVivo()) monstro->atacar(p);
  }

  return;
}

int Jogo::jogar(){
  // Complete o código e altere o valor de retorno
  if (this->p == NULL || quantidadeDeMonstros == 0) {
    cout << "O jogo nao esta pronto!" << endl;
    return 0;
  }

  int i;
  for (i = 0; i < quantidadeDeMonstros; i++) {
    this->lutar(monstros[i]);
    if (!(getJogador()->estaVivo())) {
      cout << "FIM DE JOGO! " << p->getNome() << "foi derrotado por "
           << monstros[i] << endl;
      return i;
    }
  }

  cout << "Parabens! Voce sobreviveu e derrotou todos os monstros" << endl;
  
  return i;
}

int Jogo::getQuantidadeDeMonstros() {
  // Complete o código e altere o valor de retorno
  return this->quantidadeDeMonstros;
}

Personagem** Jogo::getMonstros() {
  // Complete o código e altere o valor de retorno
  return monstros;
}

Personagem* Jogo::getJogador() {
  // Complete o código e altere o valor de retorno
  return p;
}
