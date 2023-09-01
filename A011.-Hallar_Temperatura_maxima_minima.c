/*
Hallar la temperatura máxima y
la mínima registrada en una laguna sabiendo que se toman 30 muestras.

*/

#include <stdio.h>

int main() {
    // Declaración de variables para el índice del bucle, temperaturas máxima y mínima, y temperatura actual.
    int i, T, Tmax, Tmin;
    Tmax = -10000; // Inicialización de Tmax con un valor extremadamente bajo.
    Tmin = 10000;  // Inicialización de Tmin con un valor extremadamente alto.

    // Bucle que se ejecuta 30 veces para ingresar temperaturas y encontrar Tmax y Tmin.
    for (i = 1; i <= 30; i++) {
        printf("Ingresar la temperatura: ");
        scanf("%i", &T); // Lectura de la temperatura ingresada por el usuario.

        // Comprobación para actualizar Tmax si la temperatura actual es mayor que Tmax.
        if (T > Tmax)
            Tmax = T;

        // Comprobación para actualizar Tmin si la temperatura actual es menor que Tmin.
        if (T < Tmin)
            Tmin = T;
    }

    // Mostrar la mayor y menor temperatura registrada.
    printf("La mayor temperatura registrada es %i\n", Tmax);
    printf("La menor temperatura registrada es %i\n", Tmin);

    return 0; // Indicar que el programa se ha ejecutado exitosamente.
}






















