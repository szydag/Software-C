//dizideki en büyük sayi
#include<stdio.h>
int en_buyuk(int dizi[],int i,int buyuk_sayi, int n)
{
	if(i==n)
	{
       return buyuk_sayi;
	}
	else if(dizi[i+1]>buyuk_sayi)
	{
		buyuk_sayi=dizi[i+1];
		i++;
		en_buyuk(dizi,i,buyuk_sayi,n);
}
	else
	{
		i++;
		en_buyuk(dizi,i,buyuk_sayi,n);
	}

	
}
int main()
{
	int dizi[100],n,i,buyuk_sayi,sayac=0;
	printf("kac indisli bir dizi girmek istiyorsunuz: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("dizinin %d. indisini giriniz: ",i);
		scanf("%d",&dizi[i]);
	}
	i=0;
	buyuk_sayi=dizi[i];
	printf("\n\n dizinin en buyuk elemani %d\n\n\n",en_buyuk(dizi,i,buyuk_sayi,n));
	main();
}
