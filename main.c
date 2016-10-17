#include <stdio.h>
#include <stdlib.h>
#include "listah.h"



int main(void)
{
    struct Lista *lista,*lista2;

    lista=crearlista();
    agregar(lista,6);
    agregar(lista,8);
    agregar(lista,9);


    //agregaren(lista,a,2);
    borrar(lista,8);

    lista2=crearlista();
    agregar(lista2,8);
    agregar(lista2,8);
    //concatenar(lista,lista2);
    imprimir(lista);
    return 0;
}

