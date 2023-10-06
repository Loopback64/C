#include <stdio.h>

// Función para sumar dos números enteros
int suma(int x, int y)
{
    int s;
    s = x + y;
    return s;
}

// Función para calcular el producto de dos números enteros
int producto(int x, int y)
{
    return x * y;
}

int main()
{
    int a, b, sum, p;

    // Solicitar al usuario que ingrese dos números
    printf("\nIngrese los dos números: ");
    
    // Leer los dos números ingresados por el usuario
    scanf("%d %d", &a, &b);
    
    // Llamar a la función suma y almacenar el resultado en la variable 'sum'
    sum = suma(a, b);
    
    // Llamar a la función producto y almacenar el resultado en la variable 'p'
    p = producto(a, b);
    
    // Mostrar el resultado de la suma y el producto en la pantalla
    printf("\nLa suma es %d y el producto es %d", sum, p);

    return 0;
}

