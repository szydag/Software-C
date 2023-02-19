#include<stdio.h>
#include<stdlib.h>

Listele(int dizi[],int boyut)
{
	for(int i=0;i<boyut;i++)
	{
		printf(" %d ",dizi[i]);
	}
}

int main()
{
	int boyut=10;
	int dizi[boyut];
	int siralidizi[boyut];
	siralidizi[1]==100;
	for(int i=0;i<boyut;i++)
	{
		dizi[i]=rand()%100;
	}
	printf("Siralanmamis dizi: \n");
	Listele(dizi,boyut);
	int enkucuk=100;
	for(int i=0;i<boyut;i++)
	{
		for(int j=0;j<boyut;j++)
		{
			if(i==0 && dizi[j]<enkucuk)
			{
				enkucuk=dizi[j];
			}
			else if (dizi[j]>siralidizi[i-1] && dizi[j]<enkucuk )
			{
				enkucuk=dizi[j];
			}
		}
		siralidizi[i]=enkucuk;
		enkucuk=100;
	}
	printf("\nSiralanmis dizi: \n");
	Listele(siralidizi,boyut);
}
