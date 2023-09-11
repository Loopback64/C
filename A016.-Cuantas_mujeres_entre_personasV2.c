#include <stdio.h>

int main() {
    char s;
    int i, cm = 0;

    for (i = 0; i < 10; i++) {
        fflush(stdin); // Limpia el búfer de entrada del teclado para evitar problemas

        printf("Ingrese sexo (m/f): "); // Solicita al usuario que ingrese el sexo

        scanf(" %c", &s); // Lee un carácter (sexo) del usuario y almacénalo en la variable 's'

        if (s == 'f' || s == 'F') { // Comprueba si el carácter ingresado representa una mujer (femenino)
            cm++; // Incrementa el contador de mujeres
        }
    }

    printf("\nLa cantidad de mujeres es %i\n", cm); // Imprime la cantidad de mujeres ingresadas

    return 0;
}

