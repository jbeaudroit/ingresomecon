#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char cadena[10];
int len;

    printf("ingrese una frase");
   //para las cadenas se usa la funcion gets para guardar la frase, no lkleva ni mascara ni &
    gets(cadena);

    //puts funcion para imprimir la cadena que esta guardada, lo muestra directamente
    puts(cadena);

//strlen cuenta la cantidad de caracteres ingresados en la cadena
len=strlen(cadena);

printf("la frase ingresada es %s y tiene %d", cadena, len);

    return 0;
}
