#include <iostream>
#include <string>

using namespace std;

class Mago {
public:
    string
    int health = 100;

    void atacar(Mago *m, int dano);
    void receberDano(int dano);
    void imprimirVida();
};

void Mago::atacar(Mago *m, int dano)
{
    m->receberDano(dano);
}

void Mago::receberDano(int dano)
{
    this->health -= dano;
}

void Mago::imprimirVida()
{
    cout << << " health's: " << this->health << endl;
}

// int main(void)
// {
//     Mago *m1 = new Mago;
//     Mago *m2 = new Mago;

//     m1->atacar(m2, 80);
//     m2->imprimirVida();
//     m2->atacar(m1, 50);
//     m1->imprimirVida();

//     return 0;
// }