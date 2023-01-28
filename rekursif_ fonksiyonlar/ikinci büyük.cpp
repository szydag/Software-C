#include<stdio.h>
int siralama(int dizi[],int n,int ks,int bs,int os,int i)
{
	i++;
	if(ks>bs)
	{
		os=ks;
		ks=bs;
		bs=ks;
		
	}
	
	else if(i>n)
	{
		return dizi();
	}
	
}
int main()
{
	int n,i,dizi[100],ks,bs,os,i=0;
	printf("kac indisli bir dizi gireceksiniz: ");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		printf("dizinin %d. indisini giriniz: ");
		scanf("%d",&dizi[i]);
	}
	
	printf("%d",siralama(dizi,n,ks,bs,os,i);)
	
	main();
}
