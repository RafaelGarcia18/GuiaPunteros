#include <stdio.h>
int main()
{
    int opcion;
    int a,b,*p1,*p2;
    p1 = &a;
    p2 = &b;
    do
    {
        printf("\nIngrese un opcion correcta\nOpciones:\n1. Ingresar 2 numeros enteros\n2. Calcular la suma\n3. Calcular la resta\n4. Imprimir la direccion de memoria\nOtro numero para salir\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            printf("Ingrese un valor para el primer numero\n");
            scanf("%d",&a);
            printf("Ingrese un valor para el segundo numero\n");
            scanf("%d",&b);
            break;
        case 2:
            printf("Calculando la suma de los numeros\n");
            printf("La suma de %d y %d es %d\n",a,b,(*p1+*p2));
            break;
        case 3:
            printf("Calculando la resta de los numeros\n");
            printf("La resta de %d y %d es %d\n",*p1,*p2,(*p1-*p2));
            break;
        case 4:
            printf("Las direcciones de memoria de los numeros son:\n");
            printf("numero 1: %p\n",p1);
            printf("numero 2: %p\n",p2);
            break;
        default:
            printf("\n******************************************************************************\nBye\n");
        }
    }
    while(opcion>=1 && opcion<=4);
}
