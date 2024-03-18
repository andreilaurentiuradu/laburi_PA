//
// Created by Laur on 3/18/2024.
//
#include <iostream>

using namespace std;

void hanoi(int n, char src, char dest, char aux) {
    if (n == 1) {
        cout << "Muta discul " << n << " de la " << src << " la " << dest << endl;
    } else {
        hanoi(n - 1, src, aux, dest); // se muta din A in C cu B auxiliar
        cout << "Muta discul " << n << " de la " << src << " la " << dest << endl;
        hanoi(n - 1, aux, dest, src); // ajuns in dest(C), se muta in B cu A auxiliar
    }
}
int main() {
    int n;
    cin >> n;

    hanoi(n, 'A', 'B', 'C');
    return 0;
}