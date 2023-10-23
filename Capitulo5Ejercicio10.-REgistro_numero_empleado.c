#include <stdio.h>

struct miestructura
{
    int legajo, edad;
    float sueldo;
    char categoria;
};

int main()
{
    struct miestructura empleado;

    printf("Ingresar número de legajo: ");
    scanf("%i", &empleado.legajo);

    printf("Ingresar edad: ");
    scanf("%i", &empleado.edad);

    printf("Ingresar sueldo: ");
    scanf("%f", &empleado.sueldo);

    while (getchar() != '\n'); // Limpia el búfer de entrada

    printf("Ingresar categoría: ");
    scanf(" %c", &empleado.categoria); // Agregado espacio antes de %c para evitar problemas con el búfer.

    printf("Datos del empleado:\n");
    printf("Legajo %i, Edad %i, Categoría %c y Sueldo %0.2f\n",
           empleado.legajo, empleado.edad, empleado.categoria, empleado.sueldo);

    return 0;
}

