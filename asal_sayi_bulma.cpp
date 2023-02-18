#include<stdio.h>
int asal(int n,int sayac2)
{
	int sayac1=0,i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)				
		{
			sayac1++;
		}
	}
	if(sayac1==0)
	{
		sayac2++;
	    if(sayac2==3)
	    {
	    	return n;
	    }
	   	else
	  	{
	   		n--;
	    	asal(n,sayac2);			
		}
	}
	else
	{
		n--;
		asal(n,sayac2);
	}
}
int main()
{
	int n,sayac2=0;
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);
	if(n<6)
	{
		printf("!! Girdiginiz sayidan kucuk uc adet asal sayi yoktur!!\n\n\n");
	}
	else
	{
		printf(" ** %d sayisindan kucuk en buyuk 3. asal sayi %d dir **\n\n\n",n,asal(n-1,sayac2));
	}
	main();
}
