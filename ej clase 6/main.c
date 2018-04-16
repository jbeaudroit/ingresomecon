#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

void mostrarAlumnos(int[], char[][50], int[], int[], float[], int);
int buscarLibre(int[], int);
int main()
{
    int legajos[TAM]= {1,2,3,4,5};
    int nota1[TAM]={5,9,3,4,7};
    int nota2[TAM]={2,9,7,8,2};
    float promedios[TAM]={3.5,9,5,6,4.5};
    char nombres[TAM][50]={"Juan", "Juan","Ana","Beatriz","Carlos"};
    int i;
    int j;
    int auxInt;
    float auxFloat;
    char auxString[50];
    int opcion;
    int index;
    char rta;
    int encontro = 0;

    do
    {
        printf("1.Altas\n2.Bajas\n3.Modificacion\n4. Mostrar\n5. Ordenar\n6.Salir");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
{


        case 1:

            index = buscarLibre(legajos, TAM);
            if(index == -1)
            {
                printf("Capacidad agotada!!!");
            }
            else
            {
                printf("Ingrese legajo: ");
                scanf("%d", &legajos[index]);
                printf("Ingrese su nombre: ");
                fflush(stdin);
                gets(nombres[index]);
                printf("Ingrese nota 1: ");
                scanf("%d", &nota1[index]);
                printf("Ingrese nota 2: ");
                scanf("%d", &nota2[index]);

                promedios[index] = (float)(nota1[index]+nota2[index])/2;
            }

    break;
    case 3:

    mostrarAlumnos(legajos, nombres, nota1, nota2, promedios, TAM);
    printf("Ingrese el legajo a modificar: ");
    scanf("%d", &auxInt);
    for(i=0; i<TAM; i++)
    {
        if(auxInt==legajos[i])//encontro al alumno
        {

            //mostrar alumno
            printf("Reingrese valor de nota 1: ");
            scanf("%d", &auxInt);
            printf("Esta seguro de realizar la modificacion? (s/n)");
            rta = getche();
            if(rta=='s')
            {
                nota1[i] = auxInt;
                 promedios[i] = (float)(nota1[i]+nota2[i])/2;

            }
            else
            {
                printf("Accion cancelada por el usuario!!!");
            }

            encontro = 1;
        }

    }
    if(encontro==0)
    {
        printf("Legajo inexistente!!!");
    }



        break;
    case 4:
        printf("Datos ingresados Ordenados: \n");
        mostrarAlumnos(legajos, nombres, nota1, nota2, promedios, TAM);

break;
    case 5:

        for(i=0; i<TAM-1; i++)
        {
            for(j=i+1; j<TAM; j++)
            {
                if(strcmp(nombres[i], nombres[j])<0)
                {
                    auxInt = legajos[i];
                    legajos[i] = legajos[j];
                    legajos[j] = auxInt;

                    auxInt = nota1[i];
                    nota1[i] = nota1[j];
                    nota1[j] = auxInt;

                    auxInt = nota2[i];
                    nota2[i] = nota2[j];
                    nota2[j] = auxInt;

                    auxFloat = promedios[i];
                    nota2[i] = nota2[j];
                    nota2[j] = auxFloat;

                    strcpy(auxString, nombres[i]);
                    strcpy(nombres[i], nombres[j]);
                    strcpy(nombres[j], auxString);



                }
            }
        }
        break;



}
system("pause");
system("cls");

}
while(opcion!=5);





return 0;



}
void mostrarAlumnos(int legajos[], char nombres[][50], int nota1[], int nota2[], float promedios[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(legajos[i]!=0)
        {
            printf("%5d %10s %3d %3d %5.2f\n", legajos[i], nombres[i], nota1[i], nota2[i], promedios[i]);
        }

    }
}
int buscarLibre(int legajos[], int cant)
{
    int i;
    int index=-1;
    for(i=0; i<cant; i++)
    {
        if(legajos[i]==0)
        {
            index = i;
            break;
        }
    }
    return index;
}
