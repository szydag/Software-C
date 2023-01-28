#include<stdio.h>
int main()
{
	FILE*dosya=fopen("randomNumber2.txt","r");
	FILE*dosyac=fopen("cift.txt","w");
	char*format="%d %d %d\n";
	int say1,say2,say3,satir=1;
	while(!feof(dosya))
	{
		fscanf(dosya,format,&say1,&say2,&say3);
		if(satir%2==0)
		{
			fprintf(dosyac,format,say1,say2,say3);
		}
		satir++;
	}
}
