#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida que permite usar printf y scanf
#define N 5         // Define una constante N con valor 5 para el tamaño del arreglo

int main() {
    // Declarar un arreglo de enteros con 5 elementos
    int VEC[] = {6, 8, 1, 7, 4};
    int i, j, AUX;

    // Algoritmo de ordenación de burbuja
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            // Compara los elementos adyacentes y los intercambia si están en el orden incorrecto
            if (VEC[i] > VEC[j]) {
                AUX = VEC[i];
                VEC[i] = VEC[j];
                VEC[j] = AUX;
            }
        }
    }

    // Imprimir el arreglo ordenado
    printf("Arreglo ordenado:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", VEC[i]);
    }
    printf("\n");

    return 0;
}

