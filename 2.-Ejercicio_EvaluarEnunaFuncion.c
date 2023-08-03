/*
Este programa muestra el resultado de la ecuación a = b 2 + 1 para
distintos valores de b (0, 2 y –2). ¿Es correcto?. Si no lo es,
escribir el programa correctamente


*/







#include <stdio.h>
int main()
{
int a, b=0;
a=b*b+1;
printf ("Si b=%d, entonces a=%d\n", b, a);
b=2;
a=b*b+1;
printf ("Si b=%d, entonces a=%d\n", b, a);
b=-2;
a=b*b+1;
printf ("Si b=%d, entonces a=%d\n", b, a);
}
