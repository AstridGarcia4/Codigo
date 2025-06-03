//calcula area de un triangulo
#include <iostream>

int main(){

float base, altura, area;

printf("Ingresa la base del triangulo:");
scanf("%f", &base);

printf("Ingresa la altura del triangulo:");
scanf("%f", &altura);

area=base*altura/2;

printf("La area del triangulo es: %.2f\n", area );
return 0;

}
