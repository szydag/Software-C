#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void diziOlusturma(int dizi[],int N)
{
    int a;
    srand(time(NULL));
    printf("{");
    for(int i=0;i<N;i++)
    {
    	a=rand();
    	a=a%100;
    	dizi[i]=a;
    	for(int j=0;j<i;j++)
    	{
    		if(dizi[i]==dizi[j])
			{
				a=rand(); //olusturulan sayi daha once kullanilmissa yeniden olusturmak icin
				a=a%100;
				dizi[i]=a;
				j=0; //kontrolu j nin kaldigi yerden degil de bastan yapmasi icin sifirladim
			}
		}
		printf("%d,",a);
	}
	printf("}");
}
void KucuktenBuyuge(int dizi[],int N)
{
	int yedek,sayac=1,i=0,enKucuk=99;
	int*pointer=&dizi[0];
	*(dizi+0+N)=0;
	for(i=0;i<N;i++) //ödevde dizi icinde sýralama yapilmamasi gerektiði yaziyor bende bu yüzden en kucuk elemani buldum ve
	{                //dizinin yazýldýgý adreslerden bir sonrakine yazdim  sonra bu elemandan daha büyük en küçük elemani
        for(int j=0;j<N;j++)//sirasiyla yazarak devam ettim ve en son dizinin bozulmadigini 
        {                   //test etmek için diziyi yazdirdim
        	if(dizi[j]< enKucuk && dizi[j] > *(dizi+i+N)) 
        	{
    	     	enKucuk=dizi[j];
	    	}
     	}
     	*(dizi+i+N+1)=enKucuk;
     	printf("%d ",*(dizi+i+N+1));
        enKucuk=99;
    }

	printf("\n orijinal dizi:\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",*(dizi+i));
	}
	
}
void BuyuktenKucuge(int dizi[],int N)
{
	int yedek,sayac=1,i=0,enBuyuk=0;
	int*pointer=&dizi[0];
	*(dizi+0+N)=100;
	for(i=0;i<N;i++) 
	{
        for(int j=0;j<N;j++)
        {
        	if(dizi[j]>enBuyuk && dizi[j] < *(dizi+i+N)) 
        	{
    	     	enBuyuk=dizi[j];
	    	}
     	}
     	*(dizi+i+N+1)=enBuyuk;
     	printf("%d ",*(dizi+i+N+1));
        enBuyuk=0;
    }


	printf("\n orijinal dizi:\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",*(dizi+i));
	}
	
}

int main()
{
	int N,i,dizi[1000],secim=1,secim1;
	printf("          ***DIZI SIRALAMA***\n\n");
	printf("Olusturulacak dizi kac elemanli olsun: ");
	scanf("%d",&N);
    diziOlusturma(dizi,N);

	
	while(secim!=0) //programdan cikis yapilmak istenene kadar sorular tekrar sorulmasi icin
	{
		printf("\n\n\n                           ***MENU***\n");
	    printf("Girdiginiz diziyi kucukten buyuge dogru siralamak istiyorsaniz    1\n");
     	printf("Girdiginiz diziyi buyukten kucuge dogru siralamak istiyorsaniz    2\n");
    	printf("Yeni bir dizi olusturmak istiyorsaniz                             3\n");
	    printf("Programdan cikis yapmak istiyorsaniz                              0\n");
	    printf("seciminiz: ");
    	scanf("%d",&secim);
    	
	    switch (secim) 
    	{
            case 1:
            {
            	printf("\nDizi kucukten buyuge dogru siralaniyor...\n");
            	KucuktenBuyuge(dizi,N);
            	break;
		    }
            case 2:
            {
            	printf("\nDizi buyukten kucuge dogru siralaniyor...\n");
             	BuyuktenKucuge(dizi,N);
            	break;
	    	}
            case 3:
           {
            	printf("\nYeni bir dizi olusturuluyor...\n\n");
            	diziOlusturma(dizi,N); 
				break;//maine geri mi doniyim diziyi olusturmak yeterli mi
	    	}
            case 0:
           {
            	printf("\nProgramdan cikis yapildi!!");
             	return 0;
	    	}
            default:
           {
            	printf("!!! Hatali secim yaptiniz !!!\n");
            	printf("Programi yeniden baslatmak istiyorsaniz 1\n");
            	printf("Cikis yapmak istiyorsaniz herhangi bir tusa basiniz:");
            	scanf("%d",&secim1);
            	if(secim1==1)
            	{
        	    	main();
		    	}
			    else
		    	{
			    	return 0;
		     	}
        	}
        }
	}
}
