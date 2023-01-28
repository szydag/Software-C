#include<stdio.h>
int main()
{
	FILE*dosya=fopen("string.dat","w+");
	char metin[20];
	int ftellSonucu[20];
	int i;
	for( i=0;i<5;i++)
	{
		printf("string giriniz: ");
		scanf("%s",metin);
		fprintf(dosya,"%s\n",metin);
		ftellSonucu[i]=ftell(dosya);
	}
	while(i>0)
	{
		fseek(dosya,ftellSonucu[i-2],SEEK_SET);
		while(getc(dosya)!='\n')
		{
			fseek(dosya,-1,SEEK_CUR);
			printf("%c",getc(dosya));
		}
		printf("\n");
		i--;
	}
	fclose(dosya);
	return 0;
}
