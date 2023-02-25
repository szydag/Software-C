#include<stdio.h>
int main()
{
	FILE*dosya=fopen("dosya.txt","w+");
	char metin[100];
	printf("bir metin giriniz:  ");
	gets(metin);
    for(int i=0;i<20;i++)
	{
		putc(metin[i],dosya);
	}
	printf("dosyadan okunan...");
	rewind(dosya);
	char okunan;
	while(!feof(dosya))
	{
	    okunan=getc(dosya);
    	printf("%c",okunan);
	}
	fclose(dosya);
}
