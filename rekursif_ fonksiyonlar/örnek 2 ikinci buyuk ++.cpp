#include<stdio.h>
int ikinci(int dizi[],int n,int i,int iki_buyuk,int en_buyuk)
{
	int bosluk;
	if(i==n+1)
	{
		return iki_buyuk;
	}
	else if(dizi[i]>iki_buyuk)
	{
		iki_buyuk=dizi[i];
		if(iki_buyuk>en_buyuk)
		{
			bosluk=iki_buyuk;
			iki_buyuk=en_buyuk;
			en_buyuk=bosluk;
			i++;
			ikinci(dizi,n,i,iki_buyuk,en_buyuk);
		}
		else
		{
			i++;
			ikinci(dizi,n,i,iki_buyuk,en_buyuk);
		}
	}
	else
	{
		i++;
		ikinci(dizi,n,i,iki_buyuk,en_buyuk);
	}
}
int main()
{
	int dizi[100],i,n;
	printf("kac indisli bir dizi gireceksiniz: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("dizinin %d. indisini giriniz: ",i);
		scanf("%d",&dizi[i]);
	}
	int iki_buyuk=0;
	int en_buyuk=0;
	i=0;
	printf("girdiginiz dizinin en buyuk ikinci indisi %d\n\n",ikinci(dizi,n,i,iki_buyuk,en_buyuk));
	
	main();
}
