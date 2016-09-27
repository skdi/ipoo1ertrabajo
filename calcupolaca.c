#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAXOP 100
#define NUMBER '0' /* señal se encontró un número */

int getop(char []);
void push(double);
double pop(void);

int main()
    {
      int type;
      double op2;
      char s[MAXOP];

      while((type = getop(s)) != EOF) {

        switch(type) {
            case NUMBER:
                  printf("NUMBER: %s\n",s);
                  push(atof(s));
                  break;
            case '+':
                  push(pop() + pop());
                  break;
            case '*':
                  push(pop() * pop());
                  break;
            case '-':
                  op2 = pop();
                  push(pop() - op2);
                  break;
            case '/':
                  op2 = pop();
                  if (op2 != 0.0)
                    push(pop() / pop());
                  else
                    printf("error: divisor 0\n");
              break;
            case '\n':
                  printf("\t%.8g\n",pop());
                  break;
            default:
                  break;

    }
  }
  return 0;
}


#define MAXVAL 100
int sp = 0;
double val[MAXVAL];

void push(double f)
{
      printf("push numero: %f en : %d\n",f,sp);
      if (sp < MAXVAL)
        val[sp++] = f;
      else
        printf("error: pila llena\n");
}

double pop(void)
{
      if (sp > 0) {
        printf("pop %f en indice: %d\n",val[sp],sp);
        return val[--sp];
      }
      else {
        printf("error: pila vacia\n");
        return 0.0;
  }
}

#include <ctype.h>
int getch(void);
void ungetch(int);

int getop(char s[])
{
      int i,c;
      while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
      s[1] = '\0';

      if (!isdigit(s[0]) && c != '.')
        return c;

      i = 0;
      if (isdigit(c))
        while (isdigit(s[++i] = c = getch()))
          ;
      if (c == '.')
        while(isdigit(s[++i] = c = getch()))
          ;
      s[i] = '\0';
      if (c != EOF)
        ungetch(c);
      return NUMBER;
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
