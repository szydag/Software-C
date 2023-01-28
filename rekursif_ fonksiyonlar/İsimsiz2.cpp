#include<stdio.h>
int fibonacci(int n,int sonuc)
{
	if(n==0 )
	{
		return 0;
	}
	else if( n==1)
	{
		return 1;
	}
	else
	{
		sonuc=fibonacci(n-1,sonuc)+fibonacci(n-2,sonuc);
	}
	
}
int main()
{
	int n,sonuc=0;
	printf("\nfibonzcci dizisinin kacinci basamagini hesaplayacaksiniz: ");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("hatali deger girdiniz!!");
	}
	else
	{
		printf(" fibonacci dizisinin %d. basamagi %d dir",n,fibonacci(n,sonuc));
	}
	main();
}
