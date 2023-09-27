#include <stdio.h>      // Incluir la librería estándar de entrada y salida en C.
#include <string.h>     // Incluir la librería de manejo de cadenas de caracteres en C.

#define N 30            // Definir una constante N con valor 30.

int main() {            // Función principal del programa.

    char cadena[N];     // Declarar un arreglo de caracteres llamado "cadena" con tamaño N (30).

    printf("\n Ingresar una palabra: ");  // Imprimir un mensaje para el usuario solicitando ingresar una palabra.

    scanf("%s", cadena);  // Leer una cadena de caracteres ingresada por el usuario y almacenarla en "cadena".

    int lon;            // Declarar una variable entera llamada "lon" para almacenar la longitud de la cadena.
    lon = strlen(cadena);  // Calcular la longitud de la cadena y asignarla a la variable "lon" usando la función strlen.

    printf("La longitud del texto ingresado es %i\n", lon);  // Imprimir la longitud de la cadena ingresada.

    return 0;           // Devolver un valor entero 0 para indicar una ejecución exitosa del programa.
}

