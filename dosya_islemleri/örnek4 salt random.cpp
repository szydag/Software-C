#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	FILE*dosya=fopen("randomNumber.txt","w+");

    int a;
    
    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
    	for(int j=0;j<5;j++)
    	{
    		a=rand();
    		a=a%10;
    		if(a!=0)
    		{
    			printf(" %d ",a);
    			fprintf(dosya," %d ",a);
			}
			else
			{
				j--;
			}
		}
		printf("\n");
		fprintf(dosya,"\n");
		
	}
	fclose(dosya);
	
    

}
