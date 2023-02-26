#include<stdio.h>
void degerDegistir(int *x,int *y)
{
	int gecici=*x;
	*x=*y;
	*y=gecici;
	printf("x: %d  y: %d\n",*x,*y);
}
int main()
{
	int x=5,y=10;
	degerDegistir(&y,&x),
	printf("x: %d   y: %d",x,y); 
	
	return 0;
}
