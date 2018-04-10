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

printf("ingrese el numero de opción que desea realizar ");
 scanf("%d",&opcion);
while (opcion<1 || opcion>9)
{
    printf("las opciones posibles van del 1 al 9, reingrese la opción que desea realizar: ");
        scanf("%d",&opcion);
}

fflush(stdin);
        switch(opcion)
        {
            case 1:
                printf("ingrese el primer operando: ");
               scanf("%f", &numeroX);
               fflush(stdin);
                break;
            case 2:
                printf("ingrese el segundo operando: ");
                scanf("%f", &numeroY);
                fflush(stdin);
                break;
            case 3:
            suma=sumar(numeroX, numeroY);
            printf("La suma de ambos numeros da como resultado: %f\n", suma);
            fflush(stdin);
                break;
            case 4:
            resta=restar(numeroX, numeroY);
            printf("La resta de ambos numeros da como resultado: %f\n", resta);
            fflush(stdin);
                break;
            case 5:
                if (numeroY!=0)
                {
                  division=dividir(numeroX, numeroY);
                  printf("La division de ambos numeros da como resultado: %f\n", division);
                  fflush(stdin);
                }
                else
                {
                   printf("La operacion de division no puede realizarse si se divide por 0");
                   fflush(stdin);
                }
                break;
            case 6:
            multiplicacion=multiplicar(numeroX, numeroY);
            printf("La multiplicacion de ambos numeros da como resultado: %f\n", multiplicacion);
            fflush(stdin);
                break;
            case 7:
                if (numeroX==0 || numeroX==1)
                {
                factorializacion=1;
                }
                else
                {
                factorializacion=factorial(numeroX);
                }
                printf("el factorial es: %d", factorializacion);
                fflush(stdin);
                break;
            case 8:
                suma=sumar(numeroX, numeroY);
                printf("La suma de ambos numeros da como resultado: %f\n", suma);
                resta=restar(numeroX, numeroY);
                printf("La resta de ambos numeros da como resultado: %f\n", resta);
                if (numeroY!=0)
                {
                division=dividir(numeroX, numeroY);
                printf("La division de ambos numeros da como resultado: %f\n", division);
                }
                else
                {
                printf("La operacion de division no puede realizarse si se divide por 0\n");
                }
                division=dividir(numeroX, numeroY);
                printf("La multiplicacion de ambos numeros da como resultado: %f\n", multiplicacion);
                if (numeroX==0 || numeroX==1)
                {
                factorializacion=1;
                }
                else
                {
                factorializacion=factorial(numeroX);
                }
                printf("el factorial es: %d", factorializacion);
                break;
            case 9:
                seguir = 'n';
                break;
        }
}

    return 0;

}
