#include <stdio.h>  // Inclusión de la biblioteca estándar de entrada/salida.

int factorial(int x) {  // Declaración de la función "factorial" que calcula el factorial de un número.
    int i, aux = 1;  // Declaración de variables enteras "i" y "aux" e inicialización de "aux" a 1.
    for (i = 2; i <= x; i++)  // Inicio de un bucle "for" que calcula el factorial.
        aux = aux * i;  // Multiplicación acumulativa en "aux".
    return aux;  // Devolución del resultado del factorial.
}

int cuadrado(int x) {  // Declaración de la función "cuadrado" que calcula el cuadrado de un número.
    return x * x;  // Devolución del cuadrado del número.
}

int main() {  // Función principal "main" que inicia la ejecución del programa.
    int a;  // Declaración de la variable entera "a".
    printf("\n Ingrese el número: ");  // Impresión de un mensaje en pantalla para solicitar un número.
    scanf("%d", &a);  // Lectura de un número ingresado por el usuario y almacenamiento en "a".
    printf("\n El factorial del número %d es %d", a, factorial(a));  // Impresión del factorial del número.
    printf("\n El cuadrado del número %d es %d", a, cuadrado(a));  // Impresión del cuadrado del número.
    return 0;  // Finalización del programa con código de salida 0.
}

