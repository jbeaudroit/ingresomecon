#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3
void mostrarAlumnos (int [], char[][50], int [], int[], float[], int []);
int buscarLibre(int[], int);
int main()
{
    int legajo[TAM]={};
    int nota1[TAM];//=(5,9,3,4,7);
    int nota2[TAM];//=(2,9,7,8,2);
    float promedio[TAM];//=(3.5, 9, 5, 6, 4.5);
    char nombres [TAM][50];//=("juan","juan","ana","beatriz","noelia");
    int i=0;
    int j;
    float aux1;
    int aux2;
    int aux3;
    int aux4;
    char aux5;
    int opcion;
    int index;
    char rta;
    int encontro;

    do
    {
        printf("1.Altas\n2.bajas\n3.modificaciòn\4.mostrar\5.ordenar\n6.salir")

        switch(opcion)
        {
            case 1:
                index=buscarLibre(legajos, TAM);
                if(index=-1)
                   {
                       printf("capacidad agotada")
                   }

                   else
                    {
  printf("ingrese el numero de legajo");
  scanf("%d", &legajo[i]);
  printf("ingrese su nombre");
  fflush(stdin);
  gets(nombres[i]);
  printf("ingrese la primer nota");
  scanf("%d", &nota1[i]);
  printf("ingrese la segunda nota");
  scanf("%d", &nota2[i]);

  promedio[i]= (float)(nota1[i]+nota2[i])/2;
                        }
                    break;
            case 3:
                mostrarAlumnos(legajos, nombres, nota1, nota2, promedios, TAM);
                printf("ingrese el legajo a modificar: ");
                scanf("%d", &auxInt);
                for(i=0;i<TAM, i++)
                {
                    if(auxInt==legajos[i])
                        printf("reingrese el valor de la nota 1: ")
                        scanf("%d", &auxInt);
                    printf("esta seguro de realizar la modificacion? (s/n)");
                    rta=getche();
                    if (rta=='s')
                    {
                        nota1[i]=auxInt;
                         promedio[i]= (float)(nota1[i]+nota2[i])/2;
                    }
                else
                {
                    printf("accion cancelada");
                }
                encontro=1
                }
                if(encontro==0)
                {
                    printf("legajo inexistente");
                }
                break;


        }
    }






      for(i;i<TAM;i++)
    {
  printf("ingrese el numero de legajo");
  scanf("%d", &legajo[i]);
  printf("ingrese su nombre");
  fflush(stdin);
  gets(nombres[i]);
  printf("ingrese la primer nota");
  scanf("%d", &nota1[i]);
  printf("ingrese la segunda nota");
  scanf("%d", &nota2[i]);

  promedio[i]= (float)(nota1[i]+nota2[i])/2;
    }

     for (i=0;i<TAM-1;i++)
      {
          for(j=i+1; j<TAM; j++)
{
    if (promedio[i]<promedio[j])//if(strcmp(nombres[i], nombres[j])>0) para que ordene por nombre
    {
        aux1=promedio[i];
        promedio [i]= promedio[j];
        promedio[j]=aux1;

        aux2=legajo[i];
        legajo[i]=legajo[j];
        legajo[j]=aux2;

        aux3=nota1[i];
        nota1[i]=nota1[j];
        nota1[j]=aux3;

        aux4=nota2[i];
        nota2[i]=nota2[j];
        nota2[j]=aux4;

        strcpy(aux5, nombres[i]);
        strcpy(nombres[i], nombres[j]);
        strcpy(nombres[j], aux5);
    }

for(i;i<TAM;i++)
    {
  printf("%5d %10s %3d %3d %5.2f\n", legajo[i], nombres[i], nota1[i], nota2[i], promedio[i]);
}

}
}
}

void mostrarAlumnos (int legajos[], char nombres[][50], int nota1[], int nota 2[], floatpromedio [], int cant)
{



}

int buscarLibre(int legajos[], intcant)
{
    int i;
    int index=-1;
     for(i;i<TAM;i++)
    {
        if (legajos[i]==0)
        {
            index=i
            break;
        }
}
return index;
}
