#include<stdio.h>
int max(int a[],int uzunluk)
{
	int max=a[0];
	int i;
	for(i=0;i<uzunluk;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
int main()
{
	int sayilar[5]={3,4,42,100,1};
	int maks;
	maks=max(sayilar,5);
	printf("dizinin en buyuk elemani %d ",maks);
	return 0;
}
