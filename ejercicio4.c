#include<stdio.h>
//Autor: Jorge Armando Ramirez Saavedra

void leerMatriz(int r, int c);
void calMa(int arr[][100], int r, int c, int numMa);

int main()
{
	int r, c;
	
	printf("Dame el numero de renglones: ");
	scanf("%d", &r);
	
	printf("Dame el numero de columnas: ");
	scanf("%d", &c);

	leerMatriz(r, c);

	return 0;
	
}

void leerMatriz(int r, int c)
{
	int i, j, arr[100][100], numMa;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Dame el valor: ");
			scanf("%d", &arr[i][j]);
		}
		
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf( "%d ", arr[i][j]);
		}
	
		printf("\n");
	}
	
	calMa(arr, r, c, numMa);
	
}

void calMa(int arr[][100], int r, int c, int numMa)
{
	int i, j, a, b;
	numMa=arr[0][0];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(numMa<arr[i][j])
			{
			numMa=arr[i][j];
			a=i;
			b=j;
			}
		}
	}
	printf("El numero mayor es: %d y esta en la posicion[%d][%d]", numMa, a, b);		
	
}
