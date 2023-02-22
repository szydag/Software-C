#include<stdio.h>
#include<stdlib.h>

typedef struct dugum
{
	char harf;
	dugum*onceki;
	dugum*sonraki;
}dugum;

dugum*ilk=NULL;
dugum*son=NULL;

listele()
{
	dugum*gecici=ilk;
	while(gecici!=NULL)
	{
		printf("%c  ",gecici->harf);
		gecici=gecici->sonraki;
	}
}


int main()
{
	char kelime[20];
	printf("bir kelime giriniz:  ");
	gets(kelime);
	int i=0;
	while(kelime[i]!='\0')
	{
		dugum*yeni=(dugum*)malloc(sizeof(dugum));
    	yeni->harf=kelime[i];
    	if(ilk==NULL)
    	{
	    	ilk=yeni;
	    	son=yeni;
	    	ilk->sonraki=NULL;
	    	son->onceki=NULL;
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
	listele();
	
	dugum*bastan=NULL;
	dugum*sondan=NULL;
	bastan=ilk;
	sondan=son;
	while(bastan!=sondan)
	{
		if(bastan->harf != sondan->harf)
		{
			printf("\nkelime polindrom degildir");
			break;
		}
		bastan=bastan->sonraki;
		sondan=sondan->onceki;
	}
	if(bastan==sondan)
	{
		printf("\nkelime polindromdur");
	}
	
	return 0;
}
