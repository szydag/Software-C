#include<stdio.h>
int main()
{
	FILE*dosya=fopen("dosya.txt","w+");
	int boyut=10;
	int dizi[boyut]={1,2,3,4,5,6,7,8,9,10};
	char*format="%d\t%d\t%d\n";
	for(int i=0;i<boyut-2;i++)
	{
		fprintf(dosya,format,dizi[i],dizi[i+1],dizi[i+2]);
	
	}
	for(int i=0;i<boyut-2;i++)
	{	
	    fscanf(dosya,format,&dizi[i],&dizi[i+1],&dizi[i+2]);
		printf(format,dizi[i],dizi[i+1],dizi[i+2]);
	}
}
