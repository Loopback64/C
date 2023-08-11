 // Escribir un programa que lea un carácter en minúsculas e imprima
//en pantalla el mismo carácter en mayúsculas.
/* Análisis
Al igual que en el problema anterior, se debe determinar en primer lugar, cuáles
son los datos de entrada que recibirá el programa y cuáles los datos de salida que
deberá producir. En este caso, hay un único dato de entrada, un carácter en
minúscula, que el proceso en cuestión debe transformar en la mayúscula corres-
pondiente, que es el dato de salida. Así:
1. datos de entrada: carácter en minúscula
2. datos de salida: el mismo carácter en mayúscula
3. proceso: transformar el carácter en minúscula al correspondiente carácter
en mayúscula.
Por tanto, el programa deberá:
1. Leer un carácter en minúscula que se almacenará en la variable
minuscula.
2. Transformar este carácter en minúscula al correspondiente carácter en
mayúscula, que se almacenará en la variable mayuscula.
3. Escribir en pantalla el carácter en mayúscula obtenido, es decir, el conte-
nido de la variable mayuscula.
En este punto, es necesario determinar el tipo de las variables de entrada y de
salida. En este caso, ya que almacenarán caracteres, tanto mayuscula como
minuscula deben ser declaradas de tipo char, que es el único que ofrece el
lenguaje C para almacenar este tipo de datos.
Por último, se debe precisar cuál será el proceso que permitirá transformar un
carácter en minúsculas al correspondiente en mayúsculas. Para ello, se utiliza el
código ASCII del carácter en minúscula. Cada uno de los caracteres que es
posible representar en el ordenador ('1', '2', 'a', 'b', 'A', 'B', '?', etc.) tiene asociado
un código que lo identifica, llamado código ASCII. Así, el carácter '1' tiene el
código 49, '2' tiene el código 50, 'a' tiene el código 97, 'b' el 98, 'A' el 65, 'B' el 66,
'?' el 63, etc. Estos códigos se han establecido mediante un estándar internacional
y todos los ordenadores utilizan el mismo código para identificar al mismo carác-
ter. Es posible conocer el código ASCII de un carácter con el siguiente programa,
sustituyendo 'a' por el carácter en cuestión   */

#include <stdio.h>
#include <ctype.h> // Se incluye la biblioteca ctype.h para usar la función toupper

int main()
{
    char minuscula, mayuscula;

    printf("Introduce un caracter en minuscula: ");
    scanf("%c", &minuscula);

    // Se utiliza la función toupper para convertir a mayúscula
    mayuscula = toupper(minuscula);

    printf("El caracter %c en mayuscula es %c\n", minuscula, mayuscula);

    return 0;
}








