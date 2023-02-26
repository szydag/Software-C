#include<stdio.h>

int main()
{
	int sayilar[]={1,2,3,4,5};
	int *p=sayilar;
	printf("%u\n",*p);
	printf("%u\n",*p+1);
	printf("%d",sayilar[1]);
	return 0;
}
