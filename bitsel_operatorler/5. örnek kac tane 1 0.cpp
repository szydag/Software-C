#include<stdio.h>
int sayac(int sayi)
{
	int dizi[100],i=0,sonuc,sayac0=0,sayac1=0,j=0;
	while(sayi>0)
	{
		sonuc=sayi%2;
		dizi[i]=sonuc;
		if(sonuc==1)
		{
			sayac1++;
		}
		else
		{
			sayac0++;
		}
		sayi=sayi>>1;
		i++;
   }

	for(j=i-1;j>=0;j--)
	{
		printf("%d",dizi[j]);
	}
	printf("\n%d adet 1 var",sayac1);
	printf("\n%d adet 0 var",sayac0);
}
int main()
{
	int n;
	printf("bir sayi gir: ");
	scanf("%d",&n);
	sayac(n);
}
