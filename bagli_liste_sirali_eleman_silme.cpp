#include<stdio.h>   //not: dosyayi direkt okuma modunda actigim 
#include<stdlib.h>  //zaman okumuyordu bende önce yazdirip sonra okudum
                    //bagli listeye ismi kaydederken tum dugumlere 
typedef struct Dugum//hafizaya en son aldigi ismi kaydediyor bu problemi cözemedim
{
	int no,vize,final;
	char*adi;
	struct Dugum*sonraki;
}Dugum;


Dugum*ilk=NULL;
Dugum*gecici=NULL;
Dugum*onceki=NULL;

char*format="%d\t%s\t%d\t%d\n";

int Listele()
{
	gecici=ilk;
	do
	{
		printf("%d   %s   %d   %d\n",gecici->no,gecici->adi,gecici->vize,gecici->final);
		gecici=gecici->sonraki;
	}
	while(gecici!=ilk);
}

ListeyeEkle(int no,char*ad,int vize,int final)
{
	Dugum*yeni=(Dugum*)malloc(sizeof(Dugum));
	yeni->no=no;
	yeni->adi=ad;
	yeni->vize=vize;
	yeni->final=final;
	if(ilk==NULL)
	{
		ilk=yeni;
		ilk->sonraki=ilk;
		gecici=ilk;
	}
	else
	{
		gecici->sonraki=yeni;
		yeni->sonraki=ilk;
		gecici=yeni;
    }
}
OyuncuCikar(int i) //fonksiyonu özyinelemeli sekilde yazdim 
{                  //ilkin gösterdigi adres yine ilk olana kadar 
                   //yani tek bir dugum kalana kadar devam ediyor.
	Dugum*onceki=NULL;
	if(ilk->sonraki==ilk)
	{
		printf("\n\n\nKAZANAN  ");
		printf("%d   %s   %d   %d\n",gecici->no,gecici->adi,gecici->vize,gecici->final);
		return 0;
	}
	for(int j=0;j<i;j++)
    {
		onceki=gecici;
		gecici=gecici->sonraki;
	}
	i=(gecici->no)%10;
	printf("\n%d   %s   %d   %d",gecici->no,gecici->adi,gecici->vize,gecici->final);
	printf("     CIKARILIYOR");
	if(gecici==ilk) //cikarilan dugum ilk dugumse ilk dugumu guncellemem gerektigi icin
	{
		gecici=gecici->sonraki;
     	onceki->sonraki=gecici;
     	ilk=gecici;
	}
	else
	{
		gecici=gecici->sonraki;
    	onceki->sonraki=gecici;
	}
	
	printf("\n\n");
	Listele();
	OyuncuCikar(i);

}

int main()
{
	FILE*dosya=fopen("ogrenci.txt","w+");
	fprintf(dosya,"21010501\tAli\t10\t60\n");
	fprintf(dosya,"21010503\tVeli\t55\t20\n");
	fprintf(dosya,"21010504\tSami\t70\t75\n");
	fprintf(dosya,"21010505\tYusuf\t100\t60\n");
	fprintf(dosya,"21010509\tAyse\t90\t40\n");
	fprintf(dosya,"21010511\tFatma\t80\t90\n");
	fprintf(dosya,"21010512\tSukru\t50\t100\n");
	fprintf(dosya,"21010513\tSelman\t45\t50\n");
	fprintf(dosya,"21010514\tSema\t85\t60\n");
	fprintf(dosya,"21010515\tAhmet\t60\t70");
	
    rewind(dosya);
	if(dosya==0)  
	{
		printf("Boyle bir dosya bulunmadi:(");
	}
	else
	{
    	while(!feof(dosya))
     	{
     		int no,vize,final;
            char ad[10];
	        fscanf(dosya,format,&no,&ad,&vize,&final);
	        ListeyeEkle(no,ad,vize,final);
    	}
    }
	fclose(dosya);
	Listele();
	gecici=ilk;
    OyuncuCikar(1);
    return 0;
}
