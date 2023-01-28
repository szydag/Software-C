#include<stdio.h>
int main()
{
	FILE*dosya=fopen("Dosya.txt","w+");
	char metin[100];
	printf("bir metin giriniz: ");
	gets(metin);
	fputs(metin,dosya);
	rewind(dosya);
	int okunanKarakter;
	while(!feof(dosya))
	{
		okunanKarakter=getc(dosya);
		if(okunanKarakter>=65 && okunanKarakter<=90)
		{
			okunanKarakter=okunanKarakter+32;
			printf("%c",okunanKarakter);
		}
		else if(okunanKarakter>=97 && okunanKarakter<=122)
		{
			okunanKarakter=okunanKarakter-32;
			printf("%c",okunanKarakter);
		}
		else
		{
			printf("%c",okunanKarakter);
		}
	}
	fclose(dosya);
}
