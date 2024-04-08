#include <stdio.h>
#include <stdlib.h>


//---funciones y proecedimientos///--
int cuadrado(int num1);
void cuadrados(int *num2, int *resultado2);
void Invertir(int* a,int* b);
void orden(int* a,int* b);

int main()
{
    //--variables--//
    int num1 = 0, num2 = 0, resultado = 0, resultado2 = 0, numA=0, numB=0;

    puts("ingrese un numero entero: ");
    scanf("%d", &num1);

    resultado = cuadrado(num1);

    printf("\nel cuadrado de %d es= %d", num1, resultado);
    puts("hola mundo");

    //-----usando la notacion de punteros----/

    puts("ingrese otro numero entero: ");
    scanf("%d", &num2);
    cuadrados(&num2, &resultado2);

    printf("\nel segundo resultado es: %d", resultado2);

    //--- invertir valores----//

    puts("ingrese un numero A: ");
    scanf("%d",&numA);

    puts("ingrese un numero B: ");
    scanf("%d",&numB);

   Invertir(&numA,&numB);

   printf("\n el primer numero ahora es: ",numA);
   printf("\n el segundo numero ahora es: ",numB);

   //----oreden---//
    orden(&numA,&numB);

    return 0;
}

int cuadrado(int num1)
{
    int resultado = num1 * num1;
    return resultado;
}

void cuadrados(int *num2, int *resultado2)
{
    *resultado2 = (*num2) * (*num2);
}

void Invertir(int* a,int* b)
{
    int numAUX;
    numAUX=*a;
    *a=*b;
    *b=numAUX;

}

void orden(int* a,int* b)
{
    if (*a>*b)
    {
       printf("\n 1) A=%d 2) B=%d es el mayor",*a,*b);
    }
    else
    {
        printf("\n 1) B=%d 2) A=%d es el mayor",*b,*a);

    }
    
}