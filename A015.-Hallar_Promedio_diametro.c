/*
En un bosque se necesita saber el promedio de diámetro de cada tronco de ciprés y el promedio de su altura. El proceso termina
cuando el usuario responde con una ‘N’, mientras tanto, debe responder con ‘S’.

*/


#include <stdio.h>  // Incluimos la biblioteca estándar de entrada/salida.

int main() {
    int C = 0;      // Contador para el número de cipreses.
    float SA = 0, SD = 0, A, D, PA, PD;  // Variables para la suma de alturas y diámetros, así como los promedios.
    char opcion;

    do {
        printf("Ingresar altura: ");  // Solicitamos al usuario ingresar la altura.
        scanf("%f", &A);  // Leemos la altura y la almacenamos en la variable A.
        printf("Ingresar diámetro: ");  // Solicitamos al usuario ingresar el diámetro.
        scanf("%f", &D);  // Leemos el diámetro y lo almacenamos en la variable D.

        SA += A;  // Acumulamos la suma de alturas.
        SD += D;  // Acumulamos la suma de diámetros.
        C++;  // Incrementamos el contador de cipreses.

        printf("¿Desea seguir ingresando datos? (S/N): ");
        scanf(" %c", &opcion); // Leemos la opción del usuario y evitamos problemas con el buffer.

    } while (opcion == 'S' || opcion == 's'); // Continuamos mientras el usuario ingrese 'S' o 's'.

    PA = SA / C;  // Calculamos el promedio de alturas.
    PD = SD / C;  // Calculamos el promedio de diámetros.

    printf("El promedio de altura de los cipreses es %6.2f\n", PA);  // Mostramos el promedio de alturas.
    printf("El promedio de diámetro de los cipreses es %6.2f\n", PD);  // Mostramos el promedio de diámetros.

    return 0;  // Indicamos una salida exitosa del programa.
}



