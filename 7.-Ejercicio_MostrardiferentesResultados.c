/*    






*/



#include <stdio.h>

int main() {
    // Declaración de variables
    int x = 3, y; // Se declara 'x' e 'y' como enteros
    float z;     // Se declara 'z' como un número de punto flotante
    
    // Operaciones y salidas
    y = x + 3; // Se asigna a 'y' el valor de 'x' + 3
    printf("%d\n", y); // Se imprime el valor de 'y' como un entero
    
    y = 3 * x * x + 2 * x + 1; // Se asigna a 'y' el resultado de la expresión
    printf("%d\n", y); // Se imprime el nuevo valor de 'y'
    
    z = x * 0.3; // Se asigna a 'z' el resultado de 'x' multiplicado por 0.3
    printf("%f\n", z); // Se imprime el valor de 'z' como un número de punto flotante
    
    z = (float)y / x; // Se calcula y asigna a 'z' el cociente de 'y' entre 'x'
    printf("%f\n", z); // Se imprime el valor de 'z'
    
    return 0; // Se devuelve 0 para indicar que el programa terminó correctamente
}

