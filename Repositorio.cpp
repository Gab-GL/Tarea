#include <stdio.h>
#include <math.h>

int main() {
    int opcion;
    printf("Calculadora de áreas\n");
    printf("1. Calcular área de un cuadrado\n");
    printf("2. Calcular área de un triángulo\n");
    printf("3. Calcular área de un círculo\n");
    printf("Elija una opción (1/2/3): ");
    scanf_s("%d", &opcion);

    switch (opcion) {
    case 1:
        
        float lado;
        printf("Ingrese el lado del cuadrado: ");
        scanf_s("%f", &lado);
        float areaCuadrado = lado * lado;
        printf("El área del cuadrado es: %.2f\n", areaCuadrado);
        
        break;

    case 2:
       
        float base, altura;
        printf("Ingrese la base del triángulo: ");
        scanf("%f", &base);
        printf("Ingrese la altura del triángulo: ");
        scanf("%f", &altura);
        float areaTriangulo = (base * altura) / 2;
         printf("El área del triángulo es: %.2f\n", areaTriangulo);
      
        break;

    default:
        printf("Opción no válida\n");
    }

}