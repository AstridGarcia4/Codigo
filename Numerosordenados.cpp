#include <iostream>
using namespace std;

int main() {
    int a[10], i, j, temp;

    // Leer los 10 n�meros
    for (i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> a[i];
    }

    // Ordenar (m�todo burbuja simple)
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Mostrar los n�meros ordenados
    cout << "\nNumeros ordenados:\n";
    for (i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

