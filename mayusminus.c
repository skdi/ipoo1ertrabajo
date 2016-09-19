#include <stdio.h>



int lower(int c)
{

    char temp;
    temp=c+32;
    return temp;


}

main()
{
    int c;
    while((c=getchar())!=EOF)
    {
        putchar(lower(c));
    }

}


