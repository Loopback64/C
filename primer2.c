
#include <stdio.h>
#include <stdlib.h>

// Función para imprimir el estado actual del juego
void imprimirJuego(int posicionMario) {
    printf("====================================\n");
    for (int i = 0; i < 10; i++) {
        if (i == 9 - posicionMario) {
            printf("| M ");
        } else {
            printf("|   ");
        }
    }
    printf("|\n====================================\n");
}

int main() {
    int posicionMario = 0;
    char opcion;

    do {
        // Mostrar el estado actual del juego
        imprimirJuego(posicionMario);

        // Mostrar opciones
        printf("Opciones:\n");
        printf("1. Mover a la izquierda\n");
        printf("2. Mover a la derecha\n");
        printf("0. Salir\n");

        // Leer la opción del usuario
        printf("Seleccione una opcion: ");
        scanf(" %c", &opcion);

        // Realizar la acción correspondiente a la opción seleccionada
        switch (opcion) {
            case '1':
                // Mover a la izquierda
                if (posicionMario < 9) {
                    posicionMario++;
                }
                break;
            case '2':
                // Mover a la derecha
                if (posicionMario > 0) {
                    posicionMario--;
                }
                break;
            case '0':
                // Salir del juego
                printf("Saliendo del juego. ¡Hasta luego!\n");
                exit(0);
            default:
                printf("Opción no válida. Inténtalo de nuevo.\n");
        }

    } while (1);  // Bucle infinito para mantener el juego en ejecución

    return 0;
}































