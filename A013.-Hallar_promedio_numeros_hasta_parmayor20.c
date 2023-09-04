

// Hallar el promedio de números
// ingresados por teclado hasta que aparezca uno que no sea par y mayor a 20.







#include <stdio.h>

int main() { // Debes especificar el tipo de retorno, en este caso, int.
    int N, S, C;
    float P;
    S = 0;
    C = 0;

    printf("Ingresar un número: ");
    scanf("%i", &N);

    // El ciclo while debe verificar que el número sea impar y mayor que 20.
    while (!((N % 2 == 1) && (N > 20))) {
        S = S + N;
        C++;
        printf("Ingresar un número: ");
        scanf("%i", &N);
    }

    P = (float)S / C;
    printf("El promedio es %6.2f\n", P); // Agregamos "\n" para una nueva línea al final.

    return 0; // Devolvemos un valor entero como código de salida.
}




