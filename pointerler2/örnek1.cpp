#include<stdio.h>
#include<stdlib.h>


typedef struct Dugum
{
	int ogrNo;
	struct Dugum*sonraki;
}Dugum;


int main()
{
	Dugum *ilkDugum=NULL;
	Dugum *geciciDugum=NULL;
	for(int i=0;i<5;i++)
	{
		Dugum *yeniDugum=(Dugum *)malloc(sizeof(Dugum)); //malloc adres ayýrýyor
		yeniDugum->ogrNo=(i+1)*10;
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
			printf("gecici dugum :*%d\n",*geciciDugum);
			printf("gecici dugum :%d\n",geciciDugum);
			printf("ilk dugum :*%d\n",*ilkDugum);
			printf("ilk dugum :%d\n",ilkDugum);
			printf("yeni dugum :*%d\n",*yeniDugum);
			printf("yeni dugum :%d\n",yeniDugum);
		}
	}
	geciciDugum=ilkDugum;
	while(geciciDugum!=NULL)
	{
		printf("\t %d",geciciDugum->ogrNo);
		printf("gecici dugum %d",geciciDugum);
		geciciDugum=geciciDugum->sonraki;
		
	}	
}
