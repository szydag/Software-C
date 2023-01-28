#include<stdio.h>
int main()
{
	FILE*dosya=fopen("dosya.txt","w+");
	char dizi[100];
	printf("gir: ");
	gets(dizi);
	for(int i=0;dizi[i];i++)
	{
		putc(dizi[i],dosya);
	}

   
	char okunanKarakter;
	//	rewind(dosya); ayný iþi aþagýdaki de görüyor
	 fseek(dosya,3,SEEK_SET); //ortadaki sayýyla yerini belirliyoruz mesela 1se 1byte atlayarak imlecin yerini belirliyor
	 printf("ftell sonucu: %d\n",ftell(dosya)); //imlecin nerede olugunu gösteriyot
	while((okunanKarakter = getc(dosya))!= EOF)
	{
		printf(" %c",okunanKarakter);
		fseek(dosya,1,SEEK_CUR);
		
	}
	fclose(dosya);
	
	
}
