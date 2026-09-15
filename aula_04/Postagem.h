#ifndef POSTAGEM_H
#define POSTAGEM_H

#include <string>
#include "Perfil.h"

using namespace std;;

class Perfil;

class Postagem {
private:
    string texto;
    int data;
    Perfil* autor;
public:
    string getTexto();
    int getData();
    Perfil* getAutor();
    void setTexto(string texto);
    void setData(int data);
    void setAutor(Perfil* autor);
}; 

#endif