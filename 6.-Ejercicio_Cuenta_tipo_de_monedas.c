/*
La empresa que fabrica un modelo de máquinas expendedoras de
refrescos necesita un programa para estas máquinas que realice
el cálculo de cuántas monedas de cada tipo debe devolver. Para
ello, en primer lugar, se introducirá por teclado la cantidad a
devolver en euros (múltiplo de 5 céntimos, que es la moneda más
pequeña de la que se dispone), es decir, se tecleará 1.85 para 1
euro con 85 céntimos. Este programa escribirá en pantalla cuán-
tas monedas de cada tipo hay que devolver teniendo en cuenta
que:
• Se dispone de monedas de 50 céntimos, 20 céntimos, 10 cénti-
mos y 5 céntimos.
• Siempre se dispone de las monedas necesarias de cada tipo.
• Se debe devolver el menor número de monedas posible, es
decir, intentar devolver con las de mayor valor.
Ejemplos:
• Si se introduce la cantidad de 1 euro con 85 céntimos, el programa
debe imprimir: 3 monedas de 50 céntimos, 1 moneda de 20 cénti-
mos, 1 moneda de 10 céntimos, 1 moneda de 5 céntimos.
• Si se introduce la cantidad de 1 euro con 20 céntimos, el pro-
grama debe imprimir: 2 monedas de 50 céntimos, 1 moneda de
20 céntimos, 0 monedas de 10 céntimos, 0 monedas de 5 cén-
timos.

Análisis
Este problema consiste en determinar cuántas monedas de cada tipo se necesitan
para formar la cantidad que debe devolver la máquina expendedora, teniendo en
cuenta que se debe utilizar el menor número posible de monedas de cada tipo.
Esto supone que, hay un único dato de entrada (la cantidad a devolver), mientras
que se tienen varios datos de salida (el número de monedas de cada tipo). Así:
• datos de entrada: cantidad a devolver
• datos de salida: cuántas monedas de 50 céntimos, cuántas de 20 céntimos,
cuántas de 10 céntimos y cuántas de 5 céntimos se necesitan
• proceso: determinar cuántas monedas de cada tipo hacen falta para formar
la cantidad a devolver.
Una vez determinados los datos de entrada y de salida, habrá que pensar cómo
es posible calcular el número de monedas de cada tipo que hacen falta. Un dato
muy importante es el hecho de que se desea utilizar el menor número de monedas
posible, lo que indica que se debe comenzar a emplear las monedas de mayor
valor. Así, supongamos que la cantidad a devolver es 1.85 euros. Si se divide esta
cantidad por 0.5 euros (que es el valor de la moneda de 50 céntimos) se obtiene
3.7, lo que significa que se necesitan 3 monedas de 50 céntimos y todavía queda
cantidad por devolver. Es decir, ya se ha devuelto 1.50 euros con 3 monedas de
50 céntimos y quedan 0.35 euros (1.85 – 3*0.50) por devolver. Ahora si se divide
0.35 euros entre 0.2 euros (la moneda de 20 céntimos), se obtiene 1.75, por lo que
se utiliza una moneda de 20 céntimos y todavía quedan 0.15 euros (0.35 – 1*0.20)
por devolver. Si se divide 0.15 euros entre 0.1 euros (la moneda de 10 céntimos),
el resultado es 1.5, lo que significa que se utiliza una moneda de 10 céntimos y
quedan 0.05 euros por devolver, que al dividirlo por 0.05 euros (la moneda de 5
céntimos), se obtiene 1, es decir, una moneda de 5 céntimos y ya no queda nada
por devolver.
Este proceso puede resumirse de la siguiente forma:
• dividir la cantidad a devolver por 0.5 para obtener el número de monedas de
50 céntimos a utilizar
• calcular lo que queda por devolver restando la cantidad a devolver menos el
número de monedas de 50 céntimos utilizadas por 0.5 (que es su valor en
euros)
• dividir la cantidad que queda por devolver por 0.2 para obtener el número de
monedas de 20 céntimos a utilizar
• calcular lo que queda por devolver restando lo que quedaba por devolver
menos el número de monedas de 20 céntimos utilizadas por 0.2 (que es su
valor en euros)
• dividir la cantidad que queda por devolver por 0.1 para obtener el número de
monedas de 10 céntimos a utilizar

• calcular lo que queda por devolver restando lo que quedaba por devolver
menos el número de monedas de 10 céntimos utilizadas por 0.1 (que es su
valor en euros)
• dividir la cantidad que queda por devolver por 0.05 para obtener el número
de monedas de 5 céntimos a utilizar.
Por tanto, el programa deberá:
1. Leer la cantidad a devolver en euros y almacenarlo en la variable
euros_a_devolver. Copiar el contenido de euros_a_devolver en la
variable falta_por_devolver, ya que todavía queda todo por devolver.
2. Dividir la variable falta_por_devolver entre 0.5 y almacenar la parte
entera de la división en la variable monedas_50c.
3. Obtener la cantidad que queda por devolver restando la variable
falta_por_devolver menos la variable monedas_50c por 0.5.
Almacenar el resultado en la variable falta_por_devolver.
4. Dividir la variable falta_por_devolver entre 0.2 y almacenar la parte
entera de la división en la variable monedas_20c.
5. Obtener la cantidad que queda por devolver restando la variable
falta_por_devolver menos la variable monedas_20c por 0.2.
Almacenar el resultado en la variable falta_por_devolver.
6. Dividir la variable falta_por_devolver entre 0.1 y almacenar la parte
entera de la división en la variable monedas_10c.
7. Obtener la cantidad que queda por devolver restando la variable
falta_por_devolver menos la variable monedas_10c por 0.1.
Almacenar el resultado en la variable falta_por_devolver.
8. Dividir la variable falta_por_devolver entre 0.05 y almacenar la parte
entera de la división en la variable monedas_5c.
9. Escribir en pantalla el contenido de las variables monedas_50c,
monedas_20c, monedas_10c y monedas_5c.
Es el momento de determinar el tipo de las variables anteriores:
• euros_a_devolver y falta_por_devolver contendrán la cantidad en
euros que queda por devolver inicialmente y después de cada cálculo, que
son datos de tipo real y por ello se deben declarar de tipo float.
• las variables monedas_50c,
monedas_20c,
monedas_10c
y
monedas_5c almacenan el número de monedas de cada tipo que se van a
utilizar, es decir, datos de tipo entero, por lo que se deben declarar de tipo
int (no superarán el rango máximo de este tipo).

*/



#include <stdio.h>

int main()
{
    float euros_a_devolver;
    int centavos_a_devolver, falta_por_devolver;
    int monedas_50c, monedas_20c, monedas_10c, monedas_5c;

    // Lectura de datos: euros_a_devolver
    printf("Euros a devolver: ");
    scanf("%f", &euros_a_devolver);

    // Convertir euros a centavos (enteros)
    centavos_a_devolver = (int)(euros_a_devolver * 100);

    // Proceso
    falta_por_devolver = centavos_a_devolver;
    monedas_50c = falta_por_devolver / 50;
    falta_por_devolver %= 50;
    monedas_20c = falta_por_devolver / 20;
    falta_por_devolver %= 20;
    monedas_10c = falta_por_devolver / 10;
    falta_por_devolver %= 10;
    monedas_5c = falta_por_devolver / 5;

    // Salida
    printf("La cantidad de %.2f euros se devolvera asi:\n", euros_a_devolver);
    printf("- %d monedas de 50 centavos\n", monedas_50c);
    printf("- %d monedas de 20 centavos\n", monedas_20c);
    printf("- %d monedas de 10 centavos\n", monedas_10c);
    printf("- %d monedas de 5 centavos\n", monedas_5c);

    return 0;
}

