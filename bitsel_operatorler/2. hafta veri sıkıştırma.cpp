#include<stdio.h>
void hesapla(int sayi)
{
	int dizi[100],i,j=0,sonuc1;
	while(sayi>0)
	{
		sonuc1=sayi%2;
		dizi[j]=sonuc1;
		j++;
		sayi=sayi>>1;
	}
	for(i=j-1;i>=0;i--)
	{
		printf(" %d ",dizi[i]);
	}
	printf("\n");
}


int main()
{
	int sayi1,sayi2,sonuc;
	printf("iki sayi gir ");
	scanf("%d %d",&sayi1,&sayi2);
	hesapla(sayi1);
	hesapla(sayi2);
	sonuc=sayi1;
	sonuc=sonuc<<4;
	hesapla(sonuc);
	sonuc=sonuc+sayi2;
	hesapla(sonuc);
	printf("\n\n%d\n\n ",sonuc);
	main();
}
