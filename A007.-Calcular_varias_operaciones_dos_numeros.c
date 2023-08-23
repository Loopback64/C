







/*
Ingresar dos números A y B
y el operador aritmético op (suma “+”, resta “-“, producto “*” o división “/”)
para realizar el cálculo y mostrar el resultado.

*/


#include <stdio.h>

int main() {
    int A, B;
    float R;
    char op;

    printf("Ingrese dos números: ");
    scanf("%d %d", &A, &B);  // Leer dos números enteros

    // Limpiar el búfer de entrada antes de leer el carácter
    while (getchar() != '\n');

    printf("Ingrese la operación: ");
    scanf("%c", &op);  // Leer el carácter de operación

    switch (op) {
        case '+':
            R = A + B;
            break;
        case '-':
            R = A - B;
            break;
        case '*':
            R = A * B;
            break;
        case '/':
            if (B != 0) {
                R = (float) A / B;  // Convertir el resultado a flotante para mantener precisión
            } else {
                printf("No se puede dividir por cero");
                return 1;  // Salir del programa con código de error
            }
            break;
        default:
            printf("Operación no válida");
            return 1;  // Salir del programa con código de error
    }

    printf("El resultado es %6.2f", R);

    return 0;  // Salir del programa
}

