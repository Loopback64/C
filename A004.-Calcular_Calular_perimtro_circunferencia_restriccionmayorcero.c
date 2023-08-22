// Mostrar el perímetro de una
// circunferencia, siempre y cuando el radio que se ingresa sea mayor a cero.


#include <stdio.h>
#define PI 3.1416

int main() {
    float r, Peri;
    
    // Solicitar al usuario que ingrese el radio de la circunferencia
    printf("Ingrese el radio: ");
    scanf("%f", &r);
    
    // Verificar si el radio ingresado es mayor que cero
    if (r > 0) {
        // Calcular el perímetro de la circunferencia usando la fórmula: Peri = 2 * radio * PI
        Peri = 2 * r * PI;
        
        // Mostrar el resultado del cálculo del perímetro de la circunferencia
        printf("El perímetro de la circunferencia es %6.2f", Peri);
    }
    
    // Indicar que el programa se ejecutó correctamente
    return 0;
}





