






#include <stdio.h>

int main() {
    int N, S;
    S = 0; // Inicialización de la variable S para almacenar la sumatoria.

    printf("Ingresar un número: ");
    scanf("%i", &N); // Lectura del primer número ingresado por el usuario.

    while (N != 0) {
        S = S + N; // Agregar el valor de N a la sumatoria actual.

        printf("Ingresar un número: ");
        scanf("%i", &N); // Leer el siguiente número ingresado por el usuario.
    }

    printf("La sumatoria es %i\n", S); // Mostrar la sumatoria calculada.

    return 0; // Indicar que el programa se ha ejecutado exitosamente.
}





