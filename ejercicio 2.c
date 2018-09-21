#include <stdio.h>

int main(void)
{
    int tamano;
    do
    {
        printf("Ingrese el tamaño de los vectores\nNota: no deven ser numeros nenores o iguales a cero\n");
        scanf("%d",&tamano);
    }
    while(tamano <=0);
    int vector1[tamano],vector2[tamano],*p1,*p2;
    for(int i=0; i<tamano; i++)
    {
        printf("Ingrese un valor para el vector 1 en la posicion %d\n",(i+1));
        scanf("%d",&vector1[i]);
    }
    for(int i=0; i<tamano; i++)
    {
        printf("Ingrese un valor para el vector 2 en la posicion %d\n",(i+1));
        scanf("%d",&vector2[i]);
    }
    p1 = &vector1;
    p2 = &vector2;
    for(int i=0; i<tamano; i++)
    {
        *p1 = *p1 + *p2;
        *p2 = *p1 - *p2;
        *p1 = *p1 - *p2;
        p1++;
        p2++;
    }
    for(int i=0; i<tamano; i++)
    {
        printf("El valor del vector 1 en la posicion %d es: %d\n",(i+1),vector1[i]);
    }
    for(int i=0; i<tamano; i++)
    {
        printf("El valor del vector 2 en la posicion %d es: %d\n",(i+1),vector2[i]);
    }
}

