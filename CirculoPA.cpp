#include <stdio.h>
#include <math.h>

int main() {
    float radio, peri, area;
    char opcion;

    printf("Circulo\n");

    printf("Dame el radio: ");
    scanf("%f", &radio);

    while (getchar() != '\n');

    printf("Ingresa 'p' para calcular perimetro o 'a' para calcular area: ");
    scanf("%c", &opcion);

    if (opcion == 'p') {
        peri = 2 * M_PI * radio;
        printf("El perimetro del circulo es: %.2f\n", peri);
    } else if (opcion == 'a') {
        area = M_PI * (radio * radio);
        printf("El area del circulo es: %.2f\n", area);
    } else {
        printf("Opcion invalida. Usa 'p' o 'a'.\n");
    }

    return 0;
}

