#include<stdio.h>
#include<stdlib.h>
typedef struct Dugum
{
	int sayi;
	Dugum*sonraki;
}Dugum;


 Listele(Dugum*ilkDugum)
{
	Dugum*geciciDugum=ilkDugum;
	while(geciciDugum!=NULL)
	{
		printf("%d ",geciciDugum->sayi);
		geciciDugum=geciciDugum->sonraki;
	}
	printf("\n");
}

 Sirala(Dugum*ilkDugum,int i)
{
    Dugum*geciciDugum=ilkDugum;
    for(int j=0;j<i;j++)
    {
	    while(geciciDugum!=NULL)
  	    {
	       	if(geciciDugum->sonraki !=NULL)
	     	{
	   	    	Dugum*yeniDugum=geciciDugum->sonraki;
	   	    	if(geciciDugum->sayi > yeniDugum->sayi)
	   		    {
	   		    	int temp=geciciDugum->sayi;
	   		    	geciciDugum->sayi=yeniDugum->sayi;
	   		    	yeniDugum->sayi=temp;
		     	}
	     	}
	    	geciciDugum=geciciDugum->sonraki;
        }
        geciciDugum=ilkDugum;
    }
}



int main()
{
	Dugum*ilkDugum=NULL;
	Dugum*geciciDugum=NULL;
	int sayiDizisi[]={21,40,30,25,50,24,14,60,3};
	int sayi;
	for(int i=0;i<9;i++)
	{
		sayi=sayiDizisi[i];
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
	    Sirala(ilkDugum,i);
	  	Listele(ilkDugum);
	}
	
	int MevcutIndex,YeniIndex,secim;
	while(1)
	{
		printf("\n\nMevcut indexi giriniz");
		scanf("%d",&MevcutIndex);
		if(MevcutIndex==-1)
		{
			break;
		}
		printf("Yeni indexi giriniz");
		scanf("%d",&YeniIndex);
		printf("                      Liste:  ");
		Listele(ilkDugum);
		printf("MevcutIndex= %d,YeniIndex= %d =>",MevcutIndex,YeniIndex);
		Dugum*MevcutDugum=ilkDugum;
    	Dugum*oncekiDugum=ilkDugum;
    	int i;
    	for( i=0;i<MevcutIndex-1;i++)
    	{
	    	oncekiDugum=MevcutDugum;
	    	MevcutDugum=MevcutDugum->sonraki;
     	}
	    int mevcutSayi=MevcutDugum->sayi;
    	if(ilkDugum==MevcutDugum) //oncelikle mevcut dugumu kesiyoruz yani siliyoruz
    	{
 	        ilkDugum=ilkDugum->sonraki;
    	}
    	else
    	{
	    	MevcutDugum=MevcutDugum->sonraki;
	    	oncekiDugum->sonraki=MevcutDugum;
    	}
		Dugum*YeniDugum=ilkDugum;
    	for(i=0;i<YeniIndex-1;i++)
	    {
	    	oncekiDugum=YeniDugum;
	    	YeniDugum=YeniDugum->sonraki;
    	}
    	if(YeniDugum==ilkDugum)
    	{
	    	Dugum*guncelDugum=(Dugum*)malloc(sizeof(Dugum));
	    	guncelDugum->sonraki=ilkDugum;
	    	ilkDugum=guncelDugum;
	    	guncelDugum->sayi=mevcutSayi;
		}
    	else
	    {
        	Dugum*guncelDugum=(Dugum*)malloc(sizeof(Dugum));
        	oncekiDugum->sonraki=guncelDugum;
        	guncelDugum->sayi=mevcutSayi;
        	guncelDugum->sonraki=YeniDugum;
    	}
    	Listele(ilkDugum);
	}
	
	printf("\n\n     Islem Tamamlanmistir...");
	return 0;
}
