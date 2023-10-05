/*



*/



#include <stdio.h>
#include <stdlib.h>  // Necesario para la función srand y rand
#include <time.h>    // Necesario para la función time

#define N 4
#define M 4

int main() { // Cambio "main()" por "int main()"
    char matriz[N][M], vocales[] = {'A', 'E', 'I', 'O', 'U'}; // Declaración de matriz y arreglo de vocales
    int i, j, r; // Declaración de variables enteras i, j y r

    srand(time(NULL)); // Inicializa el generador de números aleatorios con la hora actual
    for (i = 0; i < N; i++) { // Bucle exterior para filas
        for (j = 0; j < M; j++) { // Bucle interior para columnas
            r = rand() % 5; // Genera un número aleatorio entre 0 y 4
            matriz[i][j] = vocales[r]; // Asigna una vocal aleatoria a la matriz
        }
    }

    printf("\nLa matriz generada es:\n"); // Imprime un mensaje
    for (i = 0; i < N; i++) { // Bucle exterior para filas
        for (j = 0; j < M; j++) { // Bucle interior para columnas
            printf("%2c", matriz[i][j]); // Imprime el valor de la matriz formateado
        }
        printf("\n"); // Imprime un salto de línea al final de cada fila
    }

    return 0; // Devuelve 0 para indicar una ejecución exitosa
}






