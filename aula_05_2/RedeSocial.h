// COMPLETE
#include "Perfil.h"
#include <iostream>

using namespace std;

class RedeSocial {
public:
  RedeSocial();
  ~RedeSocial();

  Perfil** getPerfis();
  int getQuantidadeDePerfis();
  bool adicionar(Perfil* perfil);
  void imprimir();
  
private:
  Perfil** perfis;
  const int capacidade = 100;
  int quantidadeDePerfis = 0;
};