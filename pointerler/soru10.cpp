#include<stdio.h>
int main()
{
	int matris[10][10];
	int sayi=0;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
        	if(sayi%7==0)
			{
				matris[i][j]=sayi;
				
	    	}
	    	else
	    	{
	    		j--;
			}
			sayi++;
		}
	}
	
	for(int i=9;i>=0;i--)
	{
		for(int j=9;j>0;j--)
		{
			printf("%d  ",matris[i][j]);
		}
		printf("\n");
	}

}
