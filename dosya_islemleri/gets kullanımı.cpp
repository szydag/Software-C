#include<stdio.h>
int main()
{
	FILE*dosya=fopen("dosya.txt","w+");
	char metin[100];
	printf("bir metin giriniz:  ");
	gets(metin);
	fputs(metin,dosya);
	printf("dosyadan okunan...");
	rewind(dosya);
//	while(!feof(dosya))
	{
		if(dosya==0)
		{
			printf("dosya bulunamadi...");
		}
		fgets(metin,100,dosya);
    	printf("%s",metin);
	}
	fclose(dosya);
}
