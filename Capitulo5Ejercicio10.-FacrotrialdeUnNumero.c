

#include <stdio.h>

// Función recursiva para calcular el factorial de un número
int factorial(int n) {
    int r;
    if (n == 0)
        return 1; // El factorial de 0 es 1
    else
        r = n * factorial(n - 1);  // Llamada recursiva para calcular el factorial
    return r;
}

int main() {
    int n, f;
    printf("\nIngrese un número: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        f = factorial(n);  // Llamamos a la función factorial para calcular el factorial
        printf("El factorial de %d es %d\n", n, f);  // Mostramos el resultado
    }

    return 0;
}



