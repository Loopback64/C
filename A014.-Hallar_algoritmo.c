/*
hacer un algoritmo que muestre del 1 al 21 (solo los números
impares).
*/

#include <stdio.h>

int main() {
    int N; // Declaración de una variable entera llamada N
    N = 1; // Inicialización de N con el valor 1
    do {
        printf("%i ", N); // Imprime el valor de N seguido de un espacio en blanco
        N = N + 2; // Incrementa N en 2 unidades en cada iteración
    } while (N <= 21); // Continúa el bucle mientras N sea menor o igual a 21
    
    return 0; // Devuelve 0 para indicar una ejecución exitosa
}










