#include "RedeSocial.h"

RedeSocial::RedeSocial() {
  perfis = new Perfil*[capacidade];
  quantidadeDePerfis = 0;
}

RedeSocial::~RedeSocial() {
  cout << "Destrutor de RedeSocial: " << quantidadeDePerfis << " perfis" << endl;
  for (int i = 0; i < quantidadeDePerfis; i++) {
    delete perfis[i];
  }
  delete[] perfis;
  cout << "RedeSocial deletada " << endl;
}

Perfil** RedeSocial::getPerfis() {
  return perfis;
}

int RedeSocial::getQuantidadeDePerfis() {
  return quantidadeDePerfis;
}

bool RedeSocial::adicionar(Perfil* perfil) {
  if (quantidadeDePerfis >= capacidade) {
    return false;
  }
  perfis[quantidadeDePerfis] = perfil;
  quantidadeDePerfis++;
  return true;
}

void RedeSocial::imprimir() {
  cout << "==================================" << endl;
  cout << "Rede Social: " << quantidadeDePerfis << " perfis" << endl;
  cout << "==================================" << endl;
  if (quantidadeDePerfis == 0){
    cout << "Sem perfis" << endl;
    cout << "==================================" << endl;
  } else {
    for (int i = 0; i < quantidadeDePerfis; i++){
      perfis[i]->imprimir();
      cout << "==================================" << endl;
    }
  }
  cout << endl;
}
