#include <stdio.h> // Incluye la librería estándar de entrada/salida.

void resta(int x, int y)
{
    int res; // Declaración de la variable res para almacenar el resultado.
    res = x - y; // Resta los valores de x e y y almacena el resultado en res.

    if (res == 0)
        printf("\n El resultado es nulo"); // Imprime un mensaje si res es igual a 0.
    else if (res > 0)
        printf("\n El resultado es positivo"); // Imprime un mensaje si res es mayor que 0.
    else
        printf("\n El resultado es negativo"); // Imprime un mensaje si res es menor que 0.
}

int main()
{
    int a, b; // Declaración de las variables a y b para almacenar los números ingresados.

    printf("\n Ingrese los dos números: "); // Solicita al usuario que ingrese dos números.
    scanf("%d %d", &a, &b); // Lee dos números enteros ingresados por el usuario y los almacena en a y b.

    resta(a, b); // Llama a la función resta pasando los valores de a y b como argumentos.

    return 0; // Retorna un valor entero 0 para indicar que el programa finalizó correctamente.
}




