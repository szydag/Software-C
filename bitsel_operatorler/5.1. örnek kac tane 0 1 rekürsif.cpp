#include<stdio.h>
int sayac(int sayi,int sayac0,int sayac1,int dizi[],int i)
{
	int sonuc,j;
	if (sayi==0)
	{
        for(j=i-1;j>=0;j--)
	    {
	     	printf("%d",dizi[j]);
       	}
    	printf("\n%d adet 1 var",sayac1);
	    printf("\n%d adet 0 var",sayac0);
	}
	else
	{
		sonuc=sayi%2;
		dizi[i]=sonuc;
		if(sonuc==1)
		{
			sayac1++;
		}
		else
		{
			sayac0++;
		}
		sayi=sayi>>1;
		i++;
		sayac(sayi,sayac0,sayac1,dizi,i);
    }

	
}
int main()
{
	int n,sayac0=0,sayac1,dizi[100],i=0;
	printf("bir sayi gir: ");
	scanf("%d",&n);
	sayac(n,sayac0,sayac1,dizi,i);
}
