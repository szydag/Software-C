#include<stdio.h>
int main()
{
	FILE*dosya=fopen("dosya.txt","w+");
	int boyut=100;
	int baslangic[5];
	char eleman[boyut];
	for(int i=0;i<5;i++)
	{
		printf("\n %d. elemani yaz: ",i+1);
	//	gets(eleman); //yan yana yaz�yor a�ag�daki bir alt sat�ra geciyor
		fgets(eleman,boyut,stdin); //stdin standart input, b�yle yaz�nca veri kullan�c�dan
		fputs(eleman,dosya);
		baslangic[i]=ftell(dosya);
		printf("\n ftell: %d ",ftell(dosya));
	}
	char okunanEleman[boyut];
	rewind(dosya);
    int	j=0;
	while(j<5)
	{
		fgets(okunanEleman,boyut,dosya); //b�yle yaz�nca dosyadan okuyor
		j++;
		fseek(dosya,baslangic[j],0); 
		printf("\n%s",okunanEleman);
	
	}
	
}
