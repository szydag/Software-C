#include<stdio.h>
int main()
{
	FILE*dosya=fopen("OgrenciNotlar.txt","r+");
	char*format="%d\t %s\t %d\t %d\n";
    int	okunanKarakter;
    int num,vize,final;
    char ad[20],arananKarakter;
    int arananRakam;
    
   	while(!feof(dosya))
	{
		fscanf(dosya,format,&num,&ad,&vize,&final);
		printf(format,num,ad,vize,final);
	}
	
	
	printf("aradýginiz karakteri giriniz: ");
    scanf("%s",&arananKarakter);
 
    
    char okunan;
    rewind(dosya);
    while(!feof(dosya))
    {
    	okunan=getc(dosya);
    	if(arananKarakter==okunan )
    	{
    		printf("%d de bulundu\n",ftell(dosya));
		}
	}
}
