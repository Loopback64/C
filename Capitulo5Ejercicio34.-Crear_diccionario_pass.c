#include <stdio.h>

// Función para generar combinaciones
void generarCombinaciones(int longitud) {
    // Verificar que la longitud sea válida
    if (longitud <= 0 || longitud > 10) {
        printf("Por favor, ingrese una longitud válida entre 1 y 10.\n");
        return;
    }

    // Definir los caracteres permitidos (A-Z y 0-9)
    char caracteres[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    // Calcular el número total de combinaciones posibles
    long long totalCombinaciones = 1;
    for (int i = 0; i < longitud; i++) {
        totalCombinaciones *= 36; // 26 letras + 10 números
    }

    printf("Generando todas las combinaciones posibles de %d cifras...\n", longitud);

    // Generar combinaciones
    for (long long i = 0; i < totalCombinaciones; i++) {
        long long valor = i;
        char combinacion[11]; // Máximo 10 caracteres + el carácter nulo

        // Construir la combinación
        for (int j = 0; j < longitud; j++) {
            combinacion[j] = caracteres[valor % 36];
            valor /= 36;
        }

        // Agregar el carácter nulo al final de la cadena
        combinacion[longitud] = '\0';

        // Imprimir la combinación
        printf("%s\n", combinacion);
    }

    printf("Se generaron todas las combinaciones posibles.\n");
}

int main() {
    int longitud;

    // Preguntar al usuario la longitud deseada
    printf("Ingrese la longitud de las cifras (1-10): ");
    scanf("%d", &longitud);

    // Generar combinaciones
    generarCombinaciones(longitud);

    return 0;
}

