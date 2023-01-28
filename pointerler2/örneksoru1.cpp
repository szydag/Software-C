#include<stdio.h>
#include<stdlib.h>

typedef struct Dugum
{
	int sayi;
	Dugum*sonraki;
}Dugum;

typedef struct YeniDugum
{
	int yenisayi;
	YeniDugum*sonraki;
}YeniDugum;


Listele(Dugum*ilkDugum)
{
	int ortalama=0,sayac=0;
	Dugum*geciciDugum=ilkDugum;
	YeniDugum*IlkDugum=NULL;
	YeniDugum*GeciciDugum=NULL;
	while(geciciDugum!=NULL)
	{
		printf(" %d ",geciciDugum->sayi);
		ortalama+=geciciDugum->sayi;
		sayac++;
		geciciDugum=geciciDugum->sonraki;
	}
	printf("\n");
	ortalama=ortalama/sayac;
	printf("ortalama %d\n",ortalama);
	geciciDugum=ilkDugum;
	while(geciciDugum!=NULL)
	{
		if(geciciDugum->sayi >= ortalama)
		{
			YeniDugum*yeniDugum=(YeniDugum*)malloc(sizeof(YeniDugum));
			yeniDugum->yenisayi=geciciDugum->sayi;
			if(IlkDugum==NULL)
			{
				IlkDugum=yeniDugum;
				GeciciDugum=IlkDugum;
				yeniDugum->sonraki=NULL;
			}
			else
			{
				GeciciDugum->sonraki=yeniDugum;
				GeciciDugum=GeciciDugum->sonraki;
				GeciciDugum->sonraki=NULL;
			}
		}
		geciciDugum=geciciDugum->sonraki;
	}
	printf("Yeni olusan Dugum : ");
	GeciciDugum=IlkDugum;
	while(GeciciDugum!=NULL)
	{
		printf("%d ",GeciciDugum->yenisayi);
		GeciciDugum=GeciciDugum->sonraki;
	}
}
int main()
{
	Dugum*ilkDugum=NULL;
	Dugum*geciciDugum=NULL;
	int sayi,ortalama=0,sayac=0;
	while(sayi!=-1)
	{
		printf("\n\nBir sayi gir: ");
		scanf("%d",&sayi);
		Dugum*yeniDugum=(Dugum*)malloc(sizeof(Dugum));
		yeniDugum->sayi=sayi;
		
		if(ilkDugum==NULL)
		{
			ilkDugum=yeniDugum;
			geciciDugum=yeniDugum;
			yeniDugum->sonraki=NULL;
		}
		else
		{
			geciciDugum->sonraki=yeniDugum;
			geciciDugum=geciciDugum->sonraki;
			geciciDugum->sonraki=NULL;
		}
		Listele(ilkDugum);
	}	
}
