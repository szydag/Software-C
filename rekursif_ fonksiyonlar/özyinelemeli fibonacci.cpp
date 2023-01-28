#include<stdio.h>
int fib(int n,int sonuc)
{
	if(n==1)
	{
		return sonuc;
	}
	else if(n==2)
	{
		return sonuc;
	}
	else
	{
		sonuc=fib((n-1),sonuc)+fib((n-2),sonuc);	
	}
}
int main()
{
	int n, sonuc=1;
	printf("fibonacci dizisinin kacinci basamagini hesaplamak istiyorsunuz: ");
	scanf("%d",&n);
	
	printf("fibonacci dizisinin %d. basamagi %d\n\n\n",n,fib(n,sonuc));
	main();
}
