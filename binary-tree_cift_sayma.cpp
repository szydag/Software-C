#include<stdlib.h>
#include<stdio.h>

typedef struct Agac
{
	int sayi;
	Agac*sag;
	Agac*sol;
}Agac;

Agac*Ekle(Agac*dugum,int sayi)
{
	if(dugum==NULL)
	{
		Agac*kok=(Agac*)malloc(sizeof(Agac));
		kok->sayi=sayi;
		kok->sag=NULL;
		kok->sol=NULL;
		return kok;
	}
	if(sayi > dugum->sayi)
	{
		dugum->sag=Ekle(dugum->sag,sayi);
		return dugum;
	}
	if( sayi < dugum->sayi)
	{
		dugum->sol=Ekle(dugum->sol,sayi);
		return dugum;
	}
}

Listele(Agac*dugum)
{
	if(dugum==NULL)
	{
		return 0;
	}
	printf(" %d ",dugum->sayi);
	Listele(dugum->sag);
	Listele(dugum->sol);
}

int sayac=0;
Sayac(Agac*dugum)
{
	if(dugum==NULL)
	{
		return sayac;
	}
	if(dugum->sayi %2==0)
	{
		sayac++;
	}
	Sayac(dugum->sag);
	Sayac(dugum->sol);
}
int main()
{
	Agac*kok=NULL;
	for(int i=0;i<10;i++)
	{
		int sayi=rand()%100;
		if(kok==NULL)
		{
			kok=Ekle(kok,sayi);
		}
		else
		{
			Ekle(kok,sayi);
		}
	}
	printf("Olusturulan Agac:  ");
	Listele(kok);
	
    int cift=Sayac(kok);
	printf("\n%d adet cift sayi vardir: ",cift);
}
