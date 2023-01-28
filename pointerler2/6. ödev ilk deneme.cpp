#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

typedef struct TekDugum 
{
	int sayiTek;
	struct TekDugum*sonrakiTek;
}TekDugum;


typedef struct CiftDugum
{
	int sayiCift;
	struct CiftDugum*sonrakiCift;
}CiftDugum;


typedef struct Dugum
{
	int sayi;
	struct Dugum*sonraki;
}Dugum;


int randomOlusturma(int dizi[],int N)
{
	int sayac=0;
	srand(time(NULL));
	while(sayac<N)
	{
		dizi[sayac]=(rand()%30)+20;
		for(int i=0;i<sayac;i++)
		{
			if(dizi[sayac]==dizi[i]) //olusturulan random sayilarin tekrar etmemesi için
			{
		    	dizi[sayac]=(rand()%30)+20;
		     	i=0;
			}
		}
		printf("%d ",dizi[sayac]);
		sayac++;
	}
}

int main()
{
	int sayiTek,sayiCift, sayi,dizi[1000],N,enKucukTek=100,enBuyukTek=0,sayacTek=0,ortancaTek;
	int enKucukCift=100,enBuyukCift=0,sayacCift=0,ortancaCift,tekDizi[100],ciftDizi[100],temp;
	
	
	TekDugum *ilkDugumTek=NULL;
	TekDugum *geciciDugumTek=NULL;
		
	CiftDugum *ilkDugumCift=NULL;
	CiftDugum *geciciDugumCift=NULL;
	
	Dugum *ilkDugum=NULL;
	Dugum *geciciDugum=NULL;
	
	printf("Kac elemanli bir dizi olusturmak istiyorsunuz?");
	scanf("%d",&N);
	
	printf("\nOlusturulan dizi:\n");	
	randomOlusturma(dizi,N);


	
	for(int i=0;i<N;i++)
	{
		if(*(dizi+i)%2!=0)
		{
			sayiTek=dizi[i];
			TekDugum *yeniDugum=(TekDugum *)malloc(sizeof(TekDugum)); 
	    	yeniDugum->sayiTek=sayiTek;
	    	if(ilkDugumTek==NULL)
	    	{
		    	ilkDugumTek=yeniDugum;
		    	geciciDugumTek=ilkDugumTek;
		    	ilkDugumTek->sonrakiTek=NULL;
	    	}
	    	else
	    	{
			    geciciDugumTek->sonrakiTek=yeniDugum;
		    	geciciDugumTek=geciciDugumTek->sonrakiTek;
		    	geciciDugumTek->sonrakiTek=NULL;
	    	}
		}
		else
		{
			sayiCift=dizi[i];
			CiftDugum *yeniDugum=(CiftDugum *)malloc(sizeof(CiftDugum));
			yeniDugum->sayiCift=sayiCift;
	    	if(ilkDugumCift==NULL)
	    	{
		    	ilkDugumCift=yeniDugum;
		    	geciciDugumCift=ilkDugumCift;
		    	ilkDugumCift->sonrakiCift=NULL;
	    	}
	    	else
	    	{
			    geciciDugumCift->sonrakiCift=yeniDugum;
		    	geciciDugumCift=geciciDugumCift->sonrakiCift;
		    	geciciDugumCift->sonrakiCift=NULL;
	    	}
			
		}
	}
	printf("\nTek Liste=> ");
	geciciDugumTek=ilkDugumTek;
	while(geciciDugumTek!=NULL)
	{
		sayacTek++;
		int a=geciciDugumTek->sayiTek;
		tekDizi[sayacTek]=a;
		printf(" %d,",a);
		if(a>enBuyukTek)
		{
			enBuyukTek=a;
		}
		if(a <enKucukTek)
		{
			enKucukTek=a;
		}
		geciciDugumTek=geciciDugumTek->sonrakiTek;
	}
	ortancaTek=tekDizi[(sayacTek/2)+1];

	
	printf("\nCift Liste=> ");
	geciciDugumCift=ilkDugumCift;
	while(geciciDugumCift!=NULL)
	{
		sayacCift++;
		int b= geciciDugumCift->sayiCift;
		ciftDizi[sayacCift]=b;
		printf(" %d,",b);
		if(b >enBuyukCift)
		{
			enBuyukCift=b;
		}
		if(b <enKucukCift)
		{
			enKucukCift=b;
		}
		geciciDugumCift=geciciDugumCift->sonrakiCift;
	}
	ortancaCift=ciftDizi[(sayacCift/2)+1];
	
	
	printf("\n\n\nTek Liste => En Kucuk %d, En Buyuk %d, Ortanca sayi: %d",enKucukTek,enBuyukTek,ortancaTek);
	printf("\nCift Liste => En Kucuk %d, En Buyuk %d, Ortanca sayi: %d",enKucukCift,enBuyukCift,ortancaCift);
	
	int enKucuk=50;
	geciciDugumTek=ilkDugumTek;
	geciciDugumCift=ilkDugumCift;
    while(geciciDugumTek!=NULL )
	{
		sayi=geciciDugumTek->sayiTek;
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
	   	geciciDugumTek=geciciDugumTek->sonrakiTek;
	}
	 while(geciciDugumCift!=NULL )
	{
		sayi=geciciDugumCift->sayiCift;
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
	   	geciciDugumCift=geciciDugumCift->sonrakiCift;
	}
	
    geciciDugum=ilkDugum;
    
	for(int i=0;i<N;i++)
    {
    	while(1)
    	{
	    	Dugum*yeniDugum=geciciDugum->sonraki;
		    if(geciciDugum->sayi > yeniDugum->sayi)
	    	{
		      	temp=geciciDugum->sayi;
		    	geciciDugum->sayi=yeniDugum->sayi;
		    	yeniDugum->sayi=temp;
	    	}
	    	geciciDugum=yeniDugum;
	    	if(yeniDugum->sonraki==NULL)
	    	{
	    		break;
			}
		}
		geciciDugum=ilkDugum;
   }
	printf("\n\nOrtak ve Sirali Yeni Bagli Liste:");
	geciciDugum=ilkDugum;
	while(geciciDugum!=NULL)
	{
		printf(" %d",geciciDugum->sayi);
		geciciDugum=geciciDugum->sonraki;
	}

	return 0;
}
