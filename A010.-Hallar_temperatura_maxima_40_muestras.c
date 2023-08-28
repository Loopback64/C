
/*

hallar la temperatura máxima registrada en una laguna sabiendo que se toman 40 muestras.



*/


#include <stdio.h>

int main() {
    int i, T, Tmax;  // Declaración de variables: i para el contador, T para la temperatura actual, Tmax para la temperatura máxima
    Tmax = -10000;   // Inicialización de Tmax con un valor muy bajo como punto de partida
    
    for (i = 1; i <= 40; i++) {  // Ciclo que se ejecuta 40 veces (i toma valores de 1 a 40)
        printf("Ingresar la temperatura: ");  // Impresión de un mensaje solicitando ingresar la temperatura
        scanf("%i", &T);  // Lectura de la temperatura ingresada por el usuario y almacenamiento en T
         
        if (T > Tmax) {  // Si la temperatura actual (T) es mayor que Tmax
            Tmax = T;  // Actualizar Tmax con el valor de la temperatura actual (T)
        }
    }
    
    printf("La mayor temperatura registrada es %i", Tmax);  // Impresión de la temperatura máxima encontrada
    
    return 0;  // Indicación de que el programa finalizó sin errores
}


















