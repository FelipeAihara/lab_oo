#include "RedeSocial.h"

void teste() {
  // 1. Cria uma RedeSocial
  RedeSocial* rede = new RedeSocial();

  // 2. Cria e adiciona a rede os perfis de Antonio, Maria e Carlos com 10 de maximo
  Perfil* antonio = new Perfil("Antonio", 10);
  Perfil* maria = new Perfil("Maria", 10);
  Perfil* carlos = new Perfil("Carlos", 10);

  rede->adicionar(antonio);
  rede->adicionar(maria);
  rede->adicionar(carlos);

  // 3. Maria se torna seguidora de Antonio
  maria->adicionar(antonio);
  // 4. Maria se torna seguidora de Carlos
  maria->adicionar(carlos);
  // 5. Carlos se torna seguidor de Antonio
  carlos->adicionar(antonio);

  // 6-8. Publicacoes
  antonio->publicar("Mensagem 1", 1);
  maria->publicar("Mensagem 2", 2);
  carlos->publicar("Mensagem 3", 4);

  // 9. Imprime a rede
  rede->imprimir();

  // 10. Destroi a RedeSocial (destroi tambem os perfis e suas postagens)
  delete rede;
}
