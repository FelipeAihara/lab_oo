#include "Perfil.h"
#include "Postagem.h"
#include <string>
#include <iostream>

void imprimirRede(Perfil** perfis, int quantidade) {
    cout << "==================================" << endl;
    for (int i = 0; i < quantidade; i++) {
        perfis[i]->imprimir();
    }
}

// void teste() {
//     Perfil *perfis[3];

//     perfis[0] = new Perfil;
//     perfis[0]->setNome("Maria");
    
//     perfis[1] = new Perfil;
//     perfis[1]->setNome("Antonio");

//     perfis[2] = new Perfil;
//     perfis[2]->setNome("Carlos");

//     perfis[1]->adicionarContato(perfis[0]);
//     perfis[2]->adicionarContato(perfis[0]);
//     perfis[1]->adicionarContato(perfis[2]);

//     perfis[1]->adicionarPostagem("Mensagem 1");
//     perfis[2]->adicionarPostagem("Mensagem 2");

//     imprimirRede(perfis, 3);
// }

void teste() {
    Perfil *perfis[3];

    perfis[0] = new Perfil;
    perfis[0]->setNome("Maria");
    
    perfis[1] = new Perfil;
    perfis[1]->setNome("Antonio");

    perfis[2] = new Perfil;
    perfis[2]->setNome("Carlos");

    perfis[1]->adicionarContato(perfis[0]);
    perfis[2]->adicionarContato(perfis[0]);
    perfis[1]->adicionarContato(perfis[2]);

    Postagem *postagem1 = new Postagem;
    postagem1->setAutor(perfis[1]);
    postagem1->setData(1);
    postagem1->setTexto("Mensagem 1");

    Postagem *postagem2 = new Postagem;
    postagem2->setAutor(perfis[2]);
    postagem2->setData(2);
    postagem2->setTexto("Mensagem 2");


    perfis[1]->adicionarPostagem(postagem1);
    perfis[2]->adicionarPostagem(postagem2);

    imprimirRede(perfis, 3);
}

// int main(void) {
//     teste();

//     return 0;
// }