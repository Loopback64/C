#include <stdio.h>
#define N 200

int main() {
    int legajo[N], edad[N], i;  
    char carrera[N];  // Declaración de la variable "carrera"

    for (i = 0; i < N; i++) {  
        printf("\nIngrese el número de legajo: ");
        scanf("%d", &legajo[i]);  

        printf("Ingrese la edad: ");
        scanf("%d", &edad[i]);  

        printf("Ingrese la carrera: ");
        scanf(" %c", &carrera[i]);  

    }

    printf("\nLa lista de los datos de los alumnos es la siguiente:\n");

    for (i = 0; i < N; i++) {  
        printf("El legajo %d, la edad %d y la carrera %c\n",
               legajo[i], edad[i], carrera[i]);  

    }

    return 0;  
}

