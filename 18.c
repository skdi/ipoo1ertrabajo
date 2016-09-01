#include <stdio.h>

main()
{
    int c,eb,nl,tab;
    eb=nl=tab=0;
    while((c=getchar())!=EOF){
        if(c=='\n')
            ++nl;
        else if(c=='\t')
            ++tab;
        else if(c==' ')
            ++eb;}
    printf("NuevaLinea= %d\t Tabs= %d\t EspaciosB= %d\t",nl,tab,eb);

 }
