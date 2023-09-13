/*







*/




#include <stdio.h>
#define N 20

int main() {
    // Declaración de variables
    int arreglo[N], i, Sum = 0, Cant = 0;

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

    // Calcula la suma de los números ingresados
    for (i = 0; i < N; i++) {
        Sum = Sum + arreglo[i];
    }

    // Imprime la suma
    printf("La sumatoria es %i\n", Sum);

    // Cuenta la cantidad de números negativos
    for (i = 0; i < N; i++) {
        if (arreglo[i] < 0) {
            Cant++;
        }
    }

    // Imprime la cantidad de números negativos
    printf("La cantidad de números negativos ingresados es: %i\n", Cant);

    // Retorna 0 para indicar que el programa se ejecutó correctamente
    return 0;
}

