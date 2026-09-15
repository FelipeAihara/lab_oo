 /* Faca os includes adequados!
 */

#ifndef JOGO_H
#include "Jogo.h"
#endif

#ifndef PERSONAGEM_H
#include "Personagem.h"
#endif

#include <iostream>

/**
 * Implementar as funcoes teste
 **/

void teste1() {
    // IMPLEMENTE seguindo o enunciado
    Personagem *p1 = new Personagem("Link", 100, 50);
    p1->mostrarAtributos();
    delete p1;
}

void teste2() {
    // IMPLEMENTE seguindo o enunciado
    Personagem *p1 = new Personagem("Link", 100, 50);
    Personagem *p2 = new Personagem("Victor", 60, 10);
    Personagem *p3 = new Personagem("Theo", 60, 15);
    Personagem *p4 = new Personagem("Ganon", 50, 50);

    Jogo *j = new Jogo(p1);
    j->adicionarMonstro(p2);
    j->adicionarMonstro(p3);
    j->adicionarMonstro(p4);

    int ret = j->jogar();
    cout << "Monstros derrotados: " << ret << endl;
    delete j;
}
