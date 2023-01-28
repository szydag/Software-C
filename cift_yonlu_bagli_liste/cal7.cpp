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

Listele()
{
	Dugum*gecici=ilk;
	while(gecici!=NULL)
	{
		printf(" %d ",gecici->sayi);
		gecici=gecici->sonraki;
	}
}

int main()
{
	int dizi[]={1,2,10,50,5,3,6,'\0'};
	int i=0;
	while(dizi[i]!='\0')
	{
		Dugum*yeni=(Dugum*)malloc(sizeof(Dugum));
		yeni->sayi=dizi[i];
		if(ilk==NULL)
		{
			ilk=yeni;
			son=yeni;
			ilk->sonraki=NULL;
			ilk->onceki=NULL;
		}
		else
		{
			son->sonraki=yeni;
			yeni->onceki=son;
			son=yeni;
			son->sonraki=NULL;
		}
		i++;
	}
	Listele();
	Dugum*gecicibas=ilk;
	Dugum*gecicison=son;
	while(gecicibas!=gecicison)
	{
		if(gecicibas->sayi < gecicison->sayi)
		{
			int temp=gecicibas->sayi;
			gecicibas->sayi=gecicison->sayi;
			gecicison->sayi=temp;
		}
		gecicibas=gecicibas->sonraki;
		gecicison=gecicison->onceki;
		printf("\n");
		Listele();
	}
}
