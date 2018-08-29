#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
    float op1=0, op2=0;
    do
    {
        system("cls");
        printf("menu");
        printf("\n\n 1.Ingresar primer operando(A=%.0f)",op1);
        printf("\n 2.Ingresar segundo operando(b=%.0f)",op2);
        printf("\n 3.calcular todas las operaciones)");
        printf("\n 4.mostrar todos los resultados)");
        printf("\n\nseleccionar opcion");
        scanf("%d", &opcion);

       switch(opcion)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:

        }
    }
    while(opcion!=5);
    return 0;



}
void menu()
{
    printf();
    printf();
    printf();
    printf();
    printf("seleccione: ");
    scanf("%d", &opcion);
    return opcion;

}
