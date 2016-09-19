#include<stdio.h>

int strindex(char s[],char t[]);

int main()
{
    char l[] = "abcdedfabcde";
    char p[] = "5";

    int found;

    found = strindex(l, p);

    printf("encontrado en la posicion: %d\n", found);

}

int strindex(char s[],char t[])
{
    int i,j,k, result;

    result = -1;

    for(i=0;s[i]!='\0';i++)
    {
        for(j=0,k=0;t[k]!='\0' && s[j]==t[k];j++,k++)
            ;
        if(k>0 && t[k] == '\0')
            result = i;
    }
    return result;
}
