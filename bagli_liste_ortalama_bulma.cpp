#include<stdio.h>
#include<stdlib.h>

typedef struct Dugum
{
	int sayi;
	Dugum*sonraki;
}Dugum;

typedef struct Dugumb
{
	int sayib;
	Dugumb*sonrakib;
}Dugumb;

Listele(Dugum*ilkDugum)
{
	Dugum*geciciDugum=ilkDugum;
	while(geciciDugum!=NULL)
	{
		printf("%d ",geciciDugum->sayi);
		geciciDugum=geciciDugum->sonraki;
	}
}
int OrtalamaHesapla(Dugum*ilkDugum)
{
	int ortalama=0,sayac=0;
	Dugum*geciciDugum=ilkDugum;
	while(geciciDugum!=NULL)
	{
		ortalama+=geciciDugum->sayi;
		geciciDugum=geciciDugum->sonraki;
		sayac++;
	}
	ortalama=ortalama/sayac;
	printf("\nGirilen sayilarin ortalamasi= %d",ortalama);
	return ortalama;
}
int main()
{
	Dugum*ilkDugum=NULL;
	Dugum*geciciDugum=NULL;
	int sayi,ortalama;
	
	while(1)
	{
		printf("\n\nBir sayi gir: ");
		scanf("%d",&sayi);
		if(sayi==-1)
		{
			break;
		}
		Dugum*yeniDugum=(Dugum*)malloc(sizeof(Dugum));
		yeniDugum->sayi=sayi;
		if(ilkDugum==NULL)
		{
			ilkDugum=yeniDugum;
			geciciDugum=ilkDugum;
			ilkDugum->sonraki=NULL;
		}
		else
		{
			geciciDugum->sonraki=yeniDugum;
			geciciDugum=geciciDugum->sonraki;
			geciciDugum->sonraki=NULL;
		}
		Listele(ilkDugum);
		ortalama=OrtalamaHesapla(ilkDugum);
		printf("\n");
	}
	
	Dugumb*ilkDugumb=NULL;
	Dugumb*geciciDugumb=NULL;
	printf("\nortalama  %d\nYeni Liste\n",ortalama);
	
	geciciDugum=ilkDugum;
	while(geciciDugum!=NULL)
	{
		if(geciciDugum->sayi>=ortalama)
		{
			Dugumb*yeniDugumb=(Dugumb*)malloc(sizeof(Dugumb));
			yeniDugumb->sayib=geciciDugum->sayi;
			if(ilkDugumb==NULL)
			{
				ilkDugumb=yeniDugumb;
				geciciDugumb=ilkDugumb;
				ilkDugum->sonraki=NULL;
			}
			else
			{
				geciciDugumb->sonrakib=yeniDugumb;
				geciciDugumb=geciciDugumb->sonrakib;
				geciciDugumb->sonrakib=NULL;
			}
		}
		geciciDugum=geciciDugum->sonraki;
	}
    geciciDugumb=ilkDugumb;
	while(geciciDugumb!=NULL)
	{
		printf("%d ",geciciDugumb->sayib);
		geciciDugumb=geciciDugumb->sonrakib;
	}
	printf("\nProgram sonlandi...");
	
}
