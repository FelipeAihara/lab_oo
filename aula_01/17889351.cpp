#include <iostream>
#include <cmath>

using namespace std;

int quadranteDoPonto(double x, double y)
{
    if (x == 0 || y == 0) return -1;
    else if (x > 0 && y > 0) return 1;
    else if (x < 0 && y > 0) return 2;
    else if (x < 0 && y < 0) return 3;
    else if (x > 0 && y < 0) return 4;
    else return 0;
}

double distanciaEntrePontos(double x1, double y1, double x2, double y2) 
{
    double ret = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    return ret;
}

double distanciaDoPontoDeMenorOrdenadaAOrigem(double abscissas[], double ordenadas[], int quantidadeDePontos)
{
    double menor;
    int pos_menor;
    menor = ordenadas[0];
    pos_menor = 0;
    for (int i = 1; i < quantidadeDePontos; i++) 
    {
        if (ordenadas[i] <= menor) {
            menor = ordenadas[i];
            pos_menor = i;
        }
    }
    // cout << pos_menor << " " << abscissas[pos_menor] << " " << ordenadas[pos_menor] << endl;

    return distanciaEntrePontos(abscissas[pos_menor], ordenadas[pos_menor], 0, 0);
}

/*
int main(void)
{
    double abscissas[] = {1.0, -2.0, 3.0, 4.0};
    double ordenadas[] = {1.0, -2.0, 3.0, 4.0};
    int len = 4;
    cout << distanciaDoPontoDeMenorOrdenadaAOrigem(abscissas, ordenadas, len) << endl;
    return 0;
}
*/