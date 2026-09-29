#include "Perfil.h"

int Perfil::idGlobal = 0;

Perfil::Perfil(string nome, int maximo) {
  Perfil::idGlobal++;
  this->id = idGlobal;
  this->nome = nome;
  this->maximo = maximo;
  this->quantidadeDeContatos = 0;
  this->quantidadeDePostagens = 0;
  this->contatos = new Perfil*[maximo];
  this->postagens = new Postagem*[maximo];
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

void Perfil::adicionarContatoUnilateral(Perfil *contato) {
    contatos[quantidadeDeContatos] = contato;
    quantidadeDeContatos++;
}

bool Perfil::adicionarContato(Perfil *contato) {
    // Verifica se o perfil já atingiu o limite de contatos
    if (quantidadeDeContatos >= maximo) return false;

    // Verifica se o contato já está na lista de contatos
    for (int i = 0; i < quantidadeDeContatos; i++) {
        if (contatos[i] == contato) return false;
    }

    // Adiciona o contato 
    adicionarContatoUnilateral(contato);

    // Reflexividade
    contato->adicionarContatoUnilateral(this);

    return true;
}

bool Perfil::adicionar(Perfil *contato) {
    // Verifica se o perfil já atingiu o limite de contatos
    if (quantidadeDeContatos >= maximo) return false;

    adicionarContatoUnilateral(contato);

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

// void Perfil::imprimir() {
//     cout << endl << "Nome: " << nome << endl;
//     cout << "Numero de postagens feitas: " << quantidadeDePostagens << endl;
//     for (int i = 0; i < quantidadeDePostagens; i++)
//         cout << "Postagens na data " << postagens[i]->getData() << " - Texto: " << postagens[i]->getTexto() << endl;

//     if (quantidadeDeContatos != 0){
//         for (int i = 0; i < quantidadeDeContatos; i++){
//             for (int j = 0; j < contatos[i]->getQuantidadeDePostagens(); j++)
//                 cout << "Postagens na data " << contatos[i]->getPostagens()[j]->getData()
//                      << " do contato " << contatos[i]->getNome()
//                      << " - Texto: " << contatos[i]->getPostagens()[j]->getTexto() << endl;
//         }
//     } else cout << "Sem contatos " << endl;
// }

// void Perfil::imprimir() {
//   cout << endl << "Nome: " << nome << endl;
//   cout << "Numero de postagens feitas: " << quantidadeDePostagens << endl;
//   for (int i = 0; i < quantidadeDePostagens; i++)
//     cout << "Postagens na data: " << postagens[i]->getData()
//          << " - Texto: " << postagens[i]->getTexto() << endl;
//   if (quantidadeDeContatos == 0)
//     cout << "Sem contatos " << endl;
//   else {
//     for (int i = 0; i < quantidadeDeContatos; i++) {
//       for (int j = 0; j < contatos[i]->getQuantidadeDePostagens(); j++)
//         cout << "Postagens na data " << contatos[i]->getPostagens()[j]->getData()
//              << " do contato "<< contatos[i]->getNome()
//              << " - Texto: " << contatos[i]->getPostagens()[j]->getTexto() << endl;
//     }
//   }
// }

void Perfil::imprimir() {
  cout << endl << "Nome: " << nome << " - id: " << id << endl;
  cout << "Numero de postagens feitas: " << quantidadeDePostagens << endl;
  for (int i = 0; i < quantidadeDePostagens; i++)
    cout << "Postagens na data " << postagens[i]->getData()
         << " - Texto: " << postagens[i]->getTexto() << endl;
  if (quantidadeDeContatos == 0)
    cout << "Sem contatos " << endl;
  else {
    for(int i = 0; i < quantidadeDeContatos; i++) {
      for(int j = 0; j < contatos[i]->getQuantidadeDePostagens(); j++)
        cout << "Postagens na data "
             << contatos[i]->getPostagens()[j]->getData()
             << " do contato " << contatos[i]->getNome()
             << " - Texto: " << contatos[i]->getPostagens()[j]->getTexto()
             << endl;
    }
  }
}

int Perfil::getId() {
  return this->id;
}

int Perfil::getUltimoId() {
  return Perfil::idGlobal;
}