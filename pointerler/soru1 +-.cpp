#include<stdio.h>
int main()
{
	int n,dizi[100];
	printf("kac adet tam sayi gireceksiniz: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("%d. sayi: ",i+1);
		scanf("%d",&dizi[i]);
		
	}
	printf("\npozitif sayilar: ");
	for(int i=0;i<n;i++)
	{
		if(dizi[i]>=0)
		{
	    	printf(" %d ",*(dizi+i));
		}
	}
	printf("\nnegatif sayilar: ");
	for(int i=0;i<n;i++)
	{
		if(dizi[i]<0)
		{
	    	printf(" %d ",*(dizi+i));
		}
	}
	return 0;
	
}
