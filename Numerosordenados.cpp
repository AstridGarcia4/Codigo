#include <iostream>
using namespace std;

int main() {
    double a[10];
    int i, j;
    double temp;

    // Leer los 10 n�meros
    for (i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> a[i];
    }

    // Ordenar (m�todo burbuja simple)
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Mostrar los n�meros ordenados
    cout << "\nNumeros ordenados:\n";
    for (i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}

