#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

class Circulo {
private:
    float radio;

public:
    // Constructor
    Circulo(float r) {
        radio = r;
    }

    float calcularPerimetro() {
        return 2 * M_PI * radio;
    }

    float calcularArea() {
        return M_PI * radio * radio;
    }
};

int main() {
    float radio;
    char opcion;

    printf("CIRCULO\n");
    printf("Dame el radio: ");
    scanf("%f", &radio);

    // Limpiar buffer del enter antes de leer un carácter
    while (getchar() != '\n');

    printf("Ingresa 'p' para calcular perimetro o 'a' para calcular area: ");
    scanf("%c", &opcion);

    // Crear objeto de la clase Circulo
    Circulo c(radio);

    if (opcion == 'p') {
        printf("El perimetro del circulo es: %.2f\n", c.calcularPerimetro());
    } else if (opcion == 'a') {
        printf("El area del circulo es: %.2f\n", c.calcularArea());
    } else {
        printf("Opcion invalida. Usa 'p' o 'a'.\n");
    }

    return 0;
}

