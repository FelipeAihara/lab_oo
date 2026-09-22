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

void RedeSocial::imprimirEstatisticas() {
  int pv = 0, pnv = 0, pag = 0, perf = 0;
  for (int i = 0; i < this->quantidadeDePerfis; i++) {
    if (this->perfis[i] == dynamic_cast<PessoaVerificada*>(this->perfis[i])) pv++;
    else if (this->perfis[i] == dynamic_cast<PessoaNaoVerificada*>(this->perfis[i])) pnv++;
    else if (this->perfis[i] == dynamic_cast<Pagina*>(this->perfis[i])) pag++;
    else if (this->perfis[i] == dynamic_cast<Perfil*>(this->perfis[i])) perf++;
  }

  cout << "PessoaVerificada: " << pv << endl;
  cout << "PessoaNaoVerificada: " << pnv << endl;
  cout << "Pagina: " << pag << endl;
  cout << "Perfil: " << perf << endl;
}
