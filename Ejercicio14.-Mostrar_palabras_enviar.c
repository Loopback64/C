#include <stdio.h> // Incluir la librería estándar de entrada y salida en C.

#define N 30 // Definir una constante N con valor 30.

int main() { // Función principal del programa.

    char arreglo[N]; // Declarar un arreglo de caracteres llamado "arreglo" con tamaño N (30).

    printf("\n Ingresar una palabra: "); // Imprimir un mensaje para el usuario.

    scanf("%s", arreglo); // Leer una cadena de caracteres ingresada por el usuario y almacenarla en "arreglo".

    printf("La palabra ingresada es: %s\n", arreglo); // Imprimir la palabra ingresada por el usuario.

    return 0; // Devolver un valor entero 0 para indicar una ejecución exitosa del programa.
}

