//  Escribir un programa que, dados los lados de un triángulo a, b y c,
//  indique si es equilátero (tres lados iguales), isósceles (sólo dos
//  lados iguales) o escaleno (tres lados distintos) y que calcule su
//  área mediante la fórmula de Herón:


/*
A 2 = p( p − a)( p − b)( p − c), donde p= a+b+c
                                            2

*/


#include <stdio.h>
#include <math.h>

/* Programa que determina, dados los tres lados, si un triangulo es equilatero, isosceles o escaleno y calcula el area */

int main() {
    float lado_a, lado_b, lado_c, p, area, area_cuadrado;

    /* Lectura de datos */
    printf("Introduce los lados de un triangulo: ");
    scanf("%f %f %f", &lado_a, &lado_b, &lado_c);

    /* Comprobar cómo es el triangulo */
    if (lado_a == lado_b && lado_a == lado_c)
        printf("El triangulo es equilatero\n");
    else if (lado_a == lado_b || lado_a == lado_c || lado_b == lado_c)
        printf("El triangulo es isosceles\n");
    else
        printf("El triangulo es escaleno\n");

    /* Calcular el area */
    p = (lado_a + lado_b + lado_c) / 2.0;
    area_cuadrado = p * (p - lado_a) * (p - lado_b) * (p - lado_c);
    area = sqrt(area_cuadrado);

    printf("El area del triangulo es %f\n", area);

    return 0; // Indica que el programa finalizó sin errores
}



