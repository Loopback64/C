#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminante, x1, x2;

    // Solicitar los coeficientes al usuario
    printf("Ingrese el valor de a: ");
    if (scanf("%f", &a) != 1) {
        printf("Error al ingresar el valor de a\n");
        return 1;
    }

    printf("Ingrese el valor de b: ");
    if (scanf("%f", &b) != 1) {
        printf("Error al ingresar el valor de b\n");
        return 1;
    }

    printf("Ingrese el valor de c: ");
    if (scanf("%f", &c) != 1) {
        printf("Error al ingresar el valor de c\n");
        return 1;
    }

    // Calcular el discriminante
    discriminante = b * b - 4 * a * c;

    // Comprobar si la ecuación tiene soluciones reales
    if (discriminante > 0) {
        // Calcular las soluciones
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);

        // Mostrar la forma de la ecuación cuadrática
        printf("La ecuacion cuadratica es: %.2fx^2 + %.2fx + %.2f\n", a, b, c);

        // Mostrar las soluciones
        printf("Las soluciones son: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (discriminante == 0) {
        // Calcular la solución única
        x1 = -b / (2 * a);

        // Mostrar la forma de la ecuación cuadrática
        printf("La ecuacion cuadratica es: %.2fx^2 + %.2fx + %.2f\n", a, b, c);

        // Mostrar la solución única
        printf("La solucion unica es: x = %.2f\n", x1);
    } else {
        // La ecuación no tiene soluciones reales
        printf("La ecuacion cuadratica no tiene soluciones reales.\n");
    }

    return 0;
}





















