#include <stdio.h>
#define Tamano_Arreglo  100

main()
{


    int c,i,s,np=1,lml=0,pl=0;  //np contador lml=longitud mas larga ,pl palabra mas larga

    int caracteres[Tamano_Arreglo + 1] = { 0, 0 };  //inicializo en 0

    while ( (c = getchar()) != EOF)
    {
        if( c == '\t'  || c == '\n' || c == ' ' )//nueva palabra


        {
            if (lml < caracteres[np])
            {
                
            }
            np++;
        }

        else

    }

    printf("Numero de palabra es: %d ",np - 1);
    printf("\n\n");
    for ( s = lml; s >= 1; s-- )
    {
        for ( i = 1; i <=np; i++ )
        {
            if ( caracteres[i] >= s )
            printf("* ");
            else
            printf("  ");
        }

        printf("\n");

    }

    printf("\n");

}

