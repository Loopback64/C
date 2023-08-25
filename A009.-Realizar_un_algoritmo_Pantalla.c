/*




Realizar un algoritmo que
produzca por pantalla lo siguiente:
1→100110120130140150
2→100110120130140150
3→100110120130140150
4→100110120130140150
5→100110120130140150
6→100110120130140150
7→100110120130140150
8→100110120130140150
9→100110120130140150
10→100110120130140150








*/



#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 10; i++) {
        printf("%d ---->", i); // Imprime el valor actual de 'i' seguido de " ---->".

        for (j = 100; j <= 150; j += 10) {
            printf("%d ", j); // Imprime el valor actual de 'j' en el rango de 100 a 150 con incrementos de 10.
        }
        
        printf("\n"); // Imprime un salto de línea para separar cada línea de números.
    }

    return 0;
}


