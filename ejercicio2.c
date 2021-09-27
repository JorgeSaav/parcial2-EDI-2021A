#include <stdio.h>
//Autor: Jorge Armando Ramirez Saavedra

int main()
{
	int n, i, j, arr[100][100];
	
	printf("Dame el valor de N: ");
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==j)
			printf("1");
			else
			printf("0");
		}
		
		printf("\n");
	}
	
	return(0);
}
