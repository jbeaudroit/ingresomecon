#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numeroX;
    float numeroY;
    float suma;
    float resta;
    float division;
    float multiplicacion;
    long long factorializacion;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

printf("ingrese el numero de opción que desea realizar %d\n", opcion);
 scanf("%d",&opcion);
while (opcion<1 || opcion>9)
{
    printf("las opciones posibles van del 1 al 9, reingrese la opción que desea realizar: %d\n", opcion);
        scanf("%d",&opcion);
}

fflush(stdin);
        switch(opcion)
        {
            case 1:
                printf("ingrese el primer operando %f\n", numeroX);
               scanf("%d", &numeroX);
                break;
            case 2:
                printf("ingrese el segundo operando %f\n", numeroY);
                scanf("%d", &numeroY);
                break;
            case 3:
            suma=sumar(numeroX, numeroY);
            printf("La suma de ambos numeros da como resultado: %f\n", suma);
                break;
            case 4:
            resta=restar(numeroX, numeroY);
            printf("La resta de ambos numeros da como resultado: %f\n", resta);
                break;
            case 5:
                if (numeroY!=0)
                {
                  division=dividir(numeroX, numeroY);
                  printf("La division de ambos numeros da como resultado: %f\n", division);
                }
                else
                {
                   printf("La operacion de division no puede realizarse si se divide por 0");
                }
                break;
            case 6:
                multiplicacion=multiplicar(numeroX, numeroY);
                  printf("La multiplicacion de ambos numeros da como resultado: %f\n", multiplicacion);
                break;
            case 7:
                if (numeroX==0)
                {
                factorializacion=1;
                }
                else
                {
                factorializacion=factorial(numeroX);
                }
                printf("el factorial es %d", factorializacion);
                break;
            case 8:
                printf("La suma de ambos numeros da como resultado: %f\n", suma);
                printf("La resta de ambos numeros da como resultado: %f\n", resta);
                if (numeroY!=0)
                {
                printf("La division de ambos numeros da como resultado: %f\n", division);
                }
                else
                {
                printf("La operacion de division no puede realizarse si se divide por 0");
                }
                printf("La multiplicacion de ambos numeros da como resultado: %f\n", multiplicacion);
                printf("el factorial es %d", factorializacion);
                break;
            case 9:
                seguir = 'n';
                break;
        }


    return 0;
    printf("\n");
}
