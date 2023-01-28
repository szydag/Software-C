#include<stdio.h>
void neg_bin(int n)
{
	int dizi[100],i=0,sonuc,sayac=0,j;
	n=n*(-1);
	while(n>0)
	{
		sonuc=n%2;
		dizi[i]=sonuc;
	    n=n>>1;
		i++;
		sayac++;
	}
	while(sayac<=32)
	{
		dizi[i]=0;
		sayac++;
		i++;
	}
    for(i=0;i<32;i++)
    {
    	if(dizi[i]==0)
    	{
    		dizi[i]=1;
		}
		else
		{
			dizi[i]=0;
		}
	}
	dizi[0]=1;
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
	neg_bin(n);
}
