#include<stdio.h>
#include<math.h>
void hesapla(int sayi)
{
	int sonuc1,dizi[100],i=0,j=0;
	while(sayi>0)
	{
		sonuc1=sayi%2;
		dizi[j]=sonuc1;
		sayi=sayi>>1;
		j++;
	}
	for(i=j-1;i>=0;i--)
	{
		printf(" %d ",dizi[i]);
	}
	printf(" \n\n");
}
void onluk(int sayi)
{
	int i=0,sonuc2=0,sonuc3=0;
	while(sayi>0)
	{
		sonuc2=sayi%2;
		sonuc3=sonuc3+sonuc2*pow(2,i);
		i++;
		sayi=sayi>>1;
	}
	printf("%d\n\n",sonuc3);
}
int main()
{
	int sayi1,sayi2,sonuc,veri;
	printf("iki tane sayi girr: ");
	scanf("%d %d",&sayi1,&sayi2);
	printf("%d nin binary karsiligi: ",sayi1);
	hesapla(sayi1);
	printf("%d nin binary karsiligi: ",sayi2);
	hesapla(sayi2);
	sonuc=sayi1;
	sonuc=sonuc<<4;
	printf("%d nin sola kaymis hali: ",sayi1);
	hesapla(sonuc);
	sonuc=sonuc+sayi2;
	printf(" %d ile %d nin birlesmis hali: ",sayi1,sayi2);
	hesapla(sonuc);
	veri=sonuc;  // sonuc kaybolmasin diye yedekledim
	veri=veri&15; // 15=1111 ve operatoruyle sondan 4 bitini çektim
	printf("son dort bit: ");
	hesapla(veri);
	printf("son dort bitin onluk karsiligi: ");
	onluk(veri); // son 4 bitin onluk karsiligi
	veri=sonuc>>4;
	printf("ilk dort bitin ikilik karsilig: ");
	hesapla(veri);
	printf("ilk dort bitin onluk karsiligi:");
	onluk(veri);
	printf("\n\n\n");
	main();
}
