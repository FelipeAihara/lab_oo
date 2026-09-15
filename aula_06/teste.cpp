#include "RedeSocial.h"

void teste() {
  RedeSocial* rede = new RedeSocial();

  Perfil* p1 = new PessoaVerificada("Nelson Rodrigues", "nelson.rodrigues@usp.br", 10);
  Perfil* p2 = new Perfil("Gabriela Ferreira", 10);
  Perfil* p3 = new Pagina("PCS3111", static_cast<PessoaVerificada*>(p1), 10);
  Perfil* p4 = new Pagina("PCS3112", static_cast<PessoaVerificada*>(p1), 10);

  rede->adicionar(p1);
  rede->adicionar(p2);
  rede->adicionar(p3);
  rede->adicionar(p4);

  p1->adicionarContato(p2);
  p3->adicionarContato(p2);
  p4->adicionarContato(p2);

  p1->publicar("Mensagem N1", 1);
  p2->publicar("Mensagem G1", 2);
  p4->publicar("Mensagem P1", 2);

  rede->imprimir();

  delete rede;
}
