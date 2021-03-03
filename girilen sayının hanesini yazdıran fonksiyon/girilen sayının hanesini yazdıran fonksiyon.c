#include<stdio.h>
int sayi,basamak;
void deneme(){
	
	
	while(sayi>=1)
	{
		sayi=sayi/10;  
		basamak++; 
	}
}


void main()
{
	scanf("%d",&sayi);
	deneme();
	printf("basamak sayisi: %d",basamak);
	
	
}
