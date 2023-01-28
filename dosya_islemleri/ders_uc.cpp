#include<stdio.h>
DosyayaYaz(FILE*dosya)
{
	for(int i=0;i<25;i++)
	{
		fprintf(dosya,"%d\n",i+1);
	}
}
DosyadanOku(FILE*dosya)
{
	int gelenSayi;
	while(fscanf(dosya,"%d\n",&gelenSayi)!=EOF)
	{
		printf("okunan sayi %d\n",gelenSayi);
	}
}

main()
{
	FILE*dosya=fopen("ders_uc.txt","w+");
	if(dosya==0)
	{
		printf("\n dosya bulunmadi");
	}
	//DosyadanOku(dosya);
	DosyayaYaz(dosya);
	rewind(dosya);
	printf("hepsini okuyalim hadi...\n\n");
	DosyadanOku(dosya);
	printf("\n\ndosyamiz hazir...");	

}
