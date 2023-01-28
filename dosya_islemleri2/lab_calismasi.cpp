#include<stdio.h>
void rasgeleOku(FILE*dosya,int baslangicIndex,int artisMiktari,int a)
{
   
    fseek(dosya,baslangicIndex,SEEK_SET);
	while(ftell(dosya)<a)
	{
		printf("%c",getc(dosya));
		fseek(dosya,artisMiktari,SEEK_CUR);
	}
	
}
int main()
{
	FILE*dosya=fopen("dosya.txt","w+");
	char metin[1000];
	printf("bir metin giriniz: ");
	gets(metin);
	fprintf(dosya,"%s",metin);

    int a=sizeof(metin);
	int baslangicIndex, artisMiktari;
	printf("dosya okunmaya nereden baslanmali: ");
	scanf("%d",&baslangicIndex);
	printf("artis miktarini giriniz: ");
	scanf("%d",&artisMiktari);
	rasgeleOku(dosya,baslangicIndex,artisMiktari,a);
	fclose(dosya);
}
