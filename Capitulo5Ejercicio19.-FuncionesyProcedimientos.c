#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

void CargarVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 21 - 10; // Números aleatorios entre -10 y 10
    }
}

void MostrarVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void ArmarMatriz(int v1[], int v2[], int v3[], int m[3][N]) {
    for (int i = 0; i < N; i++) {
        m[0][i] = v1[i];
        m[1][i] = v2[i];
        m[2][i] = v3[i];
    }
}

void MostrarMatriz(int m[3][N]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

float PromedioMatriz(int m[3][N]) {
    float suma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < N; j++) {
            suma += m[i][j];
        }
    }
    return suma / (3 * N);
}

int main() {
    int v1[N], v2[N], v3[N], m[3][N];
    srand(time(NULL));

    CargarVector(v1, N);
    printf("Vector 1: ");
    MostrarVector(v1, N);

    CargarVector(v2, N);
    printf("Vector 2: ");
    MostrarVector(v2, N);

    CargarVector(v3, N);
    printf("Vector 3: ");
    MostrarVector(v3, N);

    ArmarMatriz(v1, v2, v3, m);
    printf("Matriz:\n");
    MostrarMatriz(m);

    printf("El Promedio es %0.2f\n", PromedioMatriz(m));

    return 0;
}

