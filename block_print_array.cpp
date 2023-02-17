#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*dosya=fopen("ikiliDosya.txt","w");
	int boyut=5;
    int dizi[boyut];
	for(int i=0;i<boyut;i++)
	{
		printf("%d. sayiyi giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	fwrite(&dizi,sizeof(dizi),1,dosya);
	fclose(dosya);
	return 0;
   
}
