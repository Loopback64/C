#include <stdio.h>
#include <string.h>

void vernam_encrypt(char *message, char *key) {
    int len = strlen(message);
    for (int i = 0; i < len; i++) {
        message[i] = message[i] ^ key[i % strlen(key)];
    }
}

void vernam_decrypt(char *encrypted, char *key) {
    int len = strlen(encrypted);
    for (int i = 0; i < len; i++) {
        encrypted[i] = encrypted[i] ^ key[i % strlen(key)];
    }
}

int main() {
    char message[1000];
    char key[1000];

    printf("¿Quieres encriptar (E) o desencriptar (D)? ");
    char option;
    scanf(" %c", &option);  // Añadido espacio antes del %c para consumir cualquier caracter en blanco residual.

    if (option == 'E') {
        printf("Introduce el mensaje a encriptar: ");
        scanf(" %[^\n]", message);

        printf("Introduce la clave (debe tener la misma longitud que el mensaje): ");
        scanf(" %[^\n]", key);

        vernam_encrypt(message, key);
        printf("Mensaje encriptado: %s\n", message);
    } else if (option == 'D') {
        printf("Introduce el mensaje encriptado: ");
        scanf(" %[^\n]", message);

        printf("Introduce la clave (debe tener la misma longitud que el mensaje encriptado): ");
        scanf(" %[^\n]", key);

        vernam_decrypt(message, key);
        printf("Mensaje desencriptado: %s\n", message);
    } else {
        printf("Opción no válida. Por favor, elige 'E' para encriptar o 'D' para desencriptar.\n");
    }

    return 0;
}

