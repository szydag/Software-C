#include<stdio.h>
#include<math.h>
void decimal(int sayi)
{
	int i=0,sonuc2=0,sonuc3=0;
	while(sayi>0)
	{
		sonuc2=sayi%2;
		sonuc3=sonuc3+sonuc2*pow(2,i);
		i++;
		sayi=sayi>>1;
	}
	printf("       onluk karsiligi: %d\n\n",sonuc3);
}
int donus(int n,int dizi[],int i)
{
	int sonuc,veri;
	if(n==0)
	{
		printf("tersi:");
    	sonuc=0;
		for(int j=i-1;j>=0;j--)
		{
		    printf("%d",dizi[j]);
		}
		for(int j=i-1;j>=0;j--)
		{
			sonuc=sonuc+dizi[j];
			sonuc=sonuc<<1;
		}
		sonuc=sonuc>>1;
		decimal(sonuc);
	}
	else
	{
		sonuc=n%2;
		dizi[i]=sonuc;
		if(dizi[i]==0)
		{
			dizi[i]=1;
		}
		else
		{
			dizi[i]=0;
		}
		i++;
		n=n>>1;
		donus(n,dizi,i);
		
	}
}

int main()
{
	int n,dizi[100],i=0;
	printf("bir sayi gir: ");
	scanf("%d",&n);
	donus(n,dizi,i);
	main();
}
