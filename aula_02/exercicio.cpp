// FACA OS INCLUDES NECESSARIOS
#include <iostream>

using namespace std;

string* encontrarOponente(string nomes[], int membros[], int quantidade, string nomeEquipe, int membrosEquipe) {
    // IMPLEMENTE A FUNCAO
    string *p = NULL;

    for (int i = 0; i < quantidade; i++) {
        if (nomes[i] != nomeEquipe && membros[i] == membrosEquipe) {
            p = &nomes[i];
        }
    }

    return p;
}

int calcularEstatisticas (int membros[], int quantidade, int& minimo, int* maximo) {
    // IMPLEMENTE A FUNCAO
    if (quantidade == 0) {
        minimo = 0;
        *maximo = 0;
        return 0;
    }

    int max = membros[0];
    int min = membros[0];
    int soma = membros[0];

    for (int i = 1; i < quantidade; i++) {
        soma += membros[i];
        if (membros[i] > max) max = membros[i];
        if (membros[i] < min) min = membros[i];
    }

    minimo = min;
    *maximo = max;

    return soma;
}

/* COMENTE A MAIN PARA SUBMETER */
int main() {
    // FACA TESTES NA MAIN
    int soma, quantidade = 3;
    int membros[] = {7, 2, 3};
    int minimo;
    int maximo;

    soma = calcularEstatisticas(membros, quantidade, minimo, &maximo);
    cout << soma << endl;

    string nomes[] = {"POLI", "FEA", "EACH"};
    string nomeEquipe = "POLI";
    int membrosEquipe = 3;

    string *nome = encontrarOponente(nomes, membros, quantidade,nomeEquipe, membrosEquipe);
    cout << *nome << endl;

    return 0;
}
