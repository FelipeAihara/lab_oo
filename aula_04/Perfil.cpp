#include "Perfil.h"

string Perfil::getNome() {
    return this->nome;
}

void Perfil::setNome(string nome) {
    this->nome = nome;
}

int Perfil::getQuantidadeDeContatos() {
    return quantidadeDeContatos;
}

int Perfil::getQuantidadeDePostagens() {
    return quantidadeDePostagens;
}

Perfil** Perfil::getContatos() {
    return contatos;
}

Postagem** Perfil::getPostagens() {
    return postagens;
}

// void Perfil::imprimir() {
//     cout << endl << "Nome: " << nome << endl;
//     cout << "Numero de postagens feitas: " << quantidadeDePostagens << endl;
//     for (int i = 0; i < quantidadeDePostagens; i++)
//       cout << "Postagens " << i + 1 << " - Texto: " << postagens[i] << endl;

//     if (quantidadeDeContatos == 0)
//         cout << "Sem contato " << endl;
//     else {
//         for (int i = 0; i < quantidadeDeContatos; i++) {
//             cout << "Contato " << contatos[i]->nome << endl;
//             for (int j = 0; j < contatos[i]->quantidadeDePostagens; j++)
//                 cout << "Postagens " << j + 1 << " do contato - Texto: "
//                      << contatos[i]->postagens[j] << endl;
//         }
//     }
// }

void Perfil::imprimir() {
    cout << endl << "Nome: " << nome << endl;
    cout << "Numero de postagens feitas: " << quantidadeDePostagens << endl;
    for (int i = 0; i < quantidadeDePostagens; i++)
        cout << "Postagens na data " << postagens[i]->getData() << " - Texto: "
        << postagens[i]->getTexto() << endl;

    if (quantidadeDeContatos != 0){
        for (int i = 0; i < quantidadeDeContatos; i++) {
            for (int j = 0; j < contatos[i]->getQuantidadeDePostagens(); j++)
                cout << "Postagens na data "
                     << contatos[i]->getPostagens()[j]->getData()
                     << " do contato " << contatos[i]->getNome()
                     << " - Texto: " << contatos[i]->getPostagens()[j]->getTexto()
                     << endl;
        }
    } else cout << "Sem contatos" << endl;
}
 

bool Perfil::adicionarContato(Perfil* contato) {
    if (this->quantidadeDeContatos >= MAXIMO_CONTATOS) return false;

    for (int i = 0; i < this->quantidadeDeContatos; i++) {
        if (this->contatos[i] == contato) return false;
    }

    this->contatos[this->quantidadeDeContatos] = contato;
    contato->contatos[contato->quantidadeDeContatos] = this;

    this->quantidadeDeContatos++;
    contato->quantidadeDeContatos++;

    return true;
}

bool Perfil::adicionarPostagem(Postagem *p) {
    if (quantidadeDePostagens >= MAXIMO_POSTAGENS) return false;

    postagens[quantidadeDePostagens] = p;
    quantidadeDePostagens++;

    return true;
}
