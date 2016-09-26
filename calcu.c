#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

main()
{
    float resultado;
    float a;
    float b;
    int opcion;
    do
    {
        system("cls");//clear
        printf("\n         º                                                           º");
        printf("\n         º                        Calcu ;)                           º");
        printf("\n         º                                                           º");
        printf("\n         º                                                           º");
        printf("\n         º       1.- Suma                     4.- Multiplicacion     º");
        printf("\n         º                                                           º");
        printf("\n         º       2.- Resta                    5.- Division           º");
        printf("\n         º                                                           º");
        printf("\n         º       3.- Raiz Cuadrada            6.- Potencia           º");
        printf("\n         º                                                           º");
        printf("\n         º                        7.- Salir                          º");
        printf("\n                                                                     º");
        printf("\n");
        printf("\n                              Elija una opcion: ");
        scanf("%d",&opcion);
        switch(opcion)  //suma
        {
            case 1:
                printf("\n         -> Introduzca el primer sumando: ");
                scanf("%f",&a);
                printf("\n         -> Introduzca el segundo sumando: ");
                scanf("%f",&b);
                resultado=a+b;
                printf("\n         La SUMA de %.4f + %.4f es igual a %.4f",a,b,resultado);
                break;

            case 2:     //resta
                printf("\n         -> Introduzca el primer numero: ");
                scanf("%f",&a);
                printf("\n         -> Introduzca el segundo numero: ");
                scanf("%f",&b);
                resultado=a-b;
                printf("\n         La RESTA de %.4f - %.4f es igual a %.4f",a,b,resultado);
                break;

            case 3:     //Raiz Cuadrada
                printf("\n         -> Introduzca el numero al que efectuar la raiz: ");
                scanf("%f",&a);
                if (a>0)
                {
                    resultado=sqrt(a);
                    printf("\n         La RAIZ CUADRADA de %.4f es igual a %.4f",a,resultado);
                }
                else printf("\n         No puede hacer la raiz cuadrada de un numero negativo!!");
                break;

            case 4:     //multiplicacion
                printf("\n         -> Introduzca el primer multiplicando: ");
                scanf("%f",&a);
                printf("\n         -> Introduzca el segundo multiplicando: ");
                scanf("%f",&b);
                resultado=a*b;
                printf("\n         La MULTIPLICACION de %.4f * %.4f es igual a %.4f",a,b,resultado);
                break;

            case 5:     // Division
                printf("\n         -> Introduzca el dividendo: ");
                scanf("%f",&a);
                printf("\n         -> Introduzca el divisor: ");
                scanf("%f",&b);
                if (b!=0)  /* Si el divisor es distinto de 0 realizara la operacion */
                {
                    resultado=a/b;
                    printf("\n         El cociente de la DIVISION de %.4f entre %.4f es igual a %.4f",a,b,resultado);
                }
                else printf("\n         No se puede realizar esa division porque el divisor es 0");
                break;

            case 6: //potencia
                printf("\n         -> Introduzca el numero que hara de base: ");
                scanf("%f",&a);
                printf("\n         -> Introduzca el exponente: ");
                scanf("%f",&b);
                resultado=pow(a,b);
                printf("\n         El resultado de %.4f^%.4f es %.4f",a,b,resultado);

                break;

            case 7:   //salir
            printf("\n                            Pulse ENTER para salir...");
            break;
        }
    getch();
    }
    while (opcion!=7);
}
