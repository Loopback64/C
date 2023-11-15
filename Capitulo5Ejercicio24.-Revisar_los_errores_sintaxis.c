#include <stdio.h>

int main() {
    // Declaración de variables
    FILE *archivo;  // Puntero de archivo para el programa en C
    char caracter;   // Variable para almacenar cada carácter del archivo
    int parentesis = 0, llaves = 0, corchetes = 0, comillas = 0, apostrofos = 0, comentarios = 0;

    // Apertura del archivo fuente para lectura
    archivo = fopen("tu_programa.c", "r");  // Reemplaza "tu_programa.c" con el nombre de tu archivo fuente

    // Verificación de apertura exitosa del archivo
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    // Bucle para leer cada carácter del archivo
    while ((caracter = fgetc(archivo)) != EOF) {
        // Switch para analizar cada carácter
        switch (caracter) {
            // Caso para paréntesis izquierdo
            case '(':
                parentesis++;
                break;
            // Caso para paréntesis derecho
            case ')':
                parentesis--;
                break;
            // Caso para llave izquierda
            case '{':
                llaves++;
                break;
            // Caso para llave derecha
            case '}':
                llaves--;
                break;
            // Caso para corchete izquierdo
            case '[':
                corchetes++;
                break;
            // Caso para corchete derecho
            case ']':
                corchetes--;
                break;
            // Caso para comilla doble
            case '"':
                comillas++;
                break;
            // Caso para apóstrofo
            case '\'':
                apostrofos++;
                break;
            // Caso para barra inclinada (puede ser el inicio de un comentario de una línea o bloque)
            case '/':
                // Verificación si es el inicio de un comentario de bloque
                if ((caracter = fgetc(archivo)) == '*') {
                    comentarios++;
                }
                break;
            // Caso para asterisco (puede ser el final de un comentario de bloque)
            case '*':
                // Verificación si es el final de un comentario de bloque
                if ((caracter = fgetc(archivo)) == '/') {
                    comentarios--;
                }
                break;
            // Caso por defecto (otros caracteres que no son analizados)
            default:
                break;
        }
    }

    // Cierre del archivo
    fclose(archivo);

    // Verificación de errores de sintaxis y muestra de resultados
    if (parentesis != 0 || llaves != 0 || corchetes != 0 || comillas % 2 != 0 || apostrofos % 2 != 0 || comentarios != 0) {
        printf("Errores de sintaxis encontrados:\n");
        printf("Paréntesis: %d\nLlaves: %d\nCorchetes: %d\nComillas: %d\nApóstrofos: %d\nComentarios: %d\n",
               parentesis, llaves, corchetes, comillas, apostrofos, comentarios);
    } else {
        printf("No se encontraron errores de sintaxis.\n");
    }

    // Retorna 0 para indicar una ejecución exitosa
    return 0;
}







