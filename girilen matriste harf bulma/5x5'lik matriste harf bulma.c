#include<stdio.h>

int sayi,i,j,x,y;
char harf1,harf2,harf3;
void main()
{
	
	char matris[5][5]={ 
	{'a','l','i','f','p'},
	{'b','d','g','x','t'},
	{'c','y','x','s','e'},
	{'j','k','u','f','g'},
	{'p','s','h','i','o'} };
	
	for(i=0;i<5;i++) 
	{                                    
	for(j=0;j<5;j++) 
		{
			printf("%c ",matris[i][j]);
		}
		printf("\n");
	}
	
	printf("Bir harf girin: ");
	scanf("%c",&harf1);
	
	for(x=0;x<5;x++) 
	{
		for(y=0;y<5;y++)
		{
			if(harf1==matris[x][y])
	
		printf("Harfiniz tabloda mevcuttur: %c",matris[x][y]);
		}
	}	
}
