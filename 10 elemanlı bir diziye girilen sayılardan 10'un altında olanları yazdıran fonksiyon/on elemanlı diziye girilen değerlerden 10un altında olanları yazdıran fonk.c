#include<stdio.h>



int sayilar[10],i,j,k,z,sayi;
void yazdir()
	while(z<9) 
	{   
		if(sayilar[k]<10) 
		printf("ondan kucuk olan degerler: %d\n",sayilar[k]);
		k++;
		z++;
	}
}

void main()
{
	
	for(i=0;i<10;i++) 
	{   
	    
		scanf("%d",&sayi);
		sayilar[j]=sayi;
		j++;
	}
	yazdir();
}
