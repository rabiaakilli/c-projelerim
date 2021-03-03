#include<stdio.h>

int sayi,i,seed,index,sayilar[10],j;
void main(){
	
	for(i=0;i<10;i++) 
	{
		scanf("%d",&sayi); 
		sayilar[i]=sayi;
		
	}
	
	printf("Ilk girilen deger: %d\n",sayilar[0]);
	printf("Son girilen deger: %d\n",sayilar[9]);
}
