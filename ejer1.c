#include <stdio.h>
#include <stdlib.h>


int strindex(char c,char t)
{
    char e[100];
    int i,j,aux=0;
    for(i=0;i<=tamano(c)-1;i++){
        if(c[i]==t)
            e[j]=i;
            j+=1;
    }
    return tamano(e);
    return e[j];

}





float anumero()
{
    char s[100]="123.5";
    printf("%2.6f",((float)atol(s))/pow(10,6));

}


char lower(char c)
{

    char temp;
    temp=c+'a'-'A';
    return temp;


}

//funcion auxiliar para el tamaño de una string
char tamano(char a[])
{
    //char *b[];
    int co;
    for(co=0;a[co]!='\0';co++)
    {
    }
    return co;

}

char invertido(char a[],int z,int i)
{

    char b[tamano(a)];
    if(i>=0){
        b[z+1]=invertido(a[i-1],z+1,i-1);
        }

}





main()
{
    int c;
    char a[50];
    int w=0;
    int z=-1;
    int i=tamano(a)-1;
    while((c=getchar())!= EOF)
    {

        //****** llamada a lower
        //putchar(lower(c));
        //******* llamada a invertido
        //a[w]=c;
        //w++;





    }



    //llamadas a funciones
    //invertido(a,z,i);
    //char letrarequerida='o';
    //strindex(a,letrarequerida);




}
