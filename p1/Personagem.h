#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>
using namespace std;

class Personagem {
/*
     * Os atributos devem ser acessiveis somente internamente ao escopo
     * da classe
     */

    /*
     * Os metodos devem ser acessíveis de fora do escopo da classe
     */
private:
  string nome;
  int hp;
  int forca;

public:
  Personagem(string nome, int hp, int forca);
  string getNome();
  int getHp();
  int getForca();
  void setForca(int novaForca);
  int atacar(Personagem* p);
  int defender(int dano);
  bool estaVivo();
  void mostrarAtributos();
};

#endif // PERSONAGEM_H