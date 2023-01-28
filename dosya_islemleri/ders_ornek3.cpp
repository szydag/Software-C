#include<stdio.h>
BinaryOku(FILE*dosya)
{
	int boyut=20;
	int yeniDizi[boyut];
	
	fread(yeniDizi,sizeof(yeniDizi),1,dosya);
		for(int i=0;i<boyut;i++)
	{
		printf("\n%d",yeniDizi[i+10]);
		
	}
	
}
BinaryGrupOku(FILE*dosya)
{
	int boyut=5;
	int yeniDizi[boyut];
	int GrupIndex=1;
	while(!feof(dosya))
	{
		fread(yeniDizi,sizeof(yeniDizi),1,dosya);
		printf("\n %d. grup bilgileri...",GrupIndex++);
	}
}
main()
{
	FILE*dosya=fopen("dosyaBinary.txt","wb");
	
	int boyut=20;
	int dizi[boyut];
	for(int i=0;i<boyut;i++)
	{
		fprintf(dosya,"\n%d",	dizi[i]=(i+1)*10);
	
		
	}
	fwrite(dizi,sizeof(dizi),1,dosya);
	int yeniDizi[20];
	BinaryOku(dosya);
	BinaryGrupOku(dosya);
	fread(dizi,sizeof(dizi),1,dosya);
	fclose(dosya);
}
