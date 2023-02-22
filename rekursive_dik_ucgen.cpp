// dik üçgen oluþturma
#include<stdio.h>
int ucgen(int n ,int i)
{
	int j;
	if(i>n)
	{ 
	   	return 404;
	}
	else
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
		i=i+2;
		ucgen(n,i);
		
	}

}
int main()
{
	int n,i=1;
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);
	ucgen(n,i);
	printf("\n\n\n");
	main();
}
