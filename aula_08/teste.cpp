#include "RedeSocial.h"

void teste() {
  Perfil* p1 = new PessoaVerificada("Nelson Rodrigues", "nelson.rodrigues@usp.br", 10);
  Perfil* p2 = new PessoaVerificada("Francisco Silva", 10);
  Perfil* p3 = new PessoaNaoVerificada("Gabriela Ferreira", 10);
  Perfil* p4 = new PessoaNaoVerificada("Jorge Castanho", 10);
  Perfil* p5 = new Pagina("PCS3111", static_cast<PessoaVerificada*>(p1), 10);
  Perfil* p6 = new Pagina("PCS3112", static_cast<PessoaVerificada*>(p2), 10);

  RedeSocial* rede = new RedeSocial();

  rede->adicionar(p1);
  rede->adicionar(p2);
  rede->adicionar(p3);
  rede->adicionar(p4);
  rede->adicionar(p5);
  rede->adicionar(p6);

  p3->adicionarContato(p1);
  p4->adicionarContato(p2);
  p5->adicionarContato(p3);
  p6->adicionarContato(p4);

  p1->publicar("Mensagem PV1", 1);
  p2->publicar("Mensagem PV2", 2);
  p3->publicar("Mensagem P1", 3);
  p4->publicar("Mensagem P2", 4);
  p5->publicar("Mensagem PAG1", 5);
  p6->publicar("Mensagem PAG2", 6);

  rede->imprimir();
  rede->imprimirEstatisticas();

  delete rede;
}
