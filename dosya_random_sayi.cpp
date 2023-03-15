#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	FILE*dosya=fopen("randomNumber.txt","w+");
    int a[10],yedek;
    for(int i=0;i<10;i++)
    {
    	yedek=a[i]>>4;
        if(yedek > 0)
    	{
            a[i]=rand();
            printf("%d\n",a[i]);
    	    fprintf(dosya,"%d\n",a[i]);
     	}
		else
		{
			i--;
		}
	}
	
}
