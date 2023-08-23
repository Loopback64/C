


/*
Mostrar el perímetro de una
circunferencia, siempre y cuando el radio que se ingresa sea mayor a cero,
caso contrario, informar con el cartel «Error en el ingreso»
*/

#include <stdio.h>  // Incluir la biblioteca estándar de entrada/salida

#define PI 3.1416   // Definir una constante llamada PI con el valor 3.1416

int main() {        // Función principal del programa
    float r, Peri;  // Declarar variables r (radio) y Peri (perímetro) de tipo flotante
    printf("Ingrese el radio: ");  // Mostrar un mensaje pidiendo al usuario que ingrese el radio
    scanf("%f", &r);   // Leer el valor ingresado por el usuario y guardarlo en la variable r

    if (r > 0) {  // Comprobar si el radio es mayor que 0
        Peri = 2 * r * PI;  // Calcular el perímetro de la circunferencia usando la fórmula 2 * radio * PI
        printf("El perímetro de la circunferencia es %6.2f", Peri);  // Mostrar el resultado del cálculo
    } else {
        printf("Error en el ingreso");  // Mostrar un mensaje de error si el radio es menor o igual a 0
    }

    return 0;  // Devolver 0 para indicar que el programa se ejecutó correctamente
}





















