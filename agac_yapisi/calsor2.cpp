#include<stdio.h>
#include<stdlib.h>

typedef struct Agac
{
	int sayi;
	Agac*sol;
	Agac*sag;
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
	if( sayi < dugum->sayi)
	{
		dugum->sol=Ekle(dugum->sol,sayi);
		return dugum;
	}
	if(sayi > dugum->sayi)
	{
		dugum->sag=Ekle(dugum->sag,sayi);
		return dugum;
	}
}

int MaxBul(Agac*dugum)
{
	while(dugum->sag!=NULL)
	{
		dugum=dugum->sag;
	}
	printf("\n\n\nAgacin en buyuk elemani %d dir",dugum->sayi);
	return dugum->sayi;
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

 main()
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
	printf("Olusturulan Agac ");
	Listele(kok);
	int enBuyuk=MaxBul(kok);
}
