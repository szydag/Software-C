//eþkenar üçgen oluþturma
#include<stdio.h>
int es_ucgen(int n, int i)
{
	int j,k;
	if(i>n)
	{
		return 404;
	}
	else
	{
		for(j=0;j<i;j++)
		{
		
		}
		printf("\n");
		i=i+2;
		es_ucgen(n,i);
	}
	
}
int main()
{
	int n,i=1;
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);
	es_ucgen(n,i);
	main();
}
