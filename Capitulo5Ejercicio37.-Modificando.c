

#include <stdio.h>

int main() {

// Declaración de variables

int n, i;  // 'n' representa el término hasta el cual calcular la suma, 'i' es un contador

unsigned long long primero = 0, segundo = 1, siguiente, suma = 0; 

// Variables para la secuencia de Fibonacci y la suma


// Solicitar al usuario el término hasta el cual calcular la suma

printf("Ingrese el término hasta el cual desea calcular la suma de Fibonacci: ");
scanf("%d", &n);



// Calcular la suma de Fibonacci hasta el término deseado

for (i = 0; i <= n; i++) {

    suma += primero;  // Agregar el término actual a la suma
    siguiente = primero + segundo;  // Calcular el siguiente término de Fibonacci
    primero = segundo;  // Actualizar el primer término con el segundo
    segundo = siguiente;  // Actualizar el segundo término con el siguiente
    
    }

    // Mostrar la suma de Fibonacci
    printf("La suma de los términos de Fibonacci hasta el término %d es: %llu\n", n, suma);


return 0;  // Indicar que el programa se ejecutó correctamente

}





