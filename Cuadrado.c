#include <stdio.h>

int main() {
    int lado, i, j;

    printf("Ingrese el tamaño del lado del cuadrado: ");
    scanf("%d", &lado);

    for (i = 0; i < lado; i++) {
        for (j = 0; j < lado; j++) {
            if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
