#include<stdio.h>
int main()
{
	FILE*dosya=fopen("string.dat","w");
	char metin[20];
	for(int i=0;i<5;i++)
	{
		printf("string giriniz: ");
		scanf("%s",metin);
		fprintf(dosya,"%s\n",metin);
	}
	fclose(dosya);
	return 0;
}
