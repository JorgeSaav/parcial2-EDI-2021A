#include <stdio.h>
#include <math.h>
//Autor: Jorge Armando Ramirez Saavedra

int main()
{
	int r, c, i, j;
	float arrBi[100][100], suma, prom;
	
	printf("Cuantos Renglones son: ");
	scanf("%d", &r);
	
	printf("Cuantas Columnas son: ");
	scanf("%d", &c);
	
	for(j=0; j<c; j++)
	{
		suma=0;
		
		for(i=0; i<r; i++)
		{
			printf("Dame el valor del renglon: ");
			scanf("%f", &arrBi[j][i]);
			
			suma = suma + arrBi[j][i];
			
		}
		
		prom= suma/i;
		printf("Promedio de la columna: %.2f", prom);
		printf("\n");
	}
	
    return 0;
}
