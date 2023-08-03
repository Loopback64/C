// Este problema consiste básicamente en la evaluación de expresiones aritméticas

/* Este problema consiste básicamente en la evaluación de expresiones aritméticas,
relacionales y lógicas. Para resolver este problema, se debe seguir paso a paso
cada una de las instrucciones que componen el programa:   */

#include <stdio.h>

#define DATO 4

int main() {
    int x, y = 1;
    float z;

    x = 3 / 2 + 10 - 3;
    z = 3.0 / 2.0 + 10 - 3;

    printf("%d -- %f\n", x, z);

    printf("%d\n", DATO * 3 + 1 / 2);

    printf("%d\n", 5 + 2 - 1 > 5);
    printf("%d\n", 3 > 1 || DATO * 2 < 1);
    printf("%d\n", 5 != 1 && DATO > 2);

    y = x;

    printf("%d\n", x + y <= (int)z); // Agregado el casting de z a int

    return 0;  // Agregada la sentencia return 0 al final de main
}








