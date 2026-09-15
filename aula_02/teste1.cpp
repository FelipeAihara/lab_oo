#include <iostream>

using namespace std;

void troca1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    return;
}

void troca2(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return;
}

void troca3(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

// int main(void) {
//     int a = 1;
//     int b = 2;

//     troca1(a, b);
//     cout << "Troca1 - a: " << a << " b: " << b << endl;

//     troca2(a, b);
//     cout << "Troca2 - a: " << a << " b: " << b << endl;

//     troca3(&a, &b);
//     cout << "Troca3 - a: " << a << " b: " << b << endl;

//     return 0;
// }