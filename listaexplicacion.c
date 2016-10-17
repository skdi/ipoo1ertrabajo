#include "listah.h"
#include <stdio.h>
#include <stdlib.h>


struct node{
    int val;
    struct node *next;
};

struct Lista{
    struct node *head;
};


void concatenar(struct Lista *lista,struct Lista *lista2){

    struct node *prev,*cur;
    prev=lista->head;//apunto un auxiliar a la cabezera de mi lista
    cur=prev->next;//apunto un auxiliar a la siguiente posicion
    while(1){//while infinito
        if(cur==NULL)//si el nodo actual es NULL
        {
            prev->next=lista2->head;//a la nueva "cabezera" la apuntamos a la lista segunda cabezera
            free(cur);//liberamos para no ocupar memoria extra
        }
        prev=cur;//actualizamos la posicion del auxiliar
        cur=cur->next;
}
}
int size(struct Lista *lista){
    struct node *t;
    t=lista->head;
    int cont=0;
    while(t!=NULL){
        cont++;
        t=t->next;
    }
    free(t);
    return cont;
}

void middle(struct Lista *lista,struct node *nodo)
{
    struct node *prev,*cur;
    prev=lista->head;//apunto el auxiliar a la cabezera de mi lista
    cur=prev->next;//apunto el2do auxiliar a la siguiente posicion
    int aux=size(lista)/2;//calculo para el medio usando el tamaño total de la lista
    int i=1;
    while(cur!=NULL){//si el nodo actual no esta vacio
        if(i==aux){//compara el medio con el contador
            prev->next=nodo;//a la siguiente posicion de la cabezera le asigno el nodo nuevo
            nodo->next=cur;//a la siguiente direccion del nuevo nodo le asigno el nodo actual
            break;
        }
        prev=cur;//actualizo la posicion aux
        cur=cur->next;
        i++;
    }
}


struct Lista *crearlista(void)
{
    struct Lista *lista;
    lista=(struct Lista *) malloc(sizeof(struct Lista));
    lista->head=NULL;
    return lista;
}


/*struct node *crearlista(int n)
{
    struct node *head,*prev,*cur;
    int i;
    head=malloc(sizeof(struct node));
    head->val=1;
    prev=head;
    for(i=2;i<=n;i++)
    {
        cur=malloc(sizeof(struct node));
        cur->val=i;
        prev->next=cur;
        prev=cur;
    }
    prev->next=NULL;
    return head;
}*/

void agregar(struct Lista *lista,int val)
{
    struct node *n,*m;
    if(lista->head==NULL){//si no hay primer elemento lo asignamos

        lista->head=(struct node *)malloc(sizeof(struct node));//separamos espacio de memoria para este nodo
        lista->head->val=val;//le asignamos su variable
        lista->head->next=NULL;//apuntamos el siguiente a null hasta agregar nuevo nodo
        return;
    }
    n=lista->head;//apunto n a la primera posicion
    while(n!=NULL){
        m=n;//creo una copia de n
        n=n->next;//a n le apunto la siguiente direccion
    }
    m->next=(struct node*)malloc(sizeof(struct node));//separo memoria para el nuevo nodo
    m->next->next=NULL;//apunto el siguiente de este nuevo nodo a null
    m->next->val=val;//le asigno su valor
}
void agregaren(struct Lista *lista,struct node *nodo,int pos)
{
    struct node *prev,*cur;
    prev=lista->head;//asigno la cabezera a mi nodo auxiliar
    cur=prev->next;//asigno la siguiente posicion a mi 2do nodo auxiliar
    int i=0;

    while(cur!=NULL)//si no es null
    {
        if(i==pos){//compara la posicion del contador con la posicion que ingresamos
            prev->next=nodo;//la siguiente posicion se le asigna el nuevo nodo
            nodo->next=cur;//actualizo posicion para que este apunte al nodo siguiente
            break;

        }
        prev=cur;//actualizo posicion
        cur=cur->next;
        i++;

    }
}

void borrar(struct Lista *lista,int key)
{
    struct node *prev,*cur,*temp;
    prev=lista->head;//asigno la cabezera a mi nodo auxiliar
    cur=lista->head->next;//asigno la siguiente posicion a mi 2do nodo axuliar

    if(lista->head->val==key)//si la cabezera es igual a la posicion
    {
        temp=lista->head;//asigno a un nodo temporal la nueva cabezera
        lista->head=lista->head->next;//hago que la cabezera apunte a un siguiente nodo
        free(temp);//libero memoria del auxiliar
    }
    else {
        while(cur!=NULL)//mientras exista un nodo
        {
            if(cur->val==key)//comparo el valor ,si este es igual al ingresado
            {
                prev->next=cur->next;//el nodo anterior apunta al siguiente del nodo actual
                free(cur);//libero el nodo actual
                break;
            }
            prev=cur;//actualizo posicion
            cur=cur->next;
        }
    }
}



void imprimir(struct Lista *lista){

    struct node *i;//nodo auxiliar
    for(i=lista->head;i!=NULL;i=i->next){//inicializo i con la cabezera, comparo si existe y luego del procedimiento apunto al siguiente
        printf("%d\t",i->val);}//imprimo el valor actual
    printf("\n");

}
