#include <stdio.h>
#include <stdlib.h>

// Función para encriptar o desencriptar un mensaje usando una clave
void encrypt(char *message, int key) {
    // Iterar sobre cada caracter del mensaje
    while (*message) {
        // Realizar la operación XOR con la clave
        *message = *message ^ key;
        // Mover al siguiente caracter en el mensaje
        message++;
    }
}

int main() {
    // Declarar un arreglo para almacenar el mensaje
    char message[100];
    // Declarar una variable para almacenar la clave
    int key;

    // Solicitar el mensaje al usuario
    printf("Ingrese un mensaje: ");
    // Leer el mensaje desde la entrada estándar (teclado)
    fgets(message, sizeof(message), stdin);

    // Solicitar la clave al usuario
    printf("Ingrese una clave de 8 bits (0-255): ");
    // Leer la clave desde la entrada estándar
    scanf("%d", &key);

    // Encriptar el mensaje llamando a la función
    encrypt(message, key);

    // Mostrar el mensaje encriptado
    printf("Mensaje encriptado: %s\n", message);

    // Desencriptar el mensaje llamando a la función
    encrypt(message, key);

    // Mostrar el mensaje desencriptado
    printf("Mensaje desencriptado: %s\n", message);

    // Devolver un valor entero como indicador de éxito
    return 0;
}

