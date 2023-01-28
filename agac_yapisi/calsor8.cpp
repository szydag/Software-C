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
	if(sayi > dugum->sayi)
	{
		dugum->sag=Ekle(dugum->sag,sayi);
		return dugum;
	}
	if(sayi < dugum->sayi)
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
	printf("%d  ",dugum->sayi);
	Listele(dugum->sag);
	Listele(dugum->sol);
}

Arttir(Agac*dugum,int arti)
{
	if(dugum==NULL)
	{
		return 0;
	}
	dugum->sayi=dugum->sayi+arti;
	Arttir(dugum->sag,arti);
	Arttir(dugum->sol,arti);
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
	printf(" Olusturulan Agac: ");
	Listele(kok);
	
	int arti;
	printf("\nEklenecek sayiyi giriniz: ");
	scanf("%d",&arti);
	Arttir(kok,arti);
	
	printf("\nGuncel Agac:  ");
	Listele(kok);
	
}
