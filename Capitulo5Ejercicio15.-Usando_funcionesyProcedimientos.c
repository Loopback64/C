

#include <stdio.h>
#define N 30

// Definición de la estructura "miestructura" que representa la información de un empleado.
struct miestructura
{
    int legajo, edad;
    float sueldo;
    char categoria;
};

// Función para ingresar datos de empleados en el arreglo "emp".
void generar(struct miestructura emp[N])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("\nIngresar nº de legajo: ");
        scanf("%i", &emp[i].legajo);
        printf("Ingresar edad: ");
        scanf("%i", &emp[i].edad);
        printf("Ingresar sueldo: ");
        scanf("%f", &emp[i].sueldo);
        printf("Ingresar categoría: ");
        scanf(" %c", &emp[i].categoria);
    }
}

// Función para mostrar los datos de los empleados en el arreglo "emp".
void mostrar(struct miestructura emp[N])
{
    int i;
    printf("\nDatos de los empleados\n");
    for (i = 0; i < N; i++)
    {
        printf("Legajo %i y edad %i Categoría %c y sueldo %0.2f\n",
               emp[i].legajo, emp[i].edad, emp[i].categoria, emp[i].sueldo);
    }
}

// Función para ordenar los empleados en el arreglo "emp" por legajo.
void ordenar(struct miestructura emp[N])
{
    int i, j;
    struct miestructura aux;
    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (emp[i].legajo > emp[j].legajo)
            {
                aux = emp[i];
                emp[i] = emp[j];
                emp[j] = aux;
            }
        }
    }
}

int main()
{
    struct miestructura empleado[N];

    // Llama a la función "generar" para ingresar datos de empleados.
    generar(empleado);

    // Llama a la función "ordenar" para ordenar los empleados por legajo.
    ordenar(empleado);

    // Llama a la función "mostrar" para mostrar los datos de los empleados.
    mostrar(empleado);

    return 0;
}






















