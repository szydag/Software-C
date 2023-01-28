#include<stdio.h>
int tum_bit(int sayi)
{
	int dizi[100],i=0,sonuc,sayac=0;
	while(sayi>0)
	{
		sonuc=sayi%2;
		dizi[i]=sonuc;
		sayi=sayi>>1;
		i++;
		sayac++;
	}
	while(sayac<=32)
	{
		dizi[i]=0;
		i++;
		sayac++;
	}
	for(i=31;i>=0;i--)
	{
		printf("%d",dizi[i]);
	}
}
int main()
{
	int n;
	printf("bir sayi gir: ");
	scanf("%d",&n);
	tum_bit(n);
}
