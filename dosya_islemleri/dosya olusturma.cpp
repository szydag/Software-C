#include<stdio.h>
int main()
{
	FILE*dosya=fopen("dosya.txt","w");    //"w"=dosyaya yazmaya yarýyor eger o isimde bir dosya yoksa açýyor
                                          // "r"=dosyadan okumaya yarýyor	
	                                      // "a"=var olan bir dosyanýn içindekileri degiþtirmemizwe yarýyor
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
