#include <stdio.h>
#include <stdlib.h>




void invertido(char a[])
{
    int i;
    char *b[tamano(a)];
    if(i>=0){
        int j=tamano(a);
        *b[i]=invertido(a[j-1]);
        i+=1;
        }

}





