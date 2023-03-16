#include<stdio.h>
int main()
{
	FILE*dosya=fopen("string.dat","w+");
	FILE*dosyas=fopen("sira.dat","w");
	char metin[20];
	int ftellSonucu[20],i;
	for( i=0;i<5;i++)
	{
		printf("string giriniz: ");
		scanf("%s",metin);
		fprintf(dosya,"%s\n",metin);
		ftellSonucu[i]=ftell(dosya);
	}
	int sonuc;
	i=0;
	printf("tek satiri yazdirmak istiyorsaniz 1e cift satiri yazdirmak icin 2 ye basiniz:");
	scanf("%d",&sonuc);
	rewind(dosya);
	if(sonuc==1)
	{
	    while(i<5)
	    {
			while(getc(dosya)!='\n')
			{
				fseek(dosya,-1,SEEK_CUR);
				printf("%c",getc(dosya));
			}
			printf("\n");
			i+=2;
			fseek(dosya,ftellSonucu[i-1],SEEK_SET);
			
			
    	}
	}
	else
	{
		i=1;
		while(i<5)
		{
			fseek(dosya,ftellSonucu[i-1],SEEK_SET);
			i=i+2;
			while(getc(dosya)!='\n')
			{
				fseek(dosya,-1,SEEK_CUR);
				printf("%c",getc(dosya));
			}
			printf("\n");
			
			
		}
	}
	fclose(dosya);
	return 0;
}

