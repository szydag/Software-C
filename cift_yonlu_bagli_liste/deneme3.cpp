#include<stdio.h>
#include<stdlib.h>


typedef struct Dugum
{
	int sayi;
	char *adi;
	struct Dugum*sonraki;
}Dugum;

Dugum*ilk=NULL;

Listele()
{
	Dugum*gecici=ilk;
	while(gecici!=NULL)
	{
		printf("\n no:%d    ad:%s ",gecici->sayi,g)
	}
}
