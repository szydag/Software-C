#include<stdio.h>
#include<stdlib.h>

typedef struct Agac
{
	int sayi;
	Agac*sag;
	Agac*sol;
}Agac;

Listele(Agac*dugum)
{
	if(dugum==NULL)
	{
		return 0;
	}
	printf("%d  ",dugum->sayi);
	Listele(dugum->sol);
	Listele(dugum->sag);
}


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
	if(dugum->sayi < sayi)
	{
		dugum->sag=Ekle(dugum->sag,sayi);
		return dugum;
	}
	if(dugum->sayi > sayi)
	{
		dugum->sol=Ekle(dugum->sol,sayi);
		return dugum;
	}
}
int toplam=0;
OrtalamaBul(Agac*dugum)
{
	if(dugum==NULL)
	{
		return toplam;
	}
	toplam+=dugum->sayi;
	OrtalamaBul(dugum->sol);
	OrtalamaBul(dugum->sag);
}

OrtalamadanKucuk(Agac*dugum,int ortalama)
{
	if(dugum==NULL)
	{
		return 0;
	}
	OrtalamadanKucuk(dugum->sag,ortalama);
	if(dugum->sayi < ortalama)
	{
		printf(" %d ",dugum->sayi);
	}
	OrtalamadanKucuk(dugum->sol,ortalama);
	
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
	
	printf("Olusturulan Agac: ");
	Listele(kok);
	
	int ortalama=OrtalamaBul(kok)/10;
	printf("\nOlusturulan Agacin Ortalamasi: %d\n",ortalama);
	printf("Ortalamadan kucuk sayilar buyukten kucuge : ");
	OrtalamadanKucuk(kok,ortalama);
}
