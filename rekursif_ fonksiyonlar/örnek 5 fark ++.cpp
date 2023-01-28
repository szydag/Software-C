//5. 10 adet tam sayý olan bir dizi içerisindeki tam sayýlardan en büyük sayý ile en küçük sayý 
//arasýndaki farký bulan rekürsif fonksiyonu yazýnýz.
#include<stdio.h>
int fark(int dizi[],int n,int buyuk_sayi, int kucuk_sayi,int i)
{
	int sonuc;
	if(i==n)
	{
		printf(" buyuk %d \n kucuk %d\n",buyuk_sayi,kucuk_sayi);
		sonuc=(buyuk_sayi)-(kucuk_sayi);
		return sonuc;
	}
	else if(dizi[i+1]>=buyuk_sayi)
	{
		buyuk_sayi=dizi[i+1];
		i++;
		fark(dizi,n,buyuk_sayi,kucuk_sayi,i);
		
	}
    else if(dizi[i+1]<=kucuk_sayi)
	{
		kucuk_sayi=dizi[i+1];
		i++;
		fark(dizi,n,buyuk_sayi,kucuk_sayi,i);
	}
	else
	{
		i++;
		fark(dizi,n,buyuk_sayi,kucuk_sayi,i);
	}

	

}
int main()
{
	int dizi[100],n,i,kucuk_sayi,buyuk_sayi;
	printf("kac indisli bir dizi gireceksiniz: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("dizinin %d. indisini giriniz: ",i);
		scanf("%d",&dizi[i]);
	}
	i=0;
    buyuk_sayi=dizi[i];
    kucuk_sayi=dizi[i];
    
    
	printf("dizinin en buyuk elemanni ile en kucuk elemani arasindaki fark %d \n\n\n",fark(dizi,n,buyuk_sayi,kucuk_sayi,i));
	
	main();
}
