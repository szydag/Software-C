#include<stdio.h>
int dizilim(int dizi[],int n,int i,int sayac)
{
	if(i==n)
	{
		return sayac;
	}
	else if(dizi[i+1]>dizi[i])
	{
		sayac++;
		i++;
		dizilim(dizi,n,i,sayac);
	}
	else
	{
		i++;
		dizilim(dizi,n,i,sayac);
	}
}
int main()
{
	int dizi[100],n,i,sayac=0;
	printf("kac indisli bir dizi girmek istiyorsunuz: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("dizinin %d. indisini giriniz: ",i);
		scanf("%d",&dizi[i]);
	}
	i=0;
	printf("girdiginiz dizide %d adet sirali eleman var",dizilim(dizi,n,i,sayac));
}
