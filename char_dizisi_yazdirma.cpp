#include<stdio.h>
int main()
{
	FILE*dosya=fopen("Dosya.txt","w+");
	char metin[100];
	printf("bir metin giriniz: ");
	gets(metin);
	fputs(metin,dosya);

	fclose(dosya);
}
