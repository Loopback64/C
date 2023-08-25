/*      
hallar el promedio de altura de los alumnos de una comisión
sabiendo que son 30.

*/



#include <stdio.h>

int main() {
    int A, i, S; // Declaración de variables enteras: A para altura, i para el contador del ciclo, S para la suma de alturas.
    float P; // Declaración de variable flotante P para el promedio de alturas.

    S = 0; // Inicialización de la variable S en 0, para almacenar la suma de alturas.

    for (i = 0; i < 30; i++) { // Inicio del ciclo que se ejecutará 30 veces.
        printf("Ingrese la altura: "); // Se muestra un mensaje pidiendo ingresar la altura.
        scanf("%d", &A); // Se lee la altura ingresada y se almacena en la variable A.
        S = A + S; // Se agrega la altura leída a la suma acumulada en S.
    }

    P = (float)S / 30; // Se calcula el promedio de alturas dividiendo la suma total (S) entre 30 (cantidad de alturas).

    printf("El promedio de altura es %6.2f", P); // Se muestra el promedio de alturas con un formato específico.

    return 0; // Se indica que el programa terminó correctamente.
}





