#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Función para aplicar el cifrado Vernam a un mensaje
void vernamCipher(char *message, char *key) {
    // Obtener la longitud del mensaje
    size_t messageLen = strlen(message);

    // Iterar sobre cada carácter del mensaje
    for (size_t i = 0; i < messageLen; ++i) {
        // Aplicar la operación XOR con el carácter correspondiente de la clave
        message[i] = message[i] ^ key[i];
    }
}

int main() {
    // Declarar un arreglo para almacenar el mensaje
    char message[100];
    // Declarar un arreglo para almacenar la clave
    char key[100];

    // Solicitar el mensaje al usuario
    printf("Ingrese un mensaje: ");
    fgets(message, sizeof(message), stdin);

    // Solicitar la clave al usuario
    printf("Ingrese una clave del mismo tamaño que el mensaje: ");
    fgets(key, sizeof(key), stdin);

    // Asegurarse de que la clave tenga la misma longitud que el mensaje
    if (strlen(key) != strlen(message)) {
        printf("La longitud de la clave debe ser igual a la del mensaje.\n");
        return 1; // Devolver un valor diferente de cero indica un error
    }

    // Aplicar el cifrado Vernam llamando a la función
    vernamCipher(message, key);

    // Mostrar el mensaje cifrado
    printf("Mensaje cifrado: %s\n", message);

    // Aplicar nuevamente el cifrado Vernam para desencriptar
    vernamCipher(message, key);

    // Mostrar el mensaje original desencriptado
    printf("Mensaje original: %s\n", message);

    // Devolver un valor entero como indicador de éxito
    return 0;
}

