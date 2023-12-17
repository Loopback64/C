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
    // Declarar un arreglo para almacenar el mensaje cifrado
    char encryptedMessage[100];
    // Declarar un arreglo para almacenar la clave
    char key[100];

    // Solicitar el mensaje cifrado al usuario
    printf("Ingrese un mensaje cifrado: ");
    fgets(encryptedMessage, sizeof(encryptedMessage), stdin);

    // Solicitar la clave al usuario
    printf("Ingrese la clave del mismo tamaño que el mensaje: ");
    fgets(key, sizeof(key), stdin);

    // Asegurarse de que la clave tenga la misma longitud que el mensaje cifrado
    if (strlen(key) != strlen(encryptedMessage)) {
        printf("La longitud de la clave debe ser igual a la del mensaje cifrado.\n");
        return 1; // Devolver un valor diferente de cero indica un error
    }

    // Aplicar el cifrado Vernam llamando a la función para descifrar
    vernamCipher(encryptedMessage, key);

    // Mostrar el mensaje descifrado (mensaje original)
    printf("Mensaje descifrado: %s\n", encryptedMessage);

    // Devolver un valor entero como indicador de éxito
    return 0;
}

