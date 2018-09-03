
#include <stdio.h>
#include <stdlib.h>

int suma(int,int);
int resta(int, int);
int division(int, int);
int factorial(int);
int factorial(int);


main()
{
    int op1, op2, reSuma, resResta, resFact1, resFact2;
    float resultado;

    printf("ingrese operando 1: ");
    scanf("%d",&op1);
    printf("ingrese operando 2: ");
    scanf("%d",&op2);
    reSuma=suma(op1,op2);
    resResta=resta(op1,op2);
    resultado=division(op1,op2);
    resFact1=factorial(op1);
    resFact2=factorial(op2);
    printf("el resultado de la suma es: %d", reSuma);
    printf("\nEl resultado de la resta es: %d", resResta);
    printf("\nEl resultado de la division es: %2.f", resultado);
    printf("\nEl factorial de operando 1 es: %d", resFact1);
    printf("\nEl factorial de operando 1 es: %d", resFact2);


    return 0;




}
int suma(int op1, int op2)
{
    int reSuma;
    reSuma = op1+op2;
    return reSuma;

}
int resta(int op1, int op2)
{
    int resResta;
    resResta = op1-op2;
    return resResta;
}

int division (int op1, int op2)
{
    float resultado;
    if(op1!=0)
    {
        resultado = op1/op2;
    }
    else
    {
        printf("\nLa division no puede realizarse\n");

    }

    return resultado;
}
int factorial (int op1)
{
    int resFact1;
    if (op1 <=0)
    {
        return 1;
    }
  else
    {
      resFact1=op1* factorial(op1-1);
      return(resFact1);
    }


    int factorial (int op2)
    {
        int resFact2;
        if (op2 <=0)
        {
        return 1;
        }
    else
        {
            resFact2=op2* factorial(op2-1);
            return(resFact2);
        }

    }

}
