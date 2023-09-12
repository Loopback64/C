/*

cómo mostrar por pantalla los 20 números enteros que fueron
ingresados en el ejemplo anterior.
Para imprimir los números guardados en el arreglo, puedes agregar un bucle for después de que hayas llenado el arreglo. Aquí está el código completo con las líneas añadidas para imprimir los números guardados:

*/


#include <stdio.h>
#define N 20

int main() {
    // Declaración de variables
    int arreglo[N], i;

    // Bucle para ingresar números en el arreglo
    for (i = 0; i < N; i++) {
        // Solicita al usuario que ingrese un número
        printf("\nIngrese un número: ");

        // Lee el número ingresado por el usuario y lo almacena en el arreglo
        scanf("%d", &arreglo[i]);
    }

    // Imprime los números guardados en el arreglo
    printf("\nNúmeros guardados en el arreglo:\n");
    for (i = 0; i < N; i++) {
        printf("En la posición %i se cargó el número %i\n", i, arreglo[i]);
    }

    // Retorna 0 para indicar que el programa se ejecutó correctamente
    return 0;
}


