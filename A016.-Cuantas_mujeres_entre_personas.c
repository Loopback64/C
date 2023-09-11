/*

se desea saber cuántas mujeres hay entre las 10 personas.



*/


#include <stdio.h>

int main() {
    char s;
    int i, cm = 0;

    for (i = 0; i < 10; i++) {
        // Pide al usuario que ingrese el sexo (m/f)
        printf("Ingrese sexo (m/f): ");

        // Lee un carácter (sexo) del usuario y almacénalo en la variable 's'
        scanf(" %c", &s);

        // Limpia el búfer del teclado para evitar problemas con el siguiente ciclo
        while (getchar() != '\n');

        // Verifica si el carácter ingresado representa una mujer (femenino)
        if (s == 'f' || s == 'F') {
            cm++; // Incrementa el contador de mujeres
        }
    }

    // Imprime la cantidad de mujeres ingresadas
    printf("\nLa cantidad de mujeres es %i\n", cm);

    return 0;
}

