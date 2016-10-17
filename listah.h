#ifndef LISTAH_H
#define LISTAH_H
#include "lista.c"


//struct node *crearlista(int n);
struct Lista *crearlista(void);
void imprimir(struct Lista *lista);
void agregar(struct Lista *lista,int val);
void concatenar(struct Lista *lista, struct Lista *lista2);
//void agregaren(struct Lista *lista,struct node *nodo,int pos);
//void middle(struct Lista *lista,struct node *nodo);
void borrar(struct Lista *lista,int key);
int size(struct Lista *lista);




#endif // LISTAH_H
