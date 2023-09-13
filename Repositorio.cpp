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
        // Calcular el área de un cuadrado
        float lado;
        printf("Ingrese el lado del cuadrado: ");
        scanf_s("%f", &lado);
        if (lado <= 0) {
            printf("El lado debe ser un número positivo.\n");
        }
        else {
            float areaCuadrado = lado * lado;
            printf("El área del cuadrado es: %.2f\n", areaCuadrado);
        }
        break;


    default:
        printf("Opción no válida\n");
    }

}