
#include <stdio.h>
#include <stdlib.h>  // Incluir la biblioteca estándar para rand()
#include <time.h>    // Incluir la biblioteca de tiempo para srand()

#define N 3
#define M 4

char vocales[] = {'A', 'E', 'I', 'O', 'U'};  // Definir un vector de vocales

void crearmatriz(char ma[N][M])
{
    int i, j, r;
    for (i = 0; i < N; i++)  // Bucle para filas
    {
        for (j = 0; j < M; j++)  // Bucle para columnas
        {
            r = rand() % 5;  // Generar un número aleatorio entre 0 y 4
            ma[i][j] = vocales[r];  // Asignar una vocal aleatoria a la matriz
        }
    }
}

void mostrarmatriz(char ma[N][M])
{
    int i, j;
    for (i = 0; i < N; i++)  // Bucle para filas
    {
        for (j = 0; j < M; j++)  // Bucle para columnas
        {
            printf("%2c", ma[i][j]);  // Imprimir un carácter de la matriz con un ancho de campo de 2
        }
        printf("\n");  // Imprimir una nueva línea al final de cada fila
    }
}

int cantidadvocales(char ma[N][M], char v)
{
    int i, j, c = 0;
    for (i = 0; i < N; i++)  // Bucle para filas
    {
        for (j = 0; j < M; j++)  // Bucle para columnas
        {
            if (ma[i][j] == v)  // Comprobar si el carácter actual es igual a la vocal deseada
            {
                c++;  // Incrementar el contador si se encuentra la vocal
            }
        }
    }
    return c;  // Devolver la cantidad de ocurrencias de la vocal en la matriz
}

int main()
{
    char m1[N][M], vocal;
    srand(time(NULL));  // Inicializar la semilla del generador de números aleatorios con el tiempo actual
    crearmatriz(m1);  // Llenar la matriz con vocales aleatorias
    printf("\nLa matriz generada es:\n");
    mostrarmatriz(m1);  // Mostrar la matriz generada
    printf("\nIngrese la vocal: ");
    scanf(" %c", &vocal);  // Leer la vocal ingresada por el usuario, agregando un espacio para evitar problemas de búfer
    int cantidad = cantidadvocales(m1, vocal);  // Calcular la cantidad de ocurrencias de la vocal en la matriz
    printf("La cantidad de vocales %c es %i\n", vocal, cantidad);  // Mostrar la cantidad de ocurrencias
    return 0;
}





