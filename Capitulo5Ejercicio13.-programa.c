#include <stdio.h>
#define N 30

int main() {
    struct miestructura {
        int legajo, edad;
        float sueldo;
        char categoria;
    };

    struct miestructura empleado[N];
    int i;

    for (i = 0; i < N; i++) {
        printf("\nIngresar nº de legajo: ");
        scanf("%i", &empleado[i].legajo);
        
        printf("Ingresar edad: ");
        scanf("%i", &empleado[i].edad);
        
        printf("Ingresar sueldo: ");
        scanf("%f", &empleado[i].sueldo);
        
        while (getchar() != '\n');
        
        printf("Ingresar categoría: ");
        scanf(" %c", &empleado[i].categoria);
    }

    printf("\nDatos de los empleados\n");
    for (i = 0; i < N; i++) {
        printf("\nLegajo %i y edad %i Categoría %c y sueldo %0.2f\n",
            empleado[i].legajo, empleado[i].edad, empleado[i].categoria, empleado[i].sueldo);
    }

    return 0;
}


