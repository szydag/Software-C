#include<stdio.h>
int main()
{
	FILE*dosya=fopen("Dosya.txt","w+");
	char metin[100];
	int ftellSonucu;
	printf("bir metin giriniz: ");
	gets(metin);
	fputs(metin,dosya);

	int okunanKarakter;
	for(ftellSonucu=ftell(dosya);ftellSonucu>=0;ftellSonucu=ftellSonucu-2)
	{
		fseek(dosya,ftellSonucu,SEEK_SET);
		{
			printf("%c",getc(dosya));
		}
	}
	fclose(dosya);
}
