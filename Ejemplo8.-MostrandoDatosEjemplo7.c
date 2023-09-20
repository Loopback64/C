/*
tomando en cuenta el ejemplo anterior, si quisiéramos mostrar solo los datos de un alumno ingresando el número de legajo.
*/



#include <stdio.h>
#define N 200

int main() {
    // Declaración de arreglos y variables
    int legajo[N], edad[N], i; // Arreglos para almacenar números de legajo y edades
    char carrera[N]; // Arreglo para almacenar carreras
    int numleg; // Variable para almacenar el número de legajo a buscar

    // Solicitamos al usuario ingresar datos de alumnos
    for (i = 0; i < N; i++) {
        printf("\nIngrese el número de legajo: ");
        scanf("%d", &legajo[i]); // Leemos y almacenamos el número de legajo

        printf("Ingrese la edad: ");
        scanf("%d", &edad[i]); // Leemos y almacenamos la edad

        // Cambiamos el formato de entrada para leer un solo carácter
        printf("Ingrese la carrera: ");
        scanf(" %c", &carrera[i]); // Leemos y almacenamos la carrera
    }

    // Mostramos la lista de datos de los alumnos ingresados
    printf("\nLa lista de los datos de los alumnos es la siguiente:\n");
    for (i = 0; i < N; i++) {
        // Imprimimos los datos de cada alumno
        printf("El legajo %d, la edad %d y la carrera %c\n", legajo[i], edad[i], carrera[i]);
    }

    // Solicitamos al usuario ingresar un número de legajo a buscar
    printf("\nIngrese el número de legajo a buscar: ");
    scanf("%d", &numleg); // Leemos el número de legajo a buscar

    // Buscamos y mostramos la información de un alumno específico por número de legajo
    for (i = 0; i < N; i++) {
        if (numleg == legajo[i]) { // Comparamos el número de legajo ingresado con los almacenados
            // Si encontramos una coincidencia, mostramos la edad y la carrera del alumno
            printf("La edad es %d y la carrera %c\n", edad[i], carrera[i]);
        }
    }

    return 0; // Devolvemos un valor entero al finalizar el programa
}





