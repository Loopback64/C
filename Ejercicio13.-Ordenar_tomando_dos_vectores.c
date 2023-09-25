#include <stdio.h>
#define N 7

int main() {
    // Declarar los arreglos de enteros y punto flotante
    int VL[] = {69, 65, 99, 30, 39, 211, 91};
    float VS[] = {12000.00, 15550.50, 20480.80, 19000.75, 19000.75, 7600.00, 8000.95};
    int i, j, AUXL;
    float AUXS;

    // Algoritmo de ordenación de burbuja
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            // Compara y ordena los elementos de ambos arreglos
            if (VL[i] > VL[j]) {
                AUXL = VL[i];
                VL[i] = VL[j];
                VL[j] = AUXL;

                AUXS = VS[i];
                VS[i] = VS[j];
                VS[j] = AUXS;
            }
        }
    }

    // Imprimir la lista de empleados ordenada
    printf("Lista de empleados:\n");
    printf("LEGAJO   SUELDO\n");
    for (i = 0; i < N; i++) {
        printf("%4i  -->  %7.2f\n", VL[i], VS[i]);
    }

    return 0;
}

