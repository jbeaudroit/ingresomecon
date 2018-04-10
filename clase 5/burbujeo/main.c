#include <stdio.h>
#include <stdlib.h>


    int main()
{
    int vector [5] = {1,3,4,2,9};
    int i;
    int j;
    int aux;

      /*la iteracion va a ir chequeando  sobre los elementos del vector menos uno */
      for (i=0;i<TAM-1;I++)
      {
          /* la segunda iteracion arranca desde el segundo elemento del vector*/
          for(j=i+1; j<TAM; j++)
{
    /*comparo el elemento con su subsiguiente*/
    if (vector[i]<vector[j])
    {
        /* si se cumple que el subsiguiente es mayor mando el mas grande delante del mas pequeño*/
        aux=vector[i];
        vector [i]= vector[j];
        vector [j]=aux;
    }

}
      }

    printf("despues de cargarlo\n");
mostrarVector(vector, 5);

    mostrarVector (vector, 5);

    return 0;

}
