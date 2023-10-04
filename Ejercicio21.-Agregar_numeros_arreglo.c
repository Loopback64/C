#include <stdio.h>
#define N 3 // Definir una constante N para la cantidad máxima de filas
#define M 5 // Definir una constante M para la cantidad máxima de columnas

int main() { // Declaración de la función principal y su tipo de retorno int

    int matriz[N][M], i, j; // Declarar una matriz de enteros llamada matriz de dimensiones N x M y variables de control i y j

    for (i = 0; i < N; i++) { // Inicio del bucle exterior para recorrer filas
        for (j = 0; j < M; j++) { // Inicio del bucle interior para recorrer columnas
            printf("\n Ingrese un número: "); // Imprimir un mensaje solicitando un número
            scanf("%d", &matriz[i][j]); // Leer un número y almacenarlo en la matriz en la posición actual
        }
    }

    return 0; // Devolver un valor (0) para indicar una salida exitosa del programa
}

