#include <stdio.h>
#include <stdlib.h> // Incluye la biblioteca stdlib.h para usar srand y rand.
#include <time.h>   // Incluye la biblioteca time.h para usar time.

#define N 100

// Prototipo de funciones.
float promedio(int v[], int c);
void mostrar(int v[], int n);

int main()
{
    int i, vec[N], c; // Declaración de variables i, vec (vector) y c (cantidad).
    
    // Inicializa el generador de números aleatorios con la hora actual.
    srand(time(NULL));

    for (i = 0; i < N; i++)
        vec[i] = rand() % 11; // Genera números aleatorios entre 0 y 10 y los almacena en el vector vec.

    printf("El vector:\n"); // Imprime un mensaje.
    mostrar(vec, N); // Llama a la función mostrar para imprimir el contenido del vector.

    printf("\nIngrese la cantidad de elementos para el promedio del vector: ");
    scanf("%d", &c); // Lee un valor ingresado por el usuario y lo almacena en la variable c.

    // Verifica que 'c' esté dentro del rango válido (0 <= c <= N).
    if (c < 0)
        c = 0; // Si c es negativo, se establece como 0.
    else if (c > N)
        c = N; // Si c es mayor que N, se establece como N.

    printf("El promedio de los primeros %d elementos es: %.2f\n", c, promedio(vec, c)); // Calcula y muestra el promedio de los primeros 'c' elementos.

    return 0;
}

float promedio(int v[], int c)
{
    int i, s = 0; // Declaración de variables locales i (iterador) y s (suma).

    for (i = 0; i < c; i++)
        s += v[i]; // Suma los elementos del vector hasta la posición 'c'.

    if (c == 0)
        return 0.0; // Evita la división por cero al calcular el promedio.

    return (float)s / c; // Calcula el promedio como la suma de los elementos dividida por 'c'.
}

void mostrar(int v[], int n)
{
    int i; // Declaración de variable local i (iterador).

    for (i = 0; i < n; i++)
        printf("%3d ", v[i]); // Imprime los elementos del vector con un formato de 3 dígitos.

    printf("\n"); // Imprime una nueva línea al final.
}

