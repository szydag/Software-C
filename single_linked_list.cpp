#include<stdio.h>
#include<stdlib.h>


typedef struct Dugum
{
	int sayi;
	struct Dugum*sonraki;
}Dugum;


 Sirala(Dugum*ilkDugum,int i)
 {
 	Dugum*geciciDugum=ilkDugum;
 	for(int j=0;j<i;j++)
 	{
 		while(geciciDugum!=NULL)
 		{
 			if(geciciDugum->sonraki!=NULL)
 			{
 				Dugum*yeniDugum=geciciDugum->sonraki;
 				if(geciciDugum->sayi < yeniDugum->sayi)
 				{
 					int temp=geciciDugum->sayi;
 					geciciDugum->sayi=yeniDugum->sayi;
 					yeniDugum->sayi=temp;
				}
			}
			geciciDugum=geciciDugum->sonraki;
		}
		geciciDugum=ilkDugum;
	}
 }
 
 Yazdir(Dugum*ilkDugum)
 {
 	Dugum*geciciDugum=ilkDugum;
 	while(geciciDugum!=NULL)
 	{
 		printf(" %d  ",geciciDugum->sayi);
 		geciciDugum=geciciDugum->sonraki;
	 }
	 printf("\n");
 }
 
 Ortala(Dugum*ilkDugum)
 {
 	Dugum*geciciDugum=ilkDugum;
 	
 	int ortalama=0;
 	while(geciciDugum!=NULL)
 	{
 		Dugum*yeniDugum=geciciDugum->sonraki;
 		if(yeniDugum!=NULL)
 		{
 			ortalama=(geciciDugum->sayi +yeniDugum->sayi)/2;
 			Dugum*ortaDugum=(Dugum*)malloc(sizeof(Dugum));
 			ortaDugum->sayi=ortalama;
 			geciciDugum->sonraki=ortaDugum;
 			ortaDugum->sonraki=yeniDugum;
		 }
		 else
		 {
		 	
		 }
		 geciciDugum=geciciDugum->sonraki;
	 }
 }
int main()
{
	Dugum*ilkDugum=NULL;
	Dugum*geciciDugum=NULL;
	int sayi,i=0;
	while(1)
	{
		printf("bir sayi giriniz :");
		scanf("%d",&sayi);
		if(sayi==-1)
		{
			printf("\n program sonlandi...");
			break;
		}
		else
		{
			Dugum*yeniDugum=(Dugum*)malloc(sizeof(Dugum));
			yeniDugum->sayi=sayi;
			if(ilkDugum==NULL)
			{
				ilkDugum=yeniDugum;
				geciciDugum=ilkDugum;
				ilkDugum->sonraki=NULL;
			}
			else
			{
				geciciDugum->sonraki=yeniDugum;
				geciciDugum=geciciDugum->sonraki;
				geciciDugum->sonraki=NULL;
			}
		}
	    Sirala(ilkDugum,i);
	    Yazdir(ilkDugum);
	    
	    i++;
	}
	Ortala(ilkDugum);
	int guncel,degis,sayac=0;
	printf("\n\nDegistirmek istediginiz sayiyi giriniz :");
	scanf("%d",&degis);
	
	printf("Yeni sayiyi giriniz : ");
	scanf("%d",&guncel);
	geciciDugum=ilkDugum;
	while(geciciDugum!=NULL)
	{
		if(geciciDugum->sayi==degis)
		{
			sayac++;
			geciciDugum->sayi=guncel;
			Sirala(ilkDugum,i);
	    	Yazdir(ilkDugum);
		}
		geciciDugum=geciciDugum->sonraki;
		
	}
	if(sayac==0)
	{
		printf("\nDegistirmek istediginiz sayi listede bulunamamistir...");
	}
}
