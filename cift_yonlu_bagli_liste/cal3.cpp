#include<stdio.h>
#include<stdlib.h>

typedef struct Dugum
{
	char harf;
	struct Dugum*sonraki;
	struct Dugum*onceki;
}Dugum;

int main()
{
	Dugum*ilk=NULL;
    Dugum*son=NULL;
	char kelime[20];
	printf("\n\nBir kelime giriniz: ");
	gets(kelime);
	int i=0;
	while(kelime[i]!='\0')
	{
		Dugum*yeni=(Dugum*)malloc(sizeof(Dugum));
		yeni->harf=kelime[i];
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
	printf("Olusturulan Dugum: ");
	Dugum*gecicibas=ilk;
	while(gecicibas!=NULL)
	{
		printf(" %c ",gecicibas->harf);
		gecicibas=gecicibas->sonraki;
	}
	gecicibas=ilk;
	Dugum*gecicison=son;
	while(gecicibas!=gecicison) //harf sayisi tek olan kelimelerde ortadaki 
	{                           //harfin aynisinin olmasýna gerek olmadýicin
	                            //kontrol etmedim
		if(gecicibas->harf!=gecicison->harf)
		{
			printf("\nGirdiginiz ifade polindrom degildir");
			break;
		}
		gecicibas=gecicibas->sonraki;
		gecicison=gecicison->onceki;
	}
	if(gecicibas==gecicison)
	{
		printf("\nGirdiginiz ifade polindormdur");
	}
	main();
}
