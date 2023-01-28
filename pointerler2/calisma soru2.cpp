#include<stdio.h>
#include<stdlib.h>

typedef struct Dugum
{
	int sayi;
	struct Dugum*sonraki;
}Dugum;

int main()
{
	int sayi=0,ortalama=0,sayac=0;
	Dugum *ilkDugum=NULL;
	Dugum *geciciDugum=NULL;
	while(sayi!=-1)
	{
		printf("bir sayi giriniz: ");
		scanf("%d",&sayi);
		ortalama+=sayi;
		sayac++;
		Dugum *yeniDugum=(Dugum *)malloc(sizeof(Dugum));
		yeniDugum->sayi=sayi;
		if(ilkDugum==NULL)
		{
			ilkDugum=yeniDugum;
			geciciDugum=yeniDugum;
			ilkDugum->sonraki=NULL;
		}
		else
		{
			geciciDugum->sonraki=yeniDugum;
			geciciDugum=geciciDugum->sonraki;
			geciciDugum->sonraki=NULL;
		}
	}
	geciciDugum=ilkDugum;
	while(geciciDugum!=NULL)
	{
		printf("%d\n",geciciDugum->sayi);
		geciciDugum=geciciDugum->sonraki;
    }
    ortalama=ortalama/sayac;
    printf("girilen sayilarin osralamasi= %d",ortalama);
}
