#include<stdio.h>

int main()
{

    int anterior;
    int c;

    while ( (c = getchar()) != EOF ){

        if (' ' != c && '\t' != c){

            putchar(c);
            anterior = 'l';//1 toma el valor del caracter 1 para comparar
            }

        if (' '== c){

            if ('l'==anterior || '\t'==c){
                printf(" ");
                anterior = 'b';//b valor en blanco
                }
            }

    }




}

