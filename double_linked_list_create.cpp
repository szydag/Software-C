#include<stdio.h>
#include<stdlib.h>

typedef struct Dugum
{
	int sayi;
	struct Dugum*sonraki;
	struct Dugum*onceki;
}Dugum;

Dugum*ilk=NULL;
Dugum*son=NULL;

int main()
{
	while(1)
	{
		int sayi,sayac=0;
		printf("Bir sayi giriniz: ");
		scanf("%d",&sayi);
		for(int i=2;i<sayi;i++)
		{
			if(sayi%i==0)
			{
				sayac++;
			}
		}
		if(sayac==0)
		{
			break;
		}
		Dugum*yeni=(Dugum*)malloc(sizeof(Dugum));
		yeni->sayi=sayi;
		if(ilk==NULL)
		{
			ilk=yeni;
			son=yeni;
			ilk->sonraki=NULL;
			ilk->onceki=NULL;
		}
		else
		{
			yeni->onceki=son;
			son->sonraki=yeni;
			son=yeni;
			son->sonraki=NULL;
		}
	}
	printf("Bastan sona: ");
	Dugum*gecici=ilk;
	while(gecici!=NULL)
	{
		printf(" %d ",gecici->sayi);
		gecici=gecici->sonraki;
	}
	printf("\nSondan basa:");
    gecici=son;
    while(gecici!=NULL)
    {
    	printf(" %d ",gecici->sayi);
    	gecici=gecici->onceki;
	}
	
	return 0;
}
