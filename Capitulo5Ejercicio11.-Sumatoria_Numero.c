
#include <stdio.h>

// Función recursiva para calcular la sumatoria de los números desde 1 hasta n
int sumatoria(int n) {
    int s;
    if (n == 1)
        return 1;  // El caso base es cuando n es 1, la sumatoria es 1
    else
        s = n + sumatoria(n - 1);  // Llamada recursiva para calcular la sumatoria
    return s;
}

int main() {
    int n, sum;
    printf("\nIngrese un número: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("La sumatoria no está definida para números no positivos.\n");
    } else {
        sum = sumatoria(n);  // Llamamos a la función sumatoria para calcular la sumatoria
        printf("La sumatoria de los números desde 1 hasta %d es %d\n", n, sum);  // Mostramos el resultado
    }

    return 0;
}





