#include<stdio.h>
#include<stdlib.h>


typedef struct Agac
{
	struct Agac*sol;
	struct Agac*sag;
	int sayi;
	char adi[15];
}Agac;

Agac * Ekle(Agac*dugum,int sayi)
{
	if(dugum==NULL)
	{
		Agac *kok=(Agac*)malloc(sizeof(Agac));
		kok->sayi=sayi;
		kok->sol=NULL; //yaprak oldugunu belirtmek icin
		kok->sag=NULL;
		return kok;
	}
	if(sayi < dugum->sayi)
	{
		dugum->sol=Ekle(dugum->sol,sayi);
		return dugum;
    }
    
    dugum->sag=Ekle(dugum->sag,sayi);
	return dugum;
    
}

PrefixOrder(Agac*dugum)
{
	if(dugum==NULL)
	{
		return 0;
	}
	printf("%d  ",dugum->sayi);
    PrefixOrder(dugum->sol);
	PrefixOrder(dugum->sag);
}

InOrder(Agac*dugum)
{
	if(dugum==NULL)
	{
		return 0;
	}
	InOrder(dugum->sol);
    printf("%d   ",dugum->sayi);
	InOrder(dugum->sag);
}

MaxOrder(Agac*dugum)
{
	if(dugum==NULL)
	{
		return 0;
	}
	MaxOrder(dugum->sag);
	printf("%d  ",dugum->sayi);
    MaxOrder(dugum->sol);
	
}

Ara(Agac*dugum,int sayi)
{
	if(dugum==NULL)
	{
		return 0;
	}
	if(dugum->sayi ==sayi)
	{
		return 1;
	}
	Ara(dugum->sol,sayi);
	Ara(dugum->sag,sayi);
}

int main()
{                        //kucukten buyuge yazdirmak icin inorder kullanilmali
	Agac*kok=NULL;
	kok=Ekle(kok,10);
	Ekle(kok,5);
	Ekle(kok,20);
	Ekle(kok,16);
	Ekle(kok,50);
	Ekle(kok,4);
	
	PrefixOrder(kok);
	printf("\n");
	InOrder(kok);
	printf("\n");
	MaxOrder(kok);
	if(Ara(kok,50)==1)
	{
		printf("\nvardir\n");
	}
	if(Ara(kok,-50)==0)
	{
		printf("yoktur");
	}
}
