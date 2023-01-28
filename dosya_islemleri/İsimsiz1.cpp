#include<stdio.h>
// DosyaYaz(File *dosya)
/*{
	for(int i=0;i<10;i++)
	{
		frintf(dosya,"%d\n"(i+1)*10);
	}
	fclose(dosya);
}*/
int main()
{
	FILE *dosya=fopen("dosya.txt","w");
	if (dosya==0)
	{
		printf("\n dosya yok");
	}
	for(int i=0;i<10;i++)
	{
		fprintf(dosya, "%d\n",i+1);
		
	}
	printf("dosyamiz hazir...");
//	fclose(dosya);
int gelensayi;
     
     while(fscanf(dosya,"%d\n",gelensayi) !=EOF)
     {
     	printf("\n %d",gelensayi);
	 }
}
