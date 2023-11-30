#include <stdio.h>
#include <math.h>

int main() {
    // Parámetros del circuito
    double V0 = 5.0; // Voltaje inicial
    double R = 1000.0; // Resistencia en ohmios
    double C = 1e-6; // Capacitancia en faradios
    double t = 1.0; // Tiempo en segundos

    // Calcular el voltaje después del tiempo t
    double V_t = V0 * exp(-t / (R * C));

    // Imprimir el resultado
    printf("Voltaje después de %f segundos: %f V\n", t, V_t);

    return 0;
}

