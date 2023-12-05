#include <stdio.h>
#include <math.h>

int main() {
    char operacion;
    double num1, num2, resultado;

    printf("Ingrese la operación (+, -, *, /, s para seno, c para coseno): ");
    scanf(" %c", &operacion);

    if (operacion == 's' || operacion == 'c') {
        printf("Ingrese el ángulo en radianes: ");
        scanf("%lf", &num1);
    } else {
        printf("Ingrese el primer número: ");
        scanf("%lf", &num1);

        printf("Ingrese el segundo número: ");
        scanf("%lf", &num2);
    }

    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            } else {
                printf("Error: división por cero\n");
            }
            break;
        case 's':
            resultado = sin(num1);
            printf("Resultado del seno: %.2lf\n", resultado);
            break;
        case 'c':
            resultado = cos(num1);
            printf("Resultado del coseno: %.2lf\n", resultado);
            break;
        default:
            printf("Operación no válida\n");
            break;
    }

    return 0;
}

