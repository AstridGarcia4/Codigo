//calcula la cantidad ahorrada mensual de 15000
//Astrid Alejandra Bustos Garcia
#include <iostream>
#include <iomanip>  // Para usar fixed y setprecision
using namespace std;

int main() {
    double depositoMensual = 15000.0;        // Depósito mensual en pesos
    double tasaInteresMensual = 0.037;       // 3.7% mensual
    int anios = 15;
    int meses = anios * 12;
    double totalAhorrado = 0.0;

    for (int i = 1; i <= meses; i++) {
        totalAhorrado = (totalAhorrado + depositoMensual) * (1 + tasaInteresMensual);
    }

    cout << fixed << setprecision(10); // Mostrar hasta 10 decimales
    cout << "Cantidad ahorrada después de " << anios << " años: $" << totalAhorrado << endl;

    return 0;
}

