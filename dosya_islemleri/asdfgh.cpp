#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	FILE*dosya=fopen("randomNumber.txt","w+");
	FILE*dosyac=fopen("cift.txt","w");
	FILE*dosyat=fopen("tek.txt","w");
	
	
	int boyut=10;
    int a[10][5],yedek;
    
    srand(time(NULL));
   
    for(int i=0;i<10;i++)
    {
    	int en_buyuk=0,en_kucuk=9,ortalama;
    	for(int j=0;j<5;j++)
    	{
    		a[i][j]=rand();
    		a[i][j]=a[i][j]%10;
    		if(a[i][j]!=0)
    		{
    			ortalama+=a[i][j];
    			if(a[i][j]>en_buyuk)
    			{
    				en_buyuk=a[i][j];
				}
				if(a[i][j]<en_kucuk)
				{
					en_kucuk=a[i][j];
				}
    			printf(" %d ",a[i][j]);
    			fprintf(dosya," %d ",a[i][j]);
			}
			else
			{
				j--;
			}

		
			
    		
		}
		ortalama=ortalama/5;
		printf("  => en buyuk: %d  en kucuk: %d  ortalama: %d\n",en_buyuk,en_kucuk,ortalama);
		fprintf(dosya,"  => en buyuk: %d  en kucuk: %d  ortalama: %d\n",en_buyuk,en_kucuk,ortalama);
		
    }
    
    
    printf("\n\n");
    fprintf(dosya,"\n\n");
    int en_buyuk_sutun=0,en_kucuk_sutun=9,ortalama_sutun;
    for(int j=0;j<5;j++)
    {
    	en_buyuk_sutun=0;
    	en_kucuk_sutun=9;
    	for(int i=0;i<10;i++)
    	{
    		if(a[i][j]>en_buyuk_sutun)
    		{
    			en_buyuk_sutun=a[i][j];
			}
		}
		printf(" %d ",en_buyuk_sutun);
		fprintf(dosya," %d ",en_buyuk_sutun);
	}
	printf ("  => sutunlarin en buyuk degerleri\n");
	fprintf (dosya,"  => sutunlarin en buyuk degerleri\n");
	
	
	
	 for(int j=0;j<5;j++)
    {
    	en_buyuk_sutun=0;
    	en_kucuk_sutun=9;
    	for(int i=0;i<10;i++)
    	{
    		if(a[i][j]<en_kucuk_sutun)
    		{
    			en_kucuk_sutun=a[i][j];
			}
		} 
		printf(" %d ",en_kucuk_sutun);
		fprintf(dosya," %d ",en_kucuk_sutun);
	} 
	printf ("  => sutunlarin en kucuk degerleri\n");
	fprintf (dosya,"  => sutunlarin en kucuk degerleri\n");
	
	
	
	for(int j=0;j<5;j++)
    {
    	ortalama_sutun=0;
    	for(int i=0;i<10;i++)
    	{
    		ortalama_sutun+=a[i][j];
		} 
		ortalama_sutun=ortalama_sutun/10;
		printf(" %d ",ortalama_sutun);
		fprintf(dosya," %d ",ortalama_sutun);
	}
	printf ("  => sutunlarin ortalama degerleri\n");
	fprintf (dosya,"  => sutunlarin ortalama degerleri\n");
	
    

}
