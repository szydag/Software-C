#include<stdio.h>
#include<stdlib.h>

typedef struct Dugum
{
	int sayi;
	struct Dugum*sonraki;
}Dugum;

Dugum*ilk=NULL;
Dugum*gecici=NULL;
Dugum*yeni=NULL;

Listele()
{
	gecici=ilk;
	do
	{
		printf(" %d ",gecici->sayi);
		gecici=gecici->sonraki;
	}
	while(gecici!=ilk);
}

int main()
{
	int dizi[]={10,20,30,40,50,60,70,80,90,100,'\0'};
	int i=0;
	while(dizi[i]!='\0')
	{
		yeni=(Dugum*)malloc(sizeof(Dugum));
		yeni->sayi=dizi[i];
		if(ilk==NULL)
		{
			ilk=yeni;
			ilk->sonraki=ilk;
			gecici=yeni;
		}
		else
		{
			gecici->sonraki=yeni;
			yeni->sonraki=ilk;
			gecici=yeni;
		}
		i++;
	}
	Listele();
	gecici=ilk->sonraki;
    do
	{
		int a=ilk->sayi;
		int b=gecici->sayi;
		int toplam=a+b;
		gecici->sayi=toplam;
		yeni->sonraki=gecici;
		ilk=gecici;
		printf("\n");
		Listele();
		gecici=gecici->sonraki;
	}
	while(gecici!=ilk);
}
