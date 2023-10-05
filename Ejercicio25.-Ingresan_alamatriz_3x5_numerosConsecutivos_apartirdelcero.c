/*
Se ingresan a la matriz de 3x5 números consecutivos a partir del
cero y mostramos por pantalla.
*/



#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida en C.
#define N 3         // Define la constante N con valor 3 para el número de filas.
#define M 5         // Define la constante M con valor 5 para el número de columnas.

int main() {        // Función principal, punto de entrada del programa.
    int matriz[N][M], i, j, k = 0;  // Declaración de variables: matriz, i, j y k.

    // Bucle anidado para inicializar la matriz con valores secuenciales.
    for (i = 0; i < N; i++) {        // Bucle externo para recorrer las filas.
        for (j = 0; j < M; j++) {    // Bucle interno para recorrer las columnas.
            matriz[i][j] = k;        // Asigna el valor de k a la celda de la matriz.
            k++;                     // Incrementa k para el siguiente valor.
        }
    }

    printf("\nLa matriz resultante es:\n");  // Muestra un mensaje en pantalla.

    // Bucle anidado para imprimir la matriz formateada.
    for (i = 0; i < N; i++) {        // Bucle externo para recorrer las filas.
        for (j = 0; j < M; j++) {    // Bucle interno para recorrer las columnas.
            printf("%3i", matriz[i][j]);  // Imprime el valor de la celda con formato.
        }
        printf("\n");  // Imprime una nueva línea para separar las filas.
    }

    return 0;  // Retorna 0 para indicar que el programa finalizó correctamente.
}

