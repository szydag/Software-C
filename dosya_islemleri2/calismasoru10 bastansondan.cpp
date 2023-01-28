#include<stdio.h>
int main()
{
	FILE*dosya=fopen("string.dat","w+");
	FILE*dosyas=fopen("string2.dat","w");
	char metin[20];
	int ftellSonucu[20],i;
	for( i=0;i<5;i++)
	{
		printf("string giriniz: ");
		scanf("%s",metin);
		fprintf(dosya,"%s\n",metin);
		ftellSonucu[i]=ftell(dosya);
	}
    i=0;
	rewind(dosya);
	while(i-1<=5-i-2)
	{
		
	    fseek(dosya,ftellSonucu[i-1],SEEK_SET);
	    while(getc(dosya)!='\n')
		{
			fseek(dosya,-1,SEEK_CUR);
			printf("%c",getc(dosya));
			fseek(dosya,-1,SEEK_CUR);
			fprintf(dosyas,"%c",getc(dosya));
		}
		printf("\n");
		fprintf(dosyas,"\n");
		fseek(dosya,ftellSonucu[5-i-2],SEEK_SET);
		while(getc(dosya)!='\n')
		{
			fseek(dosya,-1,SEEK_CUR);
			printf("%c",getc(dosya));
			fseek(dosya,-1,SEEK_CUR);
			fprintf(dosyas,"%c",getc(dosya));
		}
		printf("\n");
		fprintf(dosyas,"\n");
		i++;
	}
	fclose(dosya);
	fclose(dosyas);
}
