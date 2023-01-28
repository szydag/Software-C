#include<stdio.h>
#include<string.h>
//"w"=dosyaya yazmaya yarýyor eger o isimde bir dosya yoksa açýyor
 // "r"=dosyadan okumaya yarýyor	
 // "a"=var olan bir dosyanýn içindekileri degiþtirmemizwe yarýyor
 // "w+" = hem yazma hem de okuma
 //filep("dosya_adý","mod")=bu dosyaya bu iþlemi yapýyor
 //fopen = dosya acma
 //fclose= dosya kapama
 //fputc(character,filep) = bu karakteri bu dosyaya yazýyor
 //fputs
	                                      
int main()
{
	char veri[256];
	int uzunluk= strlen(veri);
	int i;
	FILE*dosya=fopen("dosya.txt","a");    
	if(dosya==0)
	{
		printf("dosya olusmadý");
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
