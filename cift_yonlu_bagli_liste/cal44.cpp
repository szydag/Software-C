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
	int dizi[]={10,20,30,40,50,60,70,80,90,100};
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
	printf("Olusturusan Dugum:  ");
	Dugum*gecici=ilk;
	while(gecici!=NULL)
	{
		printf(" %d ",gecici->sayi);
		gecici=gecici->sonraki;
	}
	return 0;
}
