//3. Klavyeden girilen bir sayýdan küçük mükemmel sayýyý bulan rekürsif fonksiyonu yazýnýz.
#include<stdio.h>
int muq(int n)
{
	int i,toplam=0;

	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			
			toplam=toplam+i;
			
		}
	}
		if(n==0)
	{
		return 404;
	}
	else if(n==toplam)
	{
		printf(" \n%d ",n);
	}
	n--;
	muq(n);
	
}
int main()
{
	int n;
	printf("\nbir sayi giriniz: ");
	scanf("%d",&n);
	printf("%d sayisindan kucuk mukemmel sayilar ",n);
	muq(n);
	main();
	
	
}
