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
	
	if(i == j)
	{
		if(arr[i][j] == arr[j][i])
		printf("Es simetrica");
		else
		printf("No es simetrica");
	}
	else
	printf("No es simetrica");
	
	return(0);
}
