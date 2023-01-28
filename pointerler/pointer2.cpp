#include<stdio.h>
int main()
{
	int i,j=1;
	int *jp1,*jp2=&j;
	jp1=jp2;
	
	i=++(*jp2);
	*jp2=*jp1+i;
	printf(" i= %d\n j=%d\n *jp1= %d\n *jp2=%d",i,j,*jp1,*jp2);
}
