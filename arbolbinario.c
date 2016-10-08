#include <stdio.h>
#include <ctype.h>
#include <string.h>
//creamos una estructura tnode que recibe  el nombre del nodo,un contador(por las veces q se repetira) y 2 sub nodos
struct tnode{
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
};

#define MAXWORD 100

struct tnode *addtree(struct tnode *, char *);
void treeprint(struct tnode *);
int getword(char *,int);

int main()
{
  struct tnode *root;//creamos un puntero de tipo tnode
  char word[MAXWORD];//definimos un arreglo de caracteres

  root=NULL;//por default root no apunta a nada
  while(getword(word,MAXWORD)!=EOF)//obtenemos una palabra
      if(isalpha(word[0]))//comparamos si la palabra es de tipo alfanumerico
          root=addtree(root,word);//a root le agregamos una rama con los parametros de nueva rama y una palabra
  treeprint(root);//llamamos a la funcion imprimir arbol
  orden(root);
  return 0;
}

struct tnode *talloc(void)//uso de la estructura de forma matricial
{
    return(struct tnode *)malloc(sizeof(struct tnode));
}


struct tnode *addtree(struct tnode *p,char *w)//recibe un puntero de tipo tnode , un string y retorna un puntero tnode
{
    int cond;

    if(p==NULL){ //una nueva palabra llego
        p=talloc(); //crea un nuevo nodo
        p->word=strdup(w);//le asigna el string de arriba a word
        p->count=1;//p apunta al contador inicializado en 1
        p->left=p->right=NULL;//p apunta lo que apunta derecha que es 0 o NULL
    } else if((cond=strcmp(w,p->word))==0)//si la comparacion de la palabra y su apuntador es 0
        p->count++; //repite la palabra
    else if(cond < 0)//debajo de subarbol a la izq
        p->left=addtree(p->left,w);//agrega una rama izq
    else //subarbol derecho
        p->right=addtree(p->right,w);//agrega una rama derecha
    return p;
}

void treeprint(struct tnode *p)//recibe un puntero de tipo nodo
{
    if(p!=NULL){
        treeprint(p->left);//imprime la rama izquierda
        printf("%4d %s\n",p->count,p->word);//imprime el contador y su palabra
        treeprint(p->right);//imprime la rama derecha
    }
}

void orden(struct tnode *p)
{
    if(p!=NULL)
    {


        orden(p->left);
        printf("%s\n",p->word);
        orden(p->right);

    }
}

int getword(char *word,int lim)
{
    int c,getch(void);
    void ungetch(int);
    char *w=word;

    while(isspace(c=getch()))
        ;
    if(c!=EOF)
        *w++=c;
    if(!isalpha(c)){
        *w='\0';
        return c;
    }
    for(;--lim>0;w++)
        if(!isalnum(*w=getch())){
            ungetch(*w);
            break;
        }
    *w='\0';
    return word[0];
}

#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
      if (bufp >= BUFSIZE)
        printf("ungetch: demasiados caracteres\n");
      else
        buf[bufp++] = c;
}

#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
      if (bufp >= BUFSIZE)
        printf("ungetch: demasiados caracteres\n");
      else
        buf[bufp++] = c;
}
