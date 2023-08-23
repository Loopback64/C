/*
Ingresar dos números ente-
ros, mostrar el más grande y, en caso de que sean iguales, mostrar un cartel
«Son iguales».




*/


#include <stdio.h>  // Incluir la biblioteca estándar de entrada/salida

int main() {  // Función principal del programa
    int A, B;  // Declarar variables A y B de tipo entero
    printf("Ingrese dos números: ");  // Mostrar un mensaje pidiendo al usuario que ingrese dos números
    scanf("%d", &A);  // Leer el primer número ingresado por el usuario y guardarlo en la variable A
    scanf("%d", &B);  // Leer el segundo número ingresado por el usuario y guardarlo en la variable B

    if (A >= B) {  // Comprobar si el primer número (A) es mayor o igual al segundo número (B)
        if (A == B) {  // Si A es igual a B, mostrar que son iguales
            printf("Son iguales");
        } else {  // Si A no es igual a B, mostrar que A es el mayor
            printf("El número %d es el mayor", A);
        }
    } else {  // Si A no es mayor ni igual a B, entonces B es el mayor
        printf("El número %d es el mayor", B);
    }

    return 0;  // Devolver 0 para indicar que el programa se ejecutó correctamente
}








