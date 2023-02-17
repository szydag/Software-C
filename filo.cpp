#include<stdio.h>    //ilk giren son cýkar
#include<stdlib.h>

typedef struct Dugum
{
	int sayi;
	char *adi;
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
		printf("\n adi %s numara %d",gecici->adi,gecici->sayi);
		gecici=gecici->sonraki;
	}
}

void YiginEkle(int sayi,char*adi)
{
	Dugum*yeni=(Dugum*)malloc(sizeof(Dugum));
	yeni->sayi=sayi;
	yeni->adi=adi;
	
	if(ilk==NULL)
	{
		ilk=yeni;
		ilk->onceki=NULL;
	}
	else
	{
		son->sonraki=yeni;
		yeni->onceki=son;
	}
	son=yeni;
	son->sonraki=NULL;
}

void YiginCikar()
{
	printf("\n %s %d cikariliyor ",son->adi,son->sayi);
	son=son->onceki;
	son->sonraki=NULL;
}
int main()
{
	YiginEkle(123,"ayse");
	YiginEkle(123,"fatma");
	YiginEkle(123,"can");
	YiginEkle(123,"manay");
	YiginEkle(123,"su");
	Listele();
	printf("\n\n\n");
	YiginCikar();
	Listele();
	printf("\n\n\n");
	YiginCikar();
	Listele();
	printf("\n\n\n");
	YiginCikar();
	Listele();
	printf("\n\n\n");
	YiginCikar();
	printf("\n\n\n");
	YiginCikar();
	return 0;
}
