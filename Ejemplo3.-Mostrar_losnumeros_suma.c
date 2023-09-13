/*
la sumatoria de todos los números del arreglo. Agregamos el siguiente codigo al Ejemplo2
int Sum=0,i;
for (i=0 ; i<N ; i++)
{
Sum=Sum+arreglo[i];
}
printf(“La sumatoria es %i,Sum”);



*/



    #include <stdio.h>
#define N 20

int main() {
    // Declaración de variables
    int arreglo[N], i, Sum = 0;

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

    // Retorna 0 para indicar que el programa se ejecutó correctamente
    return 0;
}

