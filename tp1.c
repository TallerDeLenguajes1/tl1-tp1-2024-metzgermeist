#include<stdio.h>

void main(){
    //varaibles//
    int var1;
    int* punt;
    punt=&var1;

    printf("el contenido del puntero es: %p",punt);
    printf("\nla direccion de memoria de la variable es: %p",&var1);
    printf("\nla direccion de memoria del puntero es: %p",&punt);
    printf("\nel tamanio de la variable: %d bytes",sizeof(var1));


}