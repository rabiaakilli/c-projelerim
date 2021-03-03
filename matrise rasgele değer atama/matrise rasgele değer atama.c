#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int a,b,c,d,i,j,seed;  
void main()
{
	seed=time(NULL);
	srand(seed);
	
	
	int matris[5][5];
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			matris[i][j]=rand()%89+10;  
		}
	}
	
	for(a=0;a<5;a++)
	{
		for(b=0;b<5;b++)
		{
			
			printf("%d ",matris[a][b]);  
			
		}
		
		printf("\n");
	}
	
}
