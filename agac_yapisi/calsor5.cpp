#include<stdio.h>
#include<stdlib.h>

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
	if(sayi < dugum->sayi)
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

Listele(Agac*dugum)
{
	if(dugum==NULL)
	{
		return 0;
	}
	printf("%d  ",dugum->sayi);
	Listele(dugum->sag);
	Listele(dugum->sol);
}

int toplam=0;
int OrtalamaBul(Agac*dugum)
{
	if(dugum==NULL)
	{
		return toplam;
	}
	toplam+=dugum->sayi;
	OrtalamaBul(dugum->sol);
	OrtalamaBul(dugum->sag);
	
}

OrtalamadanBuyuk(Agac*dugum,int ortalama)
{
	if(dugum==NULL)
	{
		return 0;
	}
	OrtalamadanBuyuk(dugum->sol,ortalama);
	if(dugum->sayi > ortalama)
	{
		printf("%d  ",dugum->sayi);
	}
	OrtalamadanBuyuk(dugum->sag,ortalama);
	
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
	printf("Olusturulan Agac ");
	Listele(kok);
	int ortalama=OrtalamaBul(kok)/10;
	printf("\n\nOlusturulan Agacin Ortalamasi %d\n",ortalama);
	printf("Ortalamadan buyuk olan sayilar kucukten buyuge:");
	OrtalamadanBuyuk(kok,ortalama);
	return 0;
}
