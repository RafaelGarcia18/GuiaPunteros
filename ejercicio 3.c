#include <stdio.h>
int main(void)
{
	int tamano,*puntero;
	do{
 	printf("Ingrese el tamaño de el vector\nNota no debe ser menor o igual a cero\n");
	scanf("%d",&tamano);
	}while(tamano<=0);
	int vector[tamano];
	for (int i=0;i<tamano;i++){
		printf("Ingrese un valor para el vector en la posicion %d\n",(i+1));
		scanf("%d",&vector[i]);
	}
	puntero = &vector;
	puntero = puntero + (tamano-1);
	for(int i= (tamano-1);i>=0;i--)
	{
		printf("El valor de el vertor en la posicion %d es: %d\n",(i+1),*puntero);
		puntero--;	
	}
}
