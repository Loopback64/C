
#include<stdio.h>
int main()

{

    double num = 123.456789;


    //Imprime el numero decimal con dos numeros decimales

    printf("Formato decimal : %.2f\n",num);


    //Imprime el numero en notacion cientifica

    printf("Notacion científica : %e\n",num);

    //Imprime el numero con notacion decimal o notacion cintifica segun sea mas corto

    printf("Mejor formato: %g\n", num);

    //Imprime el numero en notacion hexadecimal de punto flotante 

    printf("Notacion hexadecimal: %a\n",num);

    return 0;


}



