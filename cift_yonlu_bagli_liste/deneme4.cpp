#include<stdio.h>
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
		printf("\n  no: %d   ad: %s",gecici->sayi,gecici->adi);
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
		son=yeni;
		son->sonraki=NULL;
	}
	else
	{
		son->sonraki=yeni;
		yeni->onceki=son;
		son=yeni;
		son->sonraki=NULL;
	}
}

int YiginCikar()
{
	if(son==ilk)
	{
		printf("\nlistede cikarilacak eleman kalmadi");
		return 0;
	}
	else
	{
	    printf("\n %s  %d  cikariliyor ",son->adi,son->sayi);
    	son=son->onceki;
    	son->sonraki=NULL;
	}
}

int main()
{
	YiginEkle(895,"asiye");
	YiginEkle(256,"murtaza");
	YiginEkle(144,"zambak");
	YiginEkle(96,"mucu");
	YiginEkle(55,"ozii");
	YiginEkle(65,"yusuf");
	YiginEkle(542,"sedef");
	Listele();
	YiginCikar();
	printf("\n\n");
	Listele();
	YiginCikar();
	printf("\n\n");
	Listele();
	YiginCikar();
	printf("\n\n");
	Listele();
	YiginCikar();
	printf("\n\n");
	Listele();
	YiginCikar();
	printf("\n\n");
	Listele();
	YiginCikar();
	printf("\n\n");
	Listele();
	YiginCikar();
	printf("\n\n");
	Listele();
	YiginCikar();
	printf("\n\n");
	Listele();
	YiginCikar();
	printf("\n\n");
	Listele();
	
}
