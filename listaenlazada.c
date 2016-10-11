#include <stdio.h>
#include <stdlib.h>

struct node *crearlista(int n);

struct node{
    int val;
    struct node *next;
};

main(void)
{
    struct node *lista;
    lista=crearlista(5);
    imprimir(lista);

}







struct node *crearlista(int n)
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

}

/*struct nodo *insertar(struct nodo ,struct )*/


void imprimir(struct node *head){

    struct node *t;
    t=head;
    while(t!=NULL)
    {
        printf("%d",t->val);
        t=t->next;
    }
}

