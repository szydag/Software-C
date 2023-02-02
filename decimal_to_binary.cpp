#include<stdio.h>
int main()
{
	int sayi, dizi[100],j=0,i,sonuc;
	printf("\n\nsayi gir loo:");
	scanf("%d",&sayi);
	while(sayi>0)
	{
	    sonuc=sayi%2;
		dizi[j]=sonuc;
		sayi=sayi>>1;
		j++;
	}
	for( i=j-1;i>=0;i--)
	{
		printf(" %d ",dizi[i]);
	}
	main();
}
