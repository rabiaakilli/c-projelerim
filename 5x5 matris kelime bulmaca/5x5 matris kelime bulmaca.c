 #include<stdio.h> //5x5'lik bir matrisimiz var.Bu matrisin içinde harfler var.Bir kelime giriyoruz.Girilen kelime matris içinde varsa ekrana yazýcak.(Kelime matriste yatay yada dikey bulunabilir ama çapraz bulunamaz.)
int i,j,k,a,b,c,d;
char dizi[5],harf;
void main()
{
	char matris[5][5]={       //5x5'lik bir matris tanýmlayýp içine harfleri aktarýyoruz.
	
	{'S','R','T','O','S'},
	{'X','K','A','R','I'},
	{'S','E','B','I','L'},
	{'N','U','L','Q','G'},
	{'B','J','O','K','I'}
	
	};

	for(i=0;i<5;i++) 
	{
		for(j=0;j<5;j++) 
		{
			printf("%c ",matris[i][j]); 
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Bir kelime giriniz.(Max. 5 harf): "); 
	for(k=0;k<5;k++) 
	{
	scanf("%c",&harf);
	dizi[k]=harf;
	}
	

	for(a=0;a<5;a++) 
	{
		for(b=0;b<5;b++)
		{
			if(dizi[0]==matris[a][b] && dizi[1]==matris[a][b+1] && dizi[2]==matris[a][b+2] && dizi[3]==matris[a][b+3] && dizi[4]==matris[a][b+4])
			{ 
				printf("\n");
				printf("Girdiginiz kelime yatay olarak bulunuyor.\n");
				printf("Satir Numarasi: %d",a+1); 
			}
		}
	}
	
	for(c=0;c<5;c++) 
	{
		for(d=0;d<5;d++) 
		{
			if(dizi[0]==matris[c][d] && dizi[1]==matris[c+1][d] && dizi[2]==matris[c+2][d] && dizi[3]==matris[c+3][d] && dizi[4]==matris[c+4][d] )
			{ 
				printf("\n");
				printf("Girdiginiz kelime dikey olarak bulunuyor.\n");
				printf("Sutun Numarasi: %d",d+1); 
			}
		}
	}
}
