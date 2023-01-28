#include<stdio.h>
#include<stdlib.h>


typedef struct Dugum
{
	int sayi;
	struct Dugum*sonraki;
}Dugum;

int main()
{
	int sayi=0;
	Dugum *ilkDugum=NULL;
	Dugum *geciciDugum=NULL;

	for(int i=0;i<5;i++)
	{
		Dugum *yeniDugum=(Dugum *)malloc(sizeof(Dugum)); //malloc adres ayýrýyor(girilecek veri için)
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
    	}
	}
	geciciDugum=ilkDugum;
	while(geciciDugum!=NULL)
	{
		printf(" %d\t",geciciDugum->sayi);
		geciciDugum=geciciDugum->sonraki;
	}	
}
