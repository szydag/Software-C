#include<stdio.h>
int main()
{
	FILE*dosya=fopen("randomNumber.txt","r+");
	
	int en_buyuk=0,en_kucuk=9,ortalama=0;
	int a[5],imlec;
	
	if(dosya==0)
	{
		printf("RandomNumber dosyasi bulunamadi");
	}
	else
	{
		for(int i=0;i<4;i++)
		{
		
			int en_buyuk=0,en_kucuk=9,ortalama=0;
			fscanf(dosya," %d  %d  %d  %d  %d ",&a[0],&a[1],&a[2],&a[3],&a[4]);
			
			
			printf(" %d  %d  %d  %d  %d ",a[0],a[1],a[2],a[3],a[4]);
			for(int j=0;j<5;j++)
			{
				ortalama+=a[j];
				if(a[j]>en_buyuk)
				{
					en_buyuk=a[j];
				}
				if(a[j]<en_kucuk)
				{
					en_kucuk=a[j];
				}
			}
			ortalama=ortalama/5;
			printf("   => en buyuk: %d    en kucuk: %d    ortalama: %d\n",en_buyuk,en_kucuk,ortalama);
			fseek(dosya,ftell(dosya),SEEK_SET);
			fprintf(dosya,"   => en buyuk: %d    en kucuk: %d    ortalama: %d\n",en_buyuk,en_kucuk,ortalama);
			fseek(dosya,0,SEEK_CUR);
		}
		
	}
}
