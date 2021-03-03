#include<stdio.h>
#include<time.h>

int rasgele,seed,i;
void main()
{
	seed=time(NULL); 
	srand(seed);
	
	for(i=0;i<30;i++)
	{
		rasgele=rand()%201+1;
		if(rasgele>100)
		printf("100 ustu olanlar: %d\n",rasgele);
	}
}
