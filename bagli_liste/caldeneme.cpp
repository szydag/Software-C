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
	Dugum*n=NULL;
	Dugum*m=NULL;
	Dugum*oncekim=NULL;
	Dugum*oncekin=NULL;
	int dizi[]={2,9,6,4,8,3,7,5,1,'\0'};
	int i=0;
	while(dizi[i]!='\0')
	{
		Dugum*yeni=(Dugum*)malloc(sizeof(Dugum));
		yeni->sayi=dizi[i];
		if(ilk==NULL)
		{
			ilk=yeni;
			gecici=ilk;
			ilk->sonraki=NULL;
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
	int ne,me;
	printf("\n\nkacinci elemanlarin yerini degistirmek istiyorsunuz: ");
	scanf("%d %d",&ne,&me);
	i=0;
	gecici=ilk;
	while(gecici!=NULL)
	{
		i++;
		if(i==ne)
		{
			m=gecici;
		}
		oncekin=gecici;
		gecici=gecici->sonraki;
	}
	i=0;
	gecici=ilk;
	while(gecici!=NULL)
	{
		i++;
		if(i==me)
		{
			n=gecici;
		}
		oncekim=gecici;
		gecici=gecici->sonraki;
	}
	printf("\n %d",m->sayi);
	printf("\n %d",n->sayi);
	Dugum*temp=n;
	n->sonraki=m->sonraki;
	oncekin->sonraki=m;
	m->sonraki=temp->sonraki;
	oncekim->sonraki=temp;
	Listele();	
}
