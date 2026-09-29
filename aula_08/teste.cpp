#include "RedeSocial.h"

void teste() {
  Perfil* p1 = new PessoaVerificada("Nelson Rodrigues", "nelson.rodrigues@usp.br", 10);
  Perfil* p2 = new Pessoa("Gabriela Ferreira", 10);
  Perfil* p3 = new Pagina("Algoritmos", static_cast<PessoaVerificada*>(p1), 10);

  RedeSocial* rede = new RedeSocial();

  rede->adicionar(p1);
  rede->adicionar(p2);
  rede->adicionar(p3);

  p1->adicionarContato(p2);
  p3->adicionarContato(p2);


  p1->publicar("Mensagem PV1", 1);
  p2->publicar("Mensagem P1", 3);
  p3->publicar("Mensagem PAG1", 5);

  rede->imprimir();

  delete rede;
}
