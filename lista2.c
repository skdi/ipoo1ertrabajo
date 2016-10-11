#include <stdio.h>
#include <stdlib.h>

//struct node *crearlista(int n);
struct Lista *crearlista(void);
void imprimir(struct Lista *lista);
void agregar(struct Lista *lista,int val);
struct Lista *concatenar(struct Lista *lista, struct Lista *lista2);
void agregaren(struct Lista *lista,int val,int pos);

void borrar(struct Lista *lista,int key);


struct node{
    int val;
    struct node *next;
};

struct Lista{
    struct node *head;
};

int main(void)
{
    struct Lista *lista,*lista2;
    lista=crearlista();
    agregar(lista,6);
    agregar(lista,8);
    agregar(lista,9);

    agregaren(lista,7,1);
    borrar(lista,8);

    lista2=crearlista();
    agregar(lista2,8);
    agregar(lista2,8);
    concatenar(lista,lista2);
    imprimir(lista);
    return 0;
}

struct Lista *concatenar(struct Lista *lista,struct Lista *lista2){
    struct node *n;
    n=lista->head;
    while(n->next!=NULL){
        lista->head=n->next;
    }
    if(n==NULL)
    {
        lista->head=lista2->head;
        //lista->head=n;
        free(lista2);
    }
    return lista;
    //free(lista2);
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
void agregaren(struct Lista *lista,int val,int pos)
{
    int i=0;
    struct node *n;
    n=lista->head;
    while(n!=NULL)
    {

        if(i==pos){
            n->next;
            lista->head=n;
            agregar(lista,val);
            break;

        }
        i+=1;
        n=n->next;

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
