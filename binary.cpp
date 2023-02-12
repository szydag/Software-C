#include<stdio.h>
int main()
{
	int n,x,y,veri,sonuc,sayac=0;
	printf("bir sayi gir: ");
	scanf("%d",&n);
	for(x=31;x>=0;x--)
	{
		veri=n;
	    veri=veri>>x;
	    sonuc=veri%2;
		if(sonuc==1)
		{
			printf("1");
			sayac++;
		}
		else
		{
			if(sayac!=0)
			{
				printf("0");
			}
		
		}
		veri=veri<<x;
		veri=veri|n;
		
	}
	printf("\n\n");
	main();
}
