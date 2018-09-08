#include <stdio.h>
#include <stdlib.h>
#include "./libreria.h"


int main (void)

{

    float numUno, numDos, sum, rest, mult, div,fact, fact2;
    int opc=0;
    do
    {
        system("cls");
        printf(".....MENU.....\n\n");
        printf("\n1.Ingrese el primer operando: ");
        printf("\n2.Ingrese segundo operando: ");
        printf("\n3.Realizar las operacionres");
        printf("\n4.Mostrar todas las operaciones");
        printf("\n5.SALIR\n\n");
        scanf("%d",&opc);
        switch(opc)
        {
          case 1:
            system("cls");
            printf("Ingrese el primer operando: ");
            scanf("%f",&numUno);
            break;
          case 2:
            system("cls");
            printf("Ingrese el segundo operando: ");
            scanf("%f",&numDos);
            break;
          case 3:
            system("cls");

            sum= suma(numUno,numDos);
            rest=resta(numUno,numDos);
            div=division(numUno,numDos);
            mult=multiplicacion(numUno,numDos);
            fact=factorial(numUno);
            fact2=factorial_2(numDos);

          case 4:
            system("cls");
            printf("\nEl resultado de la suma de %.2f + %.2f es: %.2f",numUno, numDos, sum);
            printf("\n\nEl resultado de la resta de %.2f - %.2f es: %.2f",numUno, numDos, rest);
            printf("\n\nEl resultado de la multiplicacion de %.2f * %.2f es: %.2f",numUno, numDos, mult);
            printf("\n\nEl resultado de la division de %.2f / %.2f es: %.2f",numUno, numDos, div);
            printf("\n\nEl factorial de %2.f es: %2.f",numUno, fact);
            printf("\n\nEl factorial de %2.f es: %2.f",numDos, fact2);
            getch();
        }
    }
  while(opc!=5);
}
float suma(float op1, float op2)
    {
        float reSuma;
        reSuma=op1+op2;
        return reSuma;
    }
 float resta(float op1, float op2)
{
    float resResta;
    resResta=op1-op2;
    return resResta;
}
 float division (float op1, float op2)
{
    float resDiv;
    if(op1==0)
    {
         printf("\n Dede ingresar un dividendo mayor que 0 para efectuar una division.");
     }
    resDiv=op1/op2;
    return resDiv;
}
 float multiplicacion(float op1, float op2)
{
    float resMulti;
    resMulti=op1*op2;
    return resMulti;
}
float factorial(float op1)
{
   float fact;
    if(op1==0)
    {
        return 1;
    }
    else
    {
         fact=op1*factorial(op1-1);
        return fact;
    }
}
  float factorial_2(float op2)
{
    float fact2;
    if(op2==0)
    {
        return 1;
    }
    else
    {
        fact2=op2*factorial(op2-1);
        return fact2;
    }


}
