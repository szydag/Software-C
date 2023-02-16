#include<stdio.h>
#include<stdlib.h>

typedef struct Dugum
{
	int sayi;
	struct Dugum*sonraki;
	struct Dugum*onceki;
}Dugum;


Dugum*ilk=NULL;
Dugum*son=NULL;

Listele()
{
	Dugum*gecici=ilk;
	while(gecici!=NULL)
	{
		printf(" %d ",gecici->sayi);
		gecici=gecici->sonraki;
	}
}
int main()
{
	int dizi[]={10,20,30,40,50,60,70,80,90,100,'\0'};
	int i=0;
	while(dizi[i]!='\0')
	{
		Dugum*yeni=(Dugum*)malloc(sizeof(Dugum));
		yeni->sayi=dizi[i];
		if(ilk==NULL)
		{
			ilk=yeni;
			son=yeni;
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
		i++;
	}
	printf("Olusturulan Dugum:  ");
	Listele();
	while(1)
	{
	    int yenisayi;
    	Dugum*eklenen=(Dugum*)malloc(sizeof(Dugum));
    	Dugum*yedek=NULL;
    	printf("\n\nEklemek istediginiz sayiyi giriniz: ");
    	scanf("%d",&yenisayi);
    	Dugum*gecici=son;
    	while(gecici!=NULL)
	    {
	    	if(yenisayi > son->sayi)
	        {
		    	eklenen->sayi=yenisayi;
		    	son->sonraki=eklenen;
		    	eklenen->onceki=son;
		    	son=eklenen;
		    	son->sonraki=NULL;
	    	}
	    	else if(yenisayi < ilk->sayi)
	    	{
		    	eklenen->sayi=yenisayi;
		    	ilk->onceki=eklenen;
		    	eklenen->sonraki=ilk;
		    	ilk=eklenen;
		    	ilk->onceki=NULL;
	    	}
	    	else if(gecici->sayi > yenisayi)
	    	{
	    	 	yedek=gecici->onceki;
		     	if(yedek->sayi < yenisayi)
		    	{
		 	    	eklenen->sayi=yenisayi;
		 	    	gecici->onceki=eklenen;
		 	    	eklenen->sonraki=gecici;
		     		yedek->sonraki=eklenen;
		    		eklenen->onceki=yedek;
		        }
		    }
	    	gecici=gecici->onceki;
    	}
    	Listele();
    }
	return 0;
}
