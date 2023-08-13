/*  Escribir un programa que muestra el resultado de la ecuación de tercer grado y = ax^3 + bx^2 + cx + d para un valor de x. Para ello, debe leer el valor de los coeficientes (a, b, c y d) y el valor de x , mostrar por pantalla el resultado de la evaluación de la ecuación resultante.


El programa que resuelve este problema debe, en primer lugar, leer cada uno de los coeficientes del polinomio y el valor de x. A continuación, debe calcular el valor final del polinomio escribiendo una expresión que lo represente. Por último, debe
mostrar el valor resultante. La implementación de este programa es la siguiente:


*/

#include <stdio.h>

/* Programa que muestra el valor de y = ax^3 + bx^2 + cx + d */
int main() {
    // Declaración de variables
    float a, b, c, d, x, y;
    
    // Mensajes para el usuario
    printf("Evaluacion del polinomio y = ax^3 + bx^2 + cx + d.\n");
    printf("Valor de los coeficientes a, b, c y d: ");
    
    // Lectura de coeficientes desde la entrada estándar
    scanf("%f %f %f %f", &a, &b, &c, &d);
    
    // Mensaje para el usuario
    printf("Introducir el valor de la variable x: ");
    
    // Lectura del valor de x desde la entrada estándar
    scanf("%f", &x);
    
    // Cálculo del polinomio
    y = a * x * x * x + b * x * x + c * x + d;
    
    // Salida de resultados
    printf("El resultado del polinomio %.2f x^3 + %.2f x^2 + %.2f x + %.2f para x = %.2f es: %.2f\n", a, b, c, d, x, y);
    
    return 0; // Indica que el programa finalizó sin errores
}














