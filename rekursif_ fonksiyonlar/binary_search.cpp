#include<stdio.h>
int BinarySearch (int Aranan, int Dizi[],int SagIndis, int SolIndis)
{
	int OrtaIndis;
	OrtaIndis=(SolIndis + SagIndis)/2;
	if(SolIndis> SagIndis)
	{
		return 404;
	}
	else if(Aranan < Dizi[OrtaIndis])
	{
		SagIndis=OrtaIndis-1;
		BinarySearch(Aranan,Dizi,SagIndis,SolIndis);
	}
	else if(Aranan > Dizi[OrtaIndis])
	{
		SolIndis=OrtaIndis+1;
		BinarySearch(Aranan,Dizi,SagIndis,SolIndis);
	}
	else if(Aranan == Dizi[OrtaIndis])
	{
		return OrtaIndis ;
		return 0;
	}	
}
int main ()
{
	int Dizi[100],Aranan,n,i,a;
	printf(" Kac indisli bir dizi gireceksiniz: ");
	scanf("%d",&n);
	for(i=0;i<n+1;i++)
	{
		printf("Dizinin %d. indisini giriniz: ",i);
		scanf("%d",&Dizi[i]);
	}
	printf("Dizide aramak istediginiz elemani giriniz: ");
	scanf("%d",&Aranan);
	BinarySearch(Aranan,Dizi,n,0);
	a=BinarySearch(Aranan,Dizi,n,0);
	if(a == 404)
	{
		printf("Aradiginiz eleman dizide bulunamamistir!!");
	}
	else
	{
		printf("Aradiginiz eleman dizinin %d. indisinde bulunmustur.",a);
	}
	printf("\n\n\n");
	main();
}
