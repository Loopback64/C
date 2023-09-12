/*

cómo agregar 20 números enteros por teclado a un arreglo de nombre «arreglo».

Explicación de los comentarios:

#include <stdio.h>: Incluye la biblioteca estándar de entrada/salida (stdio.h) necesaria para las funciones printf y scanf.

#define N 20: Define una constante N con un valor de 20, que se utiliza para determinar el tamaño del arreglo.

int arreglo[N], i;: Declara un arreglo llamado arreglo de tamaño N y una variable entera i que se utilizará como índice en el bucle.

for (i = 0; i < N; i++) {: Inicia un bucle for que se ejecutará 20 veces (una vez por cada elemento del arreglo).

printf("\nIngrese un número: ");: Muestra un mensaje para que el usuario ingrese un número. El \n al principio agrega una nueva línea para que la entrada del usuario esté en una línea separada.

scanf("%d", &arreglo[i]);: Lee un número entero ingresado por el usuario y lo almacena en el elemento correspondiente del arreglo.

return 0;: Retorna 0 para indicar que el programa se ejecutó correctamente.
*/


#include <stdio.h>
#define N 20

int main() {
    // Declaración de variables
    int arreglo[N], i;

    // Bucle para ingresar números en el arreglo
    for (i = 0; i < N; i++) {
        // Solicita al usuario que ingrese un número
        printf("\nIngrese un número: ");

        // Lee el número ingresado por el usuario y lo almacena en el arreglo
        scanf("%d", &arreglo[i]);
    }

    // Retorna 0 para indicar que el programa se ejecutó correctamente
    return 0;
}

