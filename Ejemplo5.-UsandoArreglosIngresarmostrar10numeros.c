

#include <stdio.h>
#define N 10

int main() {
    // Declaración de variables
    int arreglo[N], i;
    
    // Inicialización del arreglo con valores del 0 al 9
    for (i = 0; i < N; i++) {
        arreglo[i] = i;
    }
    
    // Impresión del encabezado
    printf("\nEl vector resultante es:\n");
    
    // Impresión de los elementos del arreglo
    for (i = 0; i < N; i++) {
        printf("%i ", arreglo[i]);
    }
    
    // Agregamos un salto de línea al final para mejorar el formato
    printf("\n");
    
    // Retorna 0 para indicar que el programa se ejecutó correctamente
    return 0;
}






