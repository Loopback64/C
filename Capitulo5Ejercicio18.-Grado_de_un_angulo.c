#include <stdio.h>
#include <math.h>

int main() {
    char opcion;
    double angulo, radianes, resultado;

    while (1) {
        printf("Ingrese el grado de un ángulo (o 'D' para salir): ");
        scanf(" %c", &opcion);

        if (opcion == 'D' || opcion == 'd') {
            printf("Saliendo del programa.\n");
            break;
        }

        if (opcion != 'A' && opcion != 'B' && opcion != 'C') {
            printf("Opción no válida. Por favor, ingrese 'A', 'B', 'C' o 'D'.\n");
            continue;
        }

        printf("Ingrese el ángulo en grados: ");
        scanf("%lf", &angulo);

        radianes = angulo * (M_PI / 180); // Conversión de grados a radianes

        if (opcion == 'A' || opcion == 'a') {
            resultado = sin(radianes);
            printf("El seno del ángulo %.2lf grados es %.2lf.\n", angulo, resultado);
        } else if (opcion == 'B' || opcion == 'b') {
            resultado = cos(radianes);
            printf("El coseno del ángulo %.2lf grados es %.2lf.\n", angulo, resultado);
        } else if (opcion == 'C' || opcion == 'c') {
            resultado = tan(radianes);
            printf("La tangente del ángulo %.2lf grados es %.2lf.\n", angulo, resultado);
        }
    }

    return 0;
}

