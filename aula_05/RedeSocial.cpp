#include "RedeSocial.h"

// ==================== Perfil ====================

Perfil::Perfil(string nome, int maximo) {
  this->nome = nome;
  this->maximo = maximo;
  quantidadeDeContatos = 0;
  quantidadeDePostagens = 0;
  contatos = new Perfil*[maximo];
  postagens = new Postagem*[maximo];
}

// Destrutor
Perfil::~Perfil() {
  cout << "Destrutor de perfil: " << nome << " - Quantidade de postagens feitas: "
       << quantidadeDePostagens << endl;
  for (int i = 0; i < quantidadeDePostagens; i++) {
    delete postagens[i];
  }
  delete[] postagens;
  delete[] contatos;
  cout << "Perfil deletado" << endl;
}

string Perfil::getNome() {
  return nome;
}

bool Perfil::adicionarContato(Perfil* contato) {
  if (quantidadeDeContatos >= maximo) {
    return false;
  }
  contatos[quantidadeDeContatos] = contato;
  quantidadeDeContatos++;
  return true;
}

bool Perfil::publicar(string texto, int data) {
  if (quantidadeDePostagens >= maximo) {
    return false;
  }
  postagens[quantidadeDePostagens] = new Postagem(texto, data, this);
  quantidadeDePostagens++;
  return true;
}

void Perfil::imprimir() {
  cout << "Perfil: " << nome << endl;
  cout << "Quantidade de contatos: " << quantidadeDeContatos << endl;
  cout << "Postagens (" << quantidadeDePostagens << "):" << endl;
  for (int i = 0; i < quantidadeDePostagens; i++) {
    postagens[i]->imprimir();
  }
}

// ==================== Postagem ====================

Postagem::Postagem(string texto, int data, Perfil* autor) {
  this->texto = texto;
  this->data = data;
  this->autor = autor;
}

// Destrutor
Postagem::~Postagem() {
  cout << "Destrutor de postagem: " << texto << endl;
}

string Postagem::getTexto() {
  return texto;
}

void Postagem::imprimir() {
  cout << "[" << data << "] " << autor->getNome() << ": " << texto << endl;
}

// ==================== RedeSocial ====================

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

// ==================== Funcao auxiliar (Exercicio 1) ====================

void imprimirRede(Perfil* perfis[], int quantidade) {
  cout << "==================================" << endl;
  cout << "Rede Social: " << quantidade << " perfis" << endl;
  cout << "==================================" << endl;
  for (int i = 0; i < quantidade; i++) {
    perfis[i]->imprimir();
    cout << "==================================" << endl;
  }
  cout << endl;
}
