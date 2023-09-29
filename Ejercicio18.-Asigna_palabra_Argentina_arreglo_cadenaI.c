/*
se asigna la palabra «Argentina» al arreglo «cadena1» y luego se
le asigna a «cadena2» el contenido de «cadena1». Finalmente, se muestra el
contenido de «cadena2»



strcmp («cadena de caracteres 1», «cadena de caracteres 2»): esta fun-
ción devuelve un valor numérico según la comparación efectuada entre las
dos cadenas de caracteres. Los resultados pueden ser 1, 0 o -1.
strcmp(“Argentina”,”Argentina”)→el resultado es cero porque son

exactamente iguales las cadenas
strcmp(“Argentina”,”Argentinas”)→el resultado es -1 porque no son

iguales
strcmp(“Argentina”,”Argen”)→el resultado es 1 porque si bien no

son iguales, sí los 5 primeros caracteres


*/



#include <stdio.h>
#include <string.h>

#define N 30

int main() {
    // Declarar dos arreglos de caracteres para almacenar las cadenas
    char cadena1[N], cadena2[N];
    
    // Copiar la cadena "Argentina" en la variable cadena1
    strcpy(cadena1, "Argentina");
    
    // Copiar el contenido de cadena1 en cadena2
    strcpy(cadena2, cadena1);
    
    // Imprimir el contenido de cadena2 con un mensaje
    printf("El país es %s\n", cadena2);
    
    return 0; // Devolver 0 para indicar que el programa se ejecutó correctamente
}



























