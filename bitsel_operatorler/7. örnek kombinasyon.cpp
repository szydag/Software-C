#include<stdio.h>
void hesapla(int sayi)
{
	int dizi[100],j=0,i,sonuc,sayac,a,sayac0=0,sayac1=0,sayac2=0,sayac3=0,sayact=0;
	
	while(sayi>0)
	{
	    sonuc=sayi%2;
		dizi[j]=sonuc;
		sayi=sayi>>1;
		j++;
		sayac++;
	}
	if(sayac%2!=0)
	{
		dizi[j]=0;
		for( i=j;i>=0;i--)
	    {
	    	
	      	printf(" %d ",dizi[i]);
     	} 
    	printf("\n");
	}
	else
	{
		for( i=j-1;i>=0;i--)
	    {
	      	printf(" %d ",dizi[i]);
     	} 
    	printf("\n");
	}
	for(i=0;i<j;i=i+2)
	{
		dizi[i]=dizi[i]<<1;
		dizi[i]=dizi[i]|dizi[i+1];
		if(dizi[i]==0)
		{
			sayac0++;
		}
		else if(dizi[i]==1)
		{
			sayac1++;
		}
		else if(dizi[i]==2)
		{
			sayac2++;
		}
		else if(dizi[i]==3)
		{
			sayac3++;
		}
		dizi[i]=0;
    }
    if(sayac0>=1)
    {
    	sayact++;
	}
	 if(sayac1>=1)
	{
		sayact++;
	}
	 if(sayac2>=1)
	{
		sayact++;
	}
	 if(sayac3>=1)
	{
		sayact++;
	}
	printf("%d adet farkli kombinasyon vardir",sayact);	
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
