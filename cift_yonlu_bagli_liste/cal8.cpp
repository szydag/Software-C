#include<stdio.h>
#include<stdlib.h>

typedef struct Dugum
{
	int num;
	int notu;
	char*adi;
	char*soyadi;
	struct Dugum*sonraki;
	struct Dugum*onceki;
}Dugum;

Dugum*ilk=NULL;
Dugum*son=NULL;

DugumEkle(int num,int notu,char*adi,char*soyadi)
{
	Dugum*yeni=(Dugum*)malloc(sizeof(Dugum));
	yeni->num=num;
	yeni->notu=notu;
	yeni->adi=adi;
	yeni->soyadi=soyadi;
	if(ilk==NULL)
	{
		ilk=yeni;
		son=ilk;
		ilk->sonraki=NULL;
		ilk->onceki=NULL;
	}
	else
	{
		son->sonraki=yeni;
		yeni->onceki=son;
		son=yeni;
		son->sonraki=NULL;
	}
}

Listele()
{
	Dugum*gecici=ilk;
	while(gecici!=NULL)
	{
		printf(" %d\t%d\t%s\t%s\n",gecici->num,gecici->notu,gecici->adi,gecici->soyadi);
		gecici=gecici->sonraki;
	}
}

int main()
{
	DugumEkle(89562314,56,"ayse","su");
	DugumEkle(12457896,78,"nimet","can");
	DugumEkle(12345678,98,"ali","tas");
	DugumEkle(87654321,85,"asiye","acer");
	DugumEkle(11111111,44,"kubra","acem");
	DugumEkle(74859632,100,"fatma","cuha");
	DugumEkle(96857412,36,"saziye","dag");
	DugumEkle(63524178,45,"seyda","acik");
	DugumEkle(51247584,66,"esra","tosun");
	Listele();
	
	Dugum*gecicibas=ilk;
	Dugum*gecicison=son;
	Dugum*yedek=NULL;
	while(gecicibas!=gecicison)
	{
		if(gecicibas->notu < gecicison->notu)
		{
			yedek=gecicibas;
			gecicibas->sonraki=gecicison->sonraki;
			gecicibas->onceki=gecicison->onceki;
			gecicison->sonraki=yedek->sonraki;
			gecicison->onceki=yedek->onceki;
			printf("\n");
			
		}
		gecicibas=gecicibas->sonraki;
		gecicison=gecicison->onceki;
	}
	Listele();
}
