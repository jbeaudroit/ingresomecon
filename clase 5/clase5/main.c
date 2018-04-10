#include <stdio.h>
#include <stdlib.h>
#define TAM 5


void mostrarVector (int [], int);
void mostrarVector (int [], int);
int buscarMaximo (int [], int);
void ordenarVector (int [], int);//armar

/*
1.cargar datos
2.mostrar datos
3.ordenar
4.buscar y mostrar posicion
5.salir
*/
int main()
{
    int vector [5] = {1,3,4,2,9};
    int i;
    int j;
    int aux;
    int maximo;
        printf("cargo el numero: ");
      cargarVector(vector, 5);

    printf("despues de cargarlo\n");
mostrarVector(vector, 5);

    mostrarVector (vector, 5);

    maximo=buscarMaximo(vector, TAM);
    printf("el maximo es %d\n", maximo);

    return 0;
}

void mostrarVector (int vector[], int tam)
{
int i;
    for(i=0;i<tam;i++)
    {
    printf ("%d", vector [i] );
     }
}

void cargarVector (int vector[], int tam)
{

    int i;

    for( i=0;i<tam;i++)
    {
        printf("ingrese un numero: ");
        scanf ("%d", &vector [i] );
    }

    }
    //para buscar el maximo
int buscarMaximo (int vector [], int tam)
{
    int i;
    int maximo;
    int flag=0;

    for (i=0;i<tam;i++)
    {
        if (flag==0 || maximo<vector[i])
        {
            maximo=vector[i]:
                flag=1;
        }
    }
    return maximo;
}
