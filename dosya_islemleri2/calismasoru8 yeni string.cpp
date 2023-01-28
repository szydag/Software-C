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
		scanf("%s",&metin);
		fprintf(dosya,"%s\n",metin);
		ftellSonucu[i]=ftell(dosya);
	}
	int sira;
	printf("Kacinci siraya yeni string ekleyeceksiniz: ");
	scanf("%d",&sira);
	fseek(dosya,ftellSonucu[sira-2],SEEK_SET);
	printf("ekleyeceginiz stringi giriniz: ");
	scanf("%s",&metin);
	fprintf(dosya,"%s",metin);
	fclose(dosya);
	return 0;
}
