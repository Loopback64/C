i#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializar el generador de números aleatorios
    srand(time(NULL));

    // Declarar el vector de vocales y el vector contador
    char vocales[30];
    int cantvocales[5] = {0};

    // Generar el vector de vocales al azar
    for (int i = 0; i < 30; ++i) {
        char vocal = rand() % 5 + 'a'; // Generar una vocal aleatoria
        vocales[i] = vocal;

        // Contar la vocal en el vector contador
        switch (vocal) {
            case 'a':
                cantvocales[0]++;
                break;
            case 'e':
                cantvocales[1]++;
                break;
            case 'i':
                cantvocales[2]++;
                break;
            case 'o':
                cantvocales[3]++;
                break;
            case 'u':
                cantvocales[4]++;
                break;
        }
    }

    // Mostrar el vector de vocales antes de ordenar
    printf("Vector de vocales antes de ordenar:\n");
    for (int i = 0; i < 30; ++i) {
        printf("%c ", vocales[i]);
    }
    printf("\n");

    // Ordenar el vector de vocales de forma ascendente
    for (int i = 0; i < 30 - 1; ++i) {
        for (int j = 0; j < 30 - i - 1; ++j) {
            if (vocales[j] > vocales[j + 1]) {
                // Intercambiar elementos si están en el orden incorrecto
                char temp = vocales[j];
                vocales[j] = vocales[j + 1];
                vocales[j + 1] = temp;
            }
        }
    }

    // Mostrar el vector de vocales después de ordenar
    printf("Vector de vocales después de ordenar:\n");
    for (int i = 0; i < 30; ++i) {
        printf("%c ", vocales[i]);
    }
    printf("\n");

    // Mostrar la cantidad de cada vocal usando el vector contador
    printf("Cantidad de vocales:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%c: %d\n", 'a' + i, cantvocales[i]);
    }

    return 0;
}

