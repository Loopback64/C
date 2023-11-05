#include <stdio.h>

int main() {
    int n;
    printf("Ingrese la longitud del vector de números binarios: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("La longitud del vector debe ser un número positivo.\n");
        return 1;
    }

    int vectorOriginal[n];
    int vectorInvertido[n];

    // Ingresar el vector original
    printf("Ingrese el vector de números binarios (0 y 1):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vectorOriginal[i]);
        if (vectorOriginal[i] != 0 && vectorOriginal[i] != 1) {
            printf("Por favor, ingrese solo 0 o 1.\n");
            return 1;
        }
    }

    // Crear el vector invertido
    for (int i = 0; i < n; i++) {
        vectorInvertido[i] = !vectorOriginal[n - i - 1];
    }

    // Mostrar ambos vectores
    printf("Vector Original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vectorOriginal[i]);
    }

    printf("\nVector Invertido: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vectorInvertido[i]);
    }

    printf("\n");

    return 0;
}

