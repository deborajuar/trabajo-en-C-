#include <stdio.h>


int suma (int, int); /*prototipo o declaraciòn*/
int main ()
    {
        int nro1, nro2, res;
        printf("ingrese nro1: ");
        scanf("%d",&nro1);
        printf("ingrese nro2: ");
        scanf("%d",&nro2);
        res=suma(nro1, nro2);
        printf("resultado: %d",res);
        return 0;
    }

    int suma(int op1, int op2)
    {
        int resultado;
        resultado=op1+op2;
        return resultado;
    }
