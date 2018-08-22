#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro1,nro2,nro3,dato;
    printf("ingrese:");
    scanf("%d",&nro1);
    printf("/n ingrese:");
    scanf("%d",&nro2);
    printf("/n ingrese:");
    scanf("%d",&nro3);

    if (nro1>nro2||nro3)
    {
        dato=nro1;
        printf("el valor mayor es:%d", dato);
    }else if (nro2>nro3||nro1)
    {
        dato=nro2;
        printf("el valor mayor es:%d",dato);
    }else if(nro3>nro1||nro2)
    {
        dato=nro3;
        printf("el valor mayor es:%d",dato);
    }

    return 0;
}
