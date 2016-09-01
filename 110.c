#include <stdio.h>

main()
{
    int c;
    char a;

    while((c=getchar())!=EOF){
        if(c=='\t'){
            a="\t";
            c=a;}
        else if(c=='\b'){
            a="\b";
            c=a;}
        else if(c=='\\'){
            a="\\";
            c=a;}
        putchar(c);
        }

}
