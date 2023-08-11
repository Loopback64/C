// Escribir un programa que lea los valores de los catetos de un
//triángulo rectángulo y calcule cuál es la hipotenusa, el área y el
//perímetro del triángulo



#include <stdio.h>
#include <math.h>

int main()
{
    // Declaración de variables
    float cateto1, cateto2, hipotenusa, area, perimetro;

    // Lectura de los valores de los catetos
    printf("Cateto1? ");
    scanf("%f", &cateto1);
    printf("Cateto2? ");
    scanf("%f", &cateto2);

    // Cálculo de la hipotenusa utilizando el teorema de Pitágoras
    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    // Cálculo del área del triángulo rectángulo
    area = (cateto1 * cateto2) / 2.0;

    // Cálculo del perímetro del triángulo rectángulo
    perimetro = cateto1 + cateto2 + hipotenusa;

    // Salida de los resultados calculados
    printf("La hipotenusa es: %f\n", hipotenusa);
    printf("El area es: %f\n", area);
    printf("El perimetro es: %f\n", perimetro);

    return 0; // Indica que el programa se ejecutó exitosamente
}


