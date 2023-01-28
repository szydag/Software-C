#include<stdio.h>
int main()
{
	
	FILE*dosya=fopen("ders_ornek1.txt","w");
	if(dosya==0)
	{
		printf("boyle bir dosya bulunmadi");
	}
	else
	{
		for(int i=0;i<10;i++)
		{
		    fprintf(dosya,"%d\n",i+1);
	    }
	}
	fclose(dosya);
}
