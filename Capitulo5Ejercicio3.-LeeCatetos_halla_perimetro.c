#include <stdio.h>   // Incluye la librería estándar de entrada y salida.
#include <math.h>    // Incluye la librería matemática para la función sqrt.

float cuadrado(float x)
{
    return (x * x);  // Calcula el cuadrado de x y lo devuelve.
}

float hipotenusa(float x, float y)
{
    float h;
    h = sqrt(cuadrado(x) + cuadrado(y));  // Calcula la hipotenusa usando el teorema de Pitágoras.
    return h;  // Devuelve la hipotenusa calculada.
}

float suma(float x, float y, float z)
{
    return (x + y + z);  // Calcula la suma de x, y y z, y la devuelve.
}

int main()
{
    float a, b, perim;

    printf("\n Ingrese los catetos del triángulo: ");  // Muestra un mensaje para ingresar los catetos.
    scanf("%f %f", &a, &b);  // Lee dos valores de punto flotante como los catetos.

    perim = suma(hipotenusa(a, b), a, b);  // Calcula el perímetro llamando a las funciones y suma los resultados.

    printf("\n El perímetro del triángulo es %0.2f", perim);  // Muestra el resultado del cálculo del perímetro.

    return 0;  // Devuelve 0 para indicar que el programa terminó con éxito.
}

