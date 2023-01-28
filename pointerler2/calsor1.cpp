#include<stdio.h>
#include<stdlib.h>


typedef struct Dugum
{
	int ogrNo;
	struct Dugum*sonraki;
}Dugum;


int main()
{
	int sayi=0;
	Dugum *ilkDugum=NULL;
	Dugum *geciciDugum=NULL;
	while(sayi!=-1)
	{
		printf("\n\nprogramin sollanmasi icin -1 \ndizi olusturmaya devam etmek icin herhangi bir sayi giriniz: ");
		scanf("%d",&sayi);
	    if(sayi==-1)
	    {
	    	printf("program sonlandi");
	    	return 0;
		}
		else
		{
			Dugum *yeniDugum=(Dugum *)malloc(sizeof(Dugum)); //malloc adres ayýrýyor
			yeniDugum->ogrNo=sayi;
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
		printf("\t %d",geciciDugum->ogrNo);
		geciciDugum=geciciDugum->sonraki;
	}	
}
