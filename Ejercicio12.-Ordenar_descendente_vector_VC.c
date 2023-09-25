/*

ordenar de modo descendente el vector vc que contiene 10 letras.






*/



#include <stdio.h>
#define N 10

int main() {
    // Declaración del arreglo de caracteres y una variable auxiliar
    char VC[] = {'a', 'n', 'r', 'i', 't', 'o', 'n', 'g', 'i', 'm'};
    char AUX;
    int i, j;

    // Algoritmo de ordenación de burbuja para ordenar los caracteres en orden descendente
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            // Compara los caracteres adyacentes y los intercambia si están en el orden incorrecto
            if (VC[i] < VC[j]) {
                AUX = VC[i];
                VC[i] = VC[j];
                VC[j] = AUX;
            }
        }
    }

    // Imprime la cadena de caracteres ordenada
    printf("La cadena de caracteres ordenada es: ");
    for (i = 0; i < N; i++) {
        printf("%c - ", VC[i]);
    }
    printf("\n");

    return 0;
}

