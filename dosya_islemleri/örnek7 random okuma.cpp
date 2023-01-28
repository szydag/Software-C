#include<stdio.h>


int main()
{
	FILE*dosya=fopen("randomNumber.txt","r");
	FILE*dosyac=fopen("cift.txt","w");
	FILE*dosyat=fopen("tek.txt","w");
	int a[5];
	
	if(dosya==0)
	{
		printf("randomNumber dosyasý bulunamadi");
	}
	else
	{
		for(int i=0;i<10;i++)
		{
			
			fscanf(dosya," %d  %d  %d  %d  %d \n",&a[0],&a[1],&a[2],&a[3],&a[4]);
			printf("%d%d%d%d%d\n",a[0],a[1],a[2],a[3],a[4]);
	    	if(i%2==0)
	    	{
	    		printf("tek dosyaya yazdiriliyor...\n");
	    		fprintf(dosyat,"%d%d%d%d%d\n",a[0],a[1],a[2],a[3],a[4]);
			}
			else
			{
				printf("cift dosyaya yazdiriliyor...\n");
				fprintf(dosyac,"%d%d%d%d%d\n",a[0],a[1],a[2],a[3],a[4]);
			}
		}
	
	}
	fclose(dosya);
	
}
