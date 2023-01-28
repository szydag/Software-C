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
	for(int i=0;i<100;i++)
	{
		Dugum*yeni=(Dugum*)malloc(sizeof(Dugum));
		yeni->sayi=(i+1)*10;
		if(ilk==NULL)
		{
			ilk=yeni;
			son=ilk;
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
	}
	
	Dugum*gecici=ilk;
	while(gecici!=NULL)
	{
		printf(" %d ",gecici->sayi);
		gecici=gecici->sonraki;
	}
	
	printf("\n\n");
	gecici=son;
	while(gecici!=NULL)
	{
		printf(" %d ",gecici->sayi);
		gecici=gecici->onceki;
	}
	return 0;
}
