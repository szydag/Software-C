#include<stdio.h>
int main()
{
	FILE*dosya=fopen("dosya.txt","w+");
	int n,i,ftellSonucu[100];
	char isim[20];
	printf("Kac adet ogrenci girisi yapacaksiniz: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d. ogrenciyi giriniz: ",i+1);
		scanf("%s",&isim);
		fprintf(dosya,"%s\n",isim);
		ftellSonucu[i]=ftell(dosya); //imlecin yerini daha sonra degisim asamasinda kullanmak icin bir diziye kaydettim.
	}
	
	
	int yazdirilacakOgrenci,sayacYazdirilan=0,sayacKarakter=0;
	i=0;
	int kullanildi[n],j=0;
	
	printf("Kac adet ogrenci yazdiracaksiniz: ");
	scanf("%d",&yazdirilacakOgrenci);
	
	rewind(dosya);
	while(sayacYazdirilan<=yazdirilacakOgrenci)
	{
		kullanildi[j]=ftell(dosya); //imlecin yerini ardisik olarak tekrar kullanilmasin diye kaydettim
		while(getc(dosya)!='\n')
		{
			fseek(dosya,-1,SEEK_CUR); //while icinde kontrol icin yaptigim islemi geri almak icin
			printf("%c",getc(dosya));
			sayacKarakter++;
		}
		sayacYazdirilan++;
		printf("  => %d\n",sayacYazdirilan);
		
		
		while(ftellSonucu[i]<ftell(dosya)) //imlecin kacinci ftellSonuc[?] yerinde oldugunu bulmak icin 
		{                                  //imlec yerini belirlemek icin baslangici referans aldim
			i++;                           //bu yuzden  baslangýca olan uzaklikla atlanmasi gereken uzakligi topladim
		}
		fseek(dosya,ftellSonucu[i+sayacKarakter-1],SEEK_SET);
		
		
		while(i+sayacKarakter-1>=n-1) // gitmem gereken yer dosyadan daha buyukse kucuk olana kadar dosya buyuklugunu
		{                             // (ftellSonucu[n-1]=dosya buyuklugu) cikardim.
			fseek(dosya,ftellSonucu[i+sayacKarakter-1-n],SEEK_SET);
			sayacKarakter=i+sayacKarakter-1-n+1-i;
		}
		
		if(ftell(dosya)==kullanildi[j]) //eger imlecin yeri bir onceki adimda kullanilmissa bir sonraki stringe gecmek icin
		{
			fseek(dosya,ftellSonucu[i+sayacKarakter],SEEK_SET);
			while(i+sayacKarakter>=n-1) //yeni imlec yeri dosyadan daha buyukse...
			{
				fseek(dosya,ftellSonucu[i+sayacKarakter-1-n+1],SEEK_SET);
				sayacKarakter=i+sayacKarakter-1-n+1-i;
			}
		}
		
		sayacKarakter=0;
		i=0;
		j++;
		
	}
	fclose(dosya);
}
