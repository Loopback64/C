



#include <stdio.h>
#include <stdlib.h>  // Se agrega esta librería para utilizar 'rand'
#include <time.h>    // Se agrega esta librería para inicializar 'srand'

#define N 30

void generar(int v[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        v[i] = rand() % 11;  // Genera un número aleatorio entre 0 y 10
    }
}

void mostrar(int v[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%i\t", v[i]);  // Muestra cada elemento del vector
    }
}

int main()
{
    int v1[N], v2[N];
    srand(time(NULL));  // Inicializa la semilla para generar números aleatorios

    generar(v1);       // Llena el primer vector con números aleatorios
    generar(v2);       // Llena el segundo vector con números aleatorios

    printf("\n El Vector 1\n");
    mostrar(v1);       // Muestra el primer vector

    printf("\n El Vector 2\n");
    mostrar(v2);       // Muestra el segundo vector

    return 0;
}

