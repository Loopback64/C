#include <stdio.h>
#include <string.h>

#define N 30

int main() {
    char cadena1[N], cadena2[N];
    
    // Solicitar al usuario que ingrese una palabra
    printf("\n Ingresar una palabra: ");
    
    // Leer la primera palabra ingresada por el usuario y almacenarla en cadena1
    scanf("%s", cadena1);
    
    // Solicitar al usuario que ingrese otra palabra
    printf("\n Ingresar otra palabra: ");
    
    // Leer la segunda palabra ingresada por el usuario y almacenarla en cadena2
    scanf("%s", cadena2);

    // Comparar las dos cadenas utilizando strcmp y verificar si son iguales
    if (strcmp(cadena1, cadena2) == 0) {
        // Si son iguales, imprimir "Son iguales"
        printf("Son iguales\n");
    } else {
        // Si no son iguales, imprimir "No son iguales"
        printf("No son iguales\n");
    }

    // Retornar 0 para indicar que el programa se ejecutó correctamente
    return 0;
}

