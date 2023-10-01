#include <stdio.h>
#include <string.h>
#include <ctype.h>  // Necesario para toupper y tolower
#define N 30

int main() {
    char cadena1[N], cadena2[N];
    
    // Solicitar al usuario que ingrese una palabra
    printf("\n Ingresar una palabra: ");
    scanf("%s", cadena1);
    
    // Solicitar al usuario que ingrese otra palabra
    printf("\n Ingresar otra palabra: ");
    scanf("%s", cadena2);
    
    // Concatenar las dos cadenas
    strcat(cadena1, cadena2);
    
    // Mostrar el resultado de la concatenación
    printf("\n El resultado es: %s", cadena1);
    
    // Convertir la cadena a mayúsculas
    for (int i = 0; cadena1[i]; i++) {
        cadena1[i] = toupper(cadena1[i]);
    }
    
    // Mostrar la cadena en mayúsculas
    printf("\n En Mayúscula es: %s", cadena1);

    // Convertir la cadena a minúsculas
    for (int i = 0; cadena1[i]; i++) {
        cadena1[i] = tolower(cadena1[i]);
    }

    // Mostrar la cadena en minúsculas
    printf("\n En Minúscula es: %s", cadena1);

    return 0;
}

