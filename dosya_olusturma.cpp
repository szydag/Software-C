#include<stdio.h>
int main()
{
	FILE*dosya=fopen("dosya.txt","w");    //"w"=dosyaya yazmaya yar�yor eger o isimde bir dosya yoksa a��yor
                                          // "r"=dosyadan okumaya yar�yor	
	                                      // "a"=var olan bir dosyan�n i�indekileri degi�tirmemizwe yar�yor
	                                      // "w+" = hem yazma hem de okuma
	
	if(dosya==0)
	{
		printf("dosya olusturulamadi");
	}
	else
	{
		printf("dosya olusturuldu");
	}
	
	return 0;
}
