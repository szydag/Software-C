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
	for(ftellSonucu=ftell(dosya)-1;ftellSonucu>=0;ftellSonucu--)
	{
		fseek(dosya,ftellSonucu,SEEK_SET);
		{
			printf("%c",getc(dosya));
		}
	}
	fclose(dosya);
}
