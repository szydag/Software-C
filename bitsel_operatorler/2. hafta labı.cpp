#include<stdio.h>
void binary( int sayi)
{
     int i=0,j,sonuc,dizi[500],sayac=0;
	while(sayi>0)
	{
		sonuc=sayi%2;
		dizi[i]=sonuc;
		sayi=sayi>>1;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",dizi[j]);
	}
	for(j=0;j<=i;j++)
	{
		if(dizi[j]==0 && dizi[j+1]==1)
		{
			printf("\n %d ve %d",j,j+1);
			sayac++;
		}
	}
	printf("\n%d adet var",sayac);
	
}
int main()
{
	int n;
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	binary(n);
	
	
	printf("\n\n\n");
	main();
}
