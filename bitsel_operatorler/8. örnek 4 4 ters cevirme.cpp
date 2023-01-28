#include<stdio.h>
void hesapla(int sayi)
{
	int dizi[100],j=0,i,sonuc,sayac=0;
	
	while(sayi>0)
	{
	    sonuc=sayi%2;
		dizi[j]=sonuc;
		sayi=sayi>>1;
		j++;
		sayac++;
    }
    while(sayac<8)
    {
    	dizi[j]=0;
    	j++;
    	sayac++;
	}
	for(i=7;i>=0;i--)
	{
		
		printf("%d",dizi[i]);
	}
	printf("\ndort dortluk tersi: \n");
	j=0;
	for(i=4;i<8;i++)
	{
		j=j+dizi[i];
		j=j<<1;
		printf("%d",dizi[i]);
	}
	for(i=0;i<4;i++)
	{
		j=j+dizi[i];
		j=j<<1;
		printf("%d",dizi[i]);
	}
	j=j>>1;
	printf("\n=>%d",j);
}
int main()
{
	int n;
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	hesapla(n);
	printf("\n\n\n");
	main();
}
