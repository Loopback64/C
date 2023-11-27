#include <stdio.h>
#include <stdlib.h>

// Función que calcula la transformada de Laplace de la función de Heaviside
double laplaceTransform(double s) {
    // Puedes ajustar la función según tus necesidades
    double result = 1 / s; // Transformada de Laplace de la función de Heaviside

    return result;
}

int main() {
    // Valor de s para el que se calculará la transformada de Laplace
    double s;

    printf("Ingrese el valor de 's' para calcular la transformada de Laplace: ");
    scanf("%lf", &s);

    // Calcular la transformada de Laplace y mostrar el resultado
    double laplaceResult = laplaceTransform(s);

    printf("La transformada de Laplace es: %.2f\n", laplaceResult);

    return 0;
}

