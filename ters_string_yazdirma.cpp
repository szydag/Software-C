#include<stdio.h>
int main()
{
	FILE*dosya=fopen("Dosya.txt","w+");
	char metin[100];
	//int ftellSonucu;
	printf("bir metin giriniz: ");
	gets(metin);
	fputs(metin,dosya);
    int i=1;
	while(ftell(dosya)>=0)
	{
		fseek(dosya,sizeof(metin)-i,SEEK_SET);
		printf("%c",getc(dosya));
		i++;
	}
	fclose(dosya);
	return 0;
}
