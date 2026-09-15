#ifndef JOGO_H
#define JOGO_H

#define MAXIMO_DE_MONSTROS 10

#include "Personagem.h"


class Jogo {
    /*
     * Os atributos devem ser acessiveis somente internamente ao escopo
     * da classe
     */

    /*
     * Os metodos devem ser acessíveis de fora do escopo da classe
     */
private:
    Personagem *p;
    Personagem *monstros[MAXIMO_DE_MONSTROS];
    int quantidadeDeMonstros;

public:
    Jogo (Personagem* p);
    ~Jogo ();
    void adicionarMonstro(Personagem* monstro);
    void lutar(Personagem* monstro);
    int getQuantidadeDeMonstros();
    Personagem** getMonstros();
    Personagem* getJogador();
    int jogar();
};

#endif // JOGO_H