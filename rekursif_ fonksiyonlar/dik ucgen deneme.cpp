#include<stdio.h>
int dik_ucgen(int n,int i)
{
	int j;
	if(i>n)
	{
		return 404;
	}
	else
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	    i=i+2;
	    dik_ucgen(n,i);
	}

}
int main()
{
	int n,i=0;
	printf("n degerini giriniz: ");
	scanf("%d",&n);
	dik_ucgen(n,i);
	
	
}
