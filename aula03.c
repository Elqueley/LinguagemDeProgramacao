#include <stdio.h>

int main(int argc, char const *argv[])
{
	int matriz[3][3];
	int maior,i,j;
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("Ente com um numeor [%d][%d]\n",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("[%d]\t",matriz[i][j]);
		}
		printf("\n");
	}
	
	maior= matriz[0][0];
		for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			if( matriz[i][j] > maior){
				maior=matriz[i][j];
			}
		}
	}
	printf("Maior nota: %i", maior);
	return 0;
}
