//mayus en minus sin while if for
//srtindex(s,t) recive str ,la cual retorna la posicion mas al final de t en s,sino encuentra t retornar  -1
//escriba un programa que reciba "123.5e-6 y retorne su correspondiente en numero"
//escriba una funciona recursiva que devuelva el string invertido. (no usar string.h)



#include <stdio.h>
#include <stdlib.h>


char lower(char c)
{

    char temp;
    temp=c+'a'-'A';
    return temp;


}


char tamano(char a[])
{
    //char *b[];
    int co;
    for(co=0;a[co]!='\0';co++)
    {

        //*b[]=*a[];
        //co+=1;

    }
    /*for(i=0;i<contador;i++)
    {
        *a[i]=*b[contador-i];

    }*/
    return co;

}

char invertido2(char a[])
{
    int i=0;
    while((a[tamano(a[])-i])>0){
        a[i]=invertido2(a[tamano(a[])-i]);
        i+=1;
    }


}







main()
{
    char c;
    while((c=getchar())!= EOF)
    {
        //lower(c);
        //printf("%c",lower(c));
        putchar(lower(c));

    }




}
