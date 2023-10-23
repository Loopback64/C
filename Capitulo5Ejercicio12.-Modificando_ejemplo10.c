#include <stdio.h>

#define N 30

// Definición de la estructura miestructura que representa a un empleado
struct miestructura
{
    int legajo, edad;
    float sueldo;
    char categoria;
};

int main()
{
    struct miestructura empleado[N], aux; // Declaración de un arreglo de empleados y una variable auxiliar
    int i, j;

    // Capturar datos de N empleados
    for (i = 0; i < N; i++)
    {
        printf("Ingresar nº de legajo: ");
        scanf("%i", &empleado[i].legajo);

        printf("Ingresar edad: ");
        scanf("%i", &empleado[i].edad);

        printf("Ingresar sueldo: ");
        scanf("%f", &empleado[i].sueldo);

        while (getchar() != '\n'); // Limpiar el búfer del teclado

        printf("Ingresar categoría: ");
        scanf(" %c", &empleado[i].categoria);
    }

    // Ordenar empleados por legajo usando el método de burbuja
    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (empleado[i].legajo > empleado[j].legajo)
            {
                aux = empleado[i]; // Almacenar temporalmente empleado[i]
                empleado[i] = empleado[j]; // Intercambiar empleados
                empleado[j] = aux; // Restaurar empleado[i] desde aux
            }
        }
    }

    // Mostrar los datos de los empleados ordenados por legajo
    printf("\nDatos de los empleados ordenados por legajo:\n");
    for (i = 0; i < N; i++)
    {
        printf("Legajo %i, Edad %i, Categoría %c y Sueldo %0.2f\n",
               empleado[i].legajo, empleado[i].edad, empleado[i].categoria, empleado[i].sueldo);
    }

    return 0;
}

