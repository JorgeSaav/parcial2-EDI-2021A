#include<stdio.h>
//Autor: Jorge Armando Ramirez Saavedra

int main()
{
	int r, c, j, i, arr[100][100];
	
	printf("Dame el numero de renglones: ");
	scanf("%d", &r);
	
	printf("Dame el numero de columnas: ");
	scanf("%d", &c);
	
	for(i=0; i<r; i++)
		for(j=0; j<c; j++)
		{
			printf("Dame el valor: ");
			scanf("%d", &arr[i][j]);
		}
	
	
	printf("Matriz Original\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d", arr[i][j]);
		}
		
		printf("\n");	
	}
	
	printf("Matriz Transpuesta\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d", arr[j][i]);
		}
		
		printf("\n");	
	}
	
	return(0);
}
