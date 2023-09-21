/*
Para hallar el máximo valor de un vector de N números aleatorios.
*/




#include <stdio.h>
#include <stdlib.h> // Necesario para la función srand y rand
#include <time.h>   // Necesario para la función time

#define N 100

int main() {
    int números[N], i, posmax, max = -1; // Declaramos variables e inicializamos max con un valor mínimo

    // Inicializamos el generador de números aleatorios con la hora actual
    srand(time(NULL));

    // Generamos números aleatorios y los almacenamos en el arreglo números
    for (i = 0; i < N; i++) {
        números[i] = rand() % 10; // Generamos un número aleatorio entre 0 y 9 y lo almacenamos
    }

    // Buscamos el valor máximo en el arreglo y registramos su posición
    for (i = 0; i < N; i++) {
        if (max < números[i]) {
            max = números[i]; // Actualizamos el valor máximo si encontramos uno más grande
            posmax = i;       // Registramos la ubicación del valor máximo
        }
    }

    // Imprimimos el valor máximo y su posición
    printf("\nEl valor máximo es %i y se encuentra en la posición %i\n", max, posmax);

    return 0; // Devolvemos un valor entero al finalizar el programa
}




