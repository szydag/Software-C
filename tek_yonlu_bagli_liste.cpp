#include<stdio.h>
#include<stdlib.h>

typedef struct Dugum
{
	int sayi;
	struct Dugum*sonraki;
}Dugum;


Dugum*ilk=NULL;


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
    Dugum*gecici=NULL;
    Dugum*onceki=NULL;
	int dizi[]={60,50,23,42,98,12,22,63,'\0'};
	int i=0,ortalama=0;
	while(dizi[i]!='\0')
	{
		Dugum*yeni=(Dugum*)malloc(sizeof(Dugum));
		yeni->sayi=dizi[i];
		ortalama+=dizi[i];
		if(ilk==NULL)
		{
			ilk=yeni;
			gecici=ilk;
			gecici->sonraki=NULL;
		}
		else
		{
			gecici->sonraki=yeni;
			gecici=gecici->sonraki;
			gecici->sonraki=NULL;
			
		}
		i++;
	}
	Listele();
	ortalama=ortalama/i;
	printf("\nGirilen dizinin ortalamasi %d\n",ortalama);
	gecici=ilk;
	onceki=ilk;
	while(gecici!=NULL)
	{
		if(gecici->sayi < ortalama)
		{
			if(gecici==ilk)
			{
				ilk=gecici->sonraki;
			}
			else if(gecici->sonraki==NULL)
			{
				onceki->sonraki=NULL;
			}
			else
			{
				gecici=gecici->sonraki;
				onceki->sonraki=gecici;
				onceki=ilk;
				gecici=ilk;
			}
		}
		if(gecici==ilk)
		{
			onceki=ilk;
			gecici=gecici->sonraki;
		}
		else
		{
			onceki=onceki->sonraki;
			gecici=gecici->sonraki;
		}
		
	}
	Listele();
}
