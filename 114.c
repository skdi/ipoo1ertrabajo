#include <stdio.h>
#define Tamano 256 //ASCII 0/255



main(){

    int c;
    int frecuencia_caracteres[Tamano + 1] = { 0, 0, 0 };
    int i = 0;
    int j = 0;

    while (( c = getchar()) != EOF )
    {
        frecuencia_caracteres[c]++;
    }


    //Imprime el histograma

    for ( i = 0; i <= Tamano; i++)
    {
        if (frecuencia_caracteres[i] != 0 )
    {
    putchar(i);

    for ( j = 1; j <= frecuencia_caracteres[i]; j++)
        printf("*");

    printf("\n");
    }
    }

}
