#include<stdio.h>
#include<string.h>
//"w"=dosyaya yazmaya yar�yor eger o isimde bir dosya yoksa a��yor
 // "r"=dosyadan okumaya yar�yor	
 // "a"=var olan bir dosyan�n i�indekileri degi�tirmemizwe yar�yor
 // "w+" = hem yazma hem de okuma
 //filep("dosya_ad�","mod")=bu dosyaya bu i�lemi yap�yor
 //fopen = dosya acma
 //fclose= dosya kapama
 //fputc(character,filep) = bu karakteri bu dosyaya yaz�yor
 //fputs
	                                      
int main()
{
	char veri[256];
	int uzunluk= strlen(veri);
	int i;
	FILE*dosya=fopen("dosya.txt","a");    
	if(dosya==0)
	{
		printf("dosya olusmad�");
	}
	else
	{
		printf("bir sey yazin: ");
		fgets(veri,256,stdin);
		fputs(veri,dosya);
	
	}
	fclose(dosya);
	
	return 0;
}
