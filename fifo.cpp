#include<stdio.h>   //ilk giren ilk cýkar
#include<stdlib.h>

typedef struct Dugum
{
	int sayi;
	char *adi;
	struct Dugum*sonraki;
	
}Dugum;


Dugum*ilk=NULL;
Dugum*son=NULL;



Listele()
{
	Dugum*gecici=ilk;
	while(gecici!=NULL)
	{
		printf("\n adi %s numara %d",gecici->adi,gecici->sayi);
		gecici=gecici->sonraki;
	}
}


KuyrukEkle(int sayi,char *adi)
{
	Dugum*yeni=(Dugum*)malloc(sizeof(Dugum));
	yeni->sayi=sayi;
	yeni->adi=adi;
	
	if(ilk==NULL)
	{
		ilk=yeni;
	}
	else
	{
		son->sonraki=yeni;
	}
	son=yeni;
	son->sonraki=NULL;
}


KuyrukCikar()
{
	if(son==NULL)
	{
		printf("\n\n\n kuyruk bos");
	}
	if(ilk!=son)
	{
		printf("\n\n\n ilk eleman cikariliyor");
	}
	ilk=ilk->sonraki;
    	
}


int main()
{
	KuyrukEkle(10,"ahmet");
	KuyrukEkle(265,"sedef ");
	KuyrukEkle(100,"can");
	KuyrukEkle(2345,"sude");
	KuyrukEkle(234,"naz");
	Listele();
	KuyrukCikar();
	Listele();
	KuyrukCikar();
	Listele();
	KuyrukCikar();
	Listele();
	KuyrukCikar();
	Listele();
	KuyrukCikar();
	Listele();
	KuyrukCikar();
	Listele();
	KuyrukCikar();
	Listele();
}
