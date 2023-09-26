/*



mostrar la palabra «Programación»



*/


#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida.

int main() { // Declaración de la función principal "main" de tipo entero.
    char cadena[] = "Programación"; // Declaración y asignación de una cadena de caracteres.
    int i = 0; // Declaración e inicialización de una variable entera "i".

    while (cadena[i] != '\0') { // Inicia un bucle while que se ejecuta mientras no se llegue al carácter nulo '\0' al final de la cadena.
        printf("%c", cadena[i]); // Imprime el carácter actual de la cadena.
        i++; // Incrementa el valor de "i" para avanzar al siguiente carácter en la cadena.
    }

    printf("\n"); // Imprime una nueva línea para un formato más limpio.

    return 0; // Devuelve un valor entero 0 para indicar una ejecución exitosa.
}

