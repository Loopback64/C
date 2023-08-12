/*

Una compañía de refrescos comercializa tres productos: de cola,
de naranja y de limón. Se desea realizar un programa que calcule
las ventas realizadas de cada producto. Para ello, se leerá la
cantidad vendida (máximo 5000000) y el precio en euros de cada
producto y se mostrará un informe de ventas como el que sigue:

Producto Ventas     Precio  Total
--------------------------------------------
Cola    1000000     0.17    170000.00
Naranja 350000      0.20    70000.00
Limon   530000      0.19    100700.00
TOTAL                       340700.00

Para resolver este problema es necesario leer las ventas y el precio de cada uno
de los productos y multiplicar los valores leídos para obtener el total. La salida
debe mostrarse tabulada, utilizando especificaciones de formato más elaboradas
en las instrucciones printf.

*/

#include <stdio.h>
/* Programa que muestra el total de ventas de varios productos de una empresa de refrescos */
int main() {
    long int ventas_cola, ventas_naranja, ventas_limon;
    float precio_cola, precio_naranja, precio_limon;
    float total_cola, total_naranja, total_limon;

    /* Lectura de datos: ventas y precio de cada producto */
    printf("Datos de la cola:\n");
    printf("\tVentas:");
    scanf("%ld", &ventas_cola);
    printf("\tPrecio: ");
    scanf("%f", &precio_cola);

    printf("Datos de la naranja:\n");
    printf("\tVentas:");
    scanf("%ld", &ventas_naranja);
    printf("\tPrecio: ");
    scanf("%f", &precio_naranja);

    printf("Datos del limon:\n");
    printf("\tVentas:");
    scanf("%ld", &ventas_limon);
    printf("\tPrecio: ");
    scanf("%f", &precio_limon);

    /* Proceso */
    total_cola = ventas_cola * precio_cola;
    total_naranja = ventas_naranja * precio_naranja;
    total_limon = ventas_limon * precio_limon;

    /* Salida tabulada */
    printf("Producto\tVentas\t\tPrecio\t\tTotal\n");
    printf("----------------------------------------------\n");
    printf("Cola\t\t%7ld\t%4.2f\t\t%9.2f\n", ventas_cola, precio_cola, total_cola);
    printf("Naranja\t\t%7ld\t%4.2f\t\t%9.2f\n", ventas_naranja, precio_naranja, total_naranja);
    printf("Limon\t\t%7ld\t%4.2f\t\t%9.2f\n", ventas_limon, precio_limon, total_limon);
    printf("TOTAL\t\t%24.2f\n", total_cola + total_naranja + total_limon);

    return 0;
}







