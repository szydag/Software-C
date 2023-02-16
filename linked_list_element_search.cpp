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

int main()
{
	int dizi[]={2,8,95,63,23,54,75,92,12,88,66,44,'\0'};
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
			yeni->onceki=son;
			son->sonraki=yeni;
			son=yeni;
			son->sonraki=NULL;
		}
		i++;
	}
	
	printf("Olusturulan Dugum: ");
	Dugum*gecici=ilk;
	while(gecici!=NULL)
	{
		printf(" %d ",gecici->sayi);
		gecici=gecici->sonraki;
	}
	
	while(1)
	{
		printf("\n\nOlusturulan dugumde aradiginiz sayi nedir: ");
	    int aranan,sayac=0;
    	scanf("%d",&aranan);
    	gecici=son;
    	while(gecici!=NULL)
    	{
	    	sayac++;
	        if(gecici->sayi==aranan)
	    	{
		    	break;
	    	}
	    	else
	    	{
		    	gecici=gecici->onceki;
	    	}
     	}
     	if(gecici==NULL)
     	{
     		printf("Aradiginiz sayi herhangi bir dugumde bulunamamistir");
		}
		else
		{
	    	printf("Aradiginiz sayi sondan %d. dugumdedir",sayac); 
		}
	}
	return 0;
}
