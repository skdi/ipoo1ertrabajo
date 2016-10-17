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
    prev=lista->head;
    cur=prev->next;
    while(1){
        if(cur==NULL)
        {
            prev->next=lista2->head;
            free(cur);
        }
        prev=cur;
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
    prev=lista->head;
    cur=prev->next;
    int aux=size(lista)/2;
    int i=1;
    while(cur!=NULL){
        if(i==aux){
            prev->next=nodo;
            nodo->next=cur;
            break;
        }
        prev=cur;
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
    if(lista->head==NULL){

        lista->head=(struct node *)malloc(sizeof(struct node));
        lista->head->val=val;
        lista->head->next=NULL;
        return;
    }
    n=lista->head;
    while(n!=NULL){
        m=n;
        n=n->next;
    }
    m->next=(struct node*)malloc(sizeof(struct node));
    m->next->next=NULL;
    m->next->val=val;
}
void agregaren(struct Lista *lista,struct node *nodo,int pos)
{
    struct node *prev,*cur;
    prev=lista->head;
    cur=prev->next;
    int i=0;

    while(cur!=NULL)
    {
        if(i==pos){
            prev->next=nodo;
            nodo->next=cur;
            break;

        }
        prev=cur;
        cur=cur->next;
        i++;

    }
}

void borrar(struct Lista *lista,int key)
{
    struct node *prev,*cur,*temp;
    prev=lista->head;
    cur=lista->head->next;

    if(lista->head->val==key)
    {
        temp=lista->head;
        lista->head=lista->head->next;
        free(temp);
    }
    else {
        while(cur!=NULL)
        {
            if(cur->val==key)
            {
                prev->next=cur->next;
                free(cur);
                break;
            }
            prev=cur;
            cur=cur->next;
        }
    }
}



void imprimir(struct Lista *lista){

    struct node *i;
    for(i=lista->head;i!=NULL;i=i->next){
        printf("%d\t",i->val);}
    printf("\n");

}
