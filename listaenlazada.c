#include <stdio.h>
#include <stdlib.h>

//struct node *crearlista(int n);
struct Lista *crearlista(void);
void imprimit(struct node *head);
void agregar(struct Lista *lista,int val);
struct Lista *concatenar(struct Lista *A,struct Lista *B);
void agregaren(struct Lista *lista,int val,int pos);

struct node{
    int val;
    struct node *next;
};

struct Lista{
    struct node *head;
};

main(void)
{
    struct Lista *lista,*lista2;
    lista=crearlista();
    agregar(lista,6);
    agregar(lista,8);
    agregar(lista,9);

    agregaren(lista,7,1);

    /*lista2=crearlista();
    agregar(lista2,8);
    agregar(lista2,8);
    concatenar(lista,lista2);*/
    imprimir(lista);
}

/*struct Lista *concatenar(struct Lista *a,struct Lista *b){

    a->head;
    while(a->head!=NULL){
        a->head->next;
    }
    if(a->head->next==NULL)
    {
        a->head->next=b->head;
    }
    return a;
    free(b);
}*/


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
void agregaren(struct Lista *lista,int val,int pos)
{
    int i=0;
    struct node *n;
    n=lista->head;
    while(n!=NULL)
    {
        i+=1;
        if(i==pos){
            lista->head+i;
            agregar(lista,val);

        }
        n=n->next;

    }
}



void imprimir(struct Lista *lista){

    struct node *i;
    for(i=lista->head;i!=NULL;i=i->next){
        printf("%d\t",i->val);}
    printf("\n");

}


