#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>

// Definir la longitud de la señal
#define N 8

// Función para calcular la Transformada de Fourier discreta (DFT)
void calcularDFT(double complex *input, double complex *output) {
    for (int k = 0; k < N; ++k) {
            output[k] = 0.0;

                    for (int n = 0; n < N; ++n) {
                                // Calcular el término exponencial para la DFT
                                            double complex wn = cexp(-2.0 * I * M_PI * k * n / N);

                                                        // Sumar contribuciones a la DFT
                                                                    output[k] += input[n] * wn;
                                                                            }
                                                                                }
                                                                                }

                                                                                int main() {
                                                                                    // Definir la señal de entrada (en este caso, una función lineal)
                                                                                        double complex signal[N];
                                                                                            for (int i = 0; i < N; ++i) {
                                                                                                    signal[i] = i;
                                                                                                        }

                                                                                                            // Calcular la Transformada de Fourier discreta (DFT)
                                                                                                                double complex result[N];
                                                                                                                    calcularDFT(signal, result);

                                                                                                                        // Mostrar los resultados
                                                                                                                            printf("Señal de entrada:\n");
                                                                                                                                for (int i = 0; i < N; ++i) {
                                                                                                                                        printf("%.2f + %.2fi\n", creal(signal[i]), cimag(signal[i]));
                                                                                                                                            }

                                                                                                                                                printf("\nTransformada de Fourier discreta (DFT):\n");
                                                                                                                                                    for (int i = 0; i < N; ++i) {
                                                                                                                                                            printf("%.2f + %.2fi\n", creal(result[i]), cimag(result[i]));
                                                                                                                                                                }

                                                                                                                                                                    return 0;
                                                                                                                                                                    }

