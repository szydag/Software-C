//4eden girilen 2 sayı arasında kaç tane asal sayı olduğunu bulan rekürsif fonksiyonuyazınız.. Klavy
#include<stdio.h>
int asal(int kucuk_deger, int buyuk_deger,int sayac2)
{
	int i,sayac=0;
	if(buyuk_deger==kucuk_deger)
	{
		return sayac2;
	}
	for(i=2;i<buyuk_deger;i++)
	{
		if(buyuk_deger%i==0)
		{
			sayac++;
		}
	}
	if(sayac==0)
	{
		sayac2++;
		printf("%d sayisi asaldir\n",buyuk_deger);
	
	}
	buyuk_deger--;
	asal(kucuk_deger,buyuk_deger,sayac2);
	
	
	
}

int main()
{
	int kucuk_deger,buyuk_deger,sayac2=0;
	printf("Kucuk degeri giriniz: ");
	scanf("%d",&kucuk_deger);
	printf("Buyuk degeri giriniz: ");
	scanf("%d",&buyuk_deger);
	if(kucuk_deger>=buyuk_deger)
	{
		printf("!! Hatalı deger girdiniz !!");
	}
	else
	{
		printf("\n%d adet asal sayi vardir\n\n\n",asal(kucuk_deger,buyuk_deger,sayac2));
	}
	
	
	main();
}
