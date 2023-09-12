/*
Explicación de los comentarios:

#include <stdio.h>: Incluye la biblioteca estándar de entrada/salida necesaria para la función printf.

#include <math.h>: Incluye la biblioteca estándar de matemáticas necesaria para la función cos.

#define PI 3.14159265: Define una constante llamada PI que almacena el valor de pi.

int main(): Declara la función principal main con un tipo de retorno int.

double parametro, resultado;: Declara dos variables de tipo double para almacenar el ángulo en grados y el resultado del cálculo del coseno.

parametro = 60.0;: Asigna el valor de 60.0 grados a la variable parametro.

resultado = cos(parametro * PI / 180.0);: Calcula el coseno del ángulo en radianes usando la función cos de la biblioteca de matemáticas.

printf("El coseno de %6.2f grados es %6.2f.\n", parametro, resultado);: Imprime el resultado del cálculo en la pantalla utilizando el formato especificado.

return 0;: Retorna 0 para indicar que el programa se ejecutó correctamente.


*/



#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main() {
    // Declaración de variables
    double parametro, resultado;

    // Valor del ángulo en grados
    parametro = 60.0;

    // Cálculo del coseno del ángulo en radianes
    resultado = cos(parametro * PI / 180.0);

    // Impresión del resultado
    printf("El coseno de %6.2f grados es %6.2f.\n", parametro, resultado);

    // Retorna 0 para indicar que el programa se ejecutó correctamente
    return 0;
}

