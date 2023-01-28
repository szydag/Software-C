#include<stdio.h>
#include<stdlib.h>
typedef struct Dugum
{
	int sayi;
	struct Dugum*sonraki;
}Dugum;
int main()
{
	Dugum*ilkDugum=NULL;
	Dugum*geciciDugum=NULL;
	
	int adet,sayi;
	printf("Kac adet sayi girisi yapacaksiniz: ");
	scanf("%d",&adet);
	for(int i=0;i<adet;i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&sayi);
		Dugum*yeniDugum=(Dugum*)malloc(sizeof(Dugum));
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
	geciciDugum=ilkDugum;
	while(geciciDugum!=NULL)
	{
		printf(" %d \n",geciciDugum->sayi);
		geciciDugum=geciciDugum->sonraki;
	}
	return 0;
	
}
