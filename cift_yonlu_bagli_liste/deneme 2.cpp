#include<stdio.h>
#include<stdlib.h>


typedef struct Dugum
{
	int sayi;
	struct Dugum*sonraki;
}Dugum;


Dugum*ilk=NULL;
Dugum*gecici=NULL;


int main()
{
	while(1)
	{
		int sayi;
		printf("\n Bir sayi giriniz: ");
		scanf("%d",&sayi);
		if(sayi==-1)
		{
			break;
		}
		Dugum*yeni=(Dugum*)malloc(sizeof(Dugum));
		yeni->sayi=sayi;
		if(ilk==NULL)
		{
			ilk=yeni;
			yeni->sonraki=ilk;
			gecici=yeni;
		}
		else
		{
			gecici->sonraki=yeni;
			yeni->sonraki=ilk;
			gecici=yeni;
		}
	}
	
	gecici=ilk;
	do
	{
		printf(" %d ",gecici->sayi);
		gecici=gecici->sonraki;
	}
	while(gecici!=ilk);
}
