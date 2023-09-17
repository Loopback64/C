/*
hallar la frecuencia de números de un dado, sabiendo que fueron
100 los tiros.
*/

#include <stdio.h>
#include <stdlib.h>  // Necesario para srand() y rand()
#include <time.h>    // Necesario para time()

#define N 100

int main() {
    int frecuencia[6] = {0};  // Inicializa el arreglo "frecuencia" con ceros
    int i, r;

    // Inicializa el generador de números aleatorios con una semilla
    srand(time(NULL));

    for (i = 0; i < N; i++) {
        r = rand() % 6 + 1;  // Genera un número aleatorio del 1 al 6

        switch (r) {
            case 1:
                frecuencia[0]++;  // Cuenta la cantidad de "unos" en el subíndice 0
                break;

            case 2:
                frecuencia[1]++;  // Cuenta la cantidad de "doses" en el subíndice 1
                break;

            case 3:
                frecuencia[2]++;  // Cuenta la cantidad de "treses" en el subíndice 2
                break;

            case 4:
                frecuencia[3]++;  // Cuenta la cantidad de "cuatros" en el subíndice 3
                break;

            case 5:
                frecuencia[4]++;  // Cuenta la cantidad de "cincos" en el subíndice 4
                break;

            case 6:
                frecuencia[5]++;  // Cuenta la cantidad de "seises" en el subíndice 5
                break;
        }
    }

    printf("\nLa frecuencia de cada número del dado es la siguiente:\n");

    for (i = 0; i < 6; i++) {
        printf("El número %i salió %i veces\n", i + 1, frecuencia[i]);  // Sumamos 1 al subíndice i para mostrar el número correcto
    }

    return 0;  // Retorna 0 para indicar que el programa se ejecutó correctamente
}



