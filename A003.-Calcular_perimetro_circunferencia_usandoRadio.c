#include <stdio.h>

#define PI 3.1416

int main() {
    float r, P;
    
    printf("Ingrese el radio: ");
    scanf("%f", &r);
    
    P = 2 * PI * r;
    
    printf("El perímetro de la circunferencia es %6.2f", P);
    
    return 0;
}

