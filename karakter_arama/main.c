#include<stdio.h>
#include<stdlib.h>

typedef struct karakter{
	char deger;
	karakter*onceki;
	karakter*sonraki;
}karakter;


karakter*ilk=NULL;
karakter*son=NULL;

KarakterEkle(char deger){
	karakter*yeni=(karakter*)malloc(sizeof(karakter));
	yeni->deger=deger;
	if(ilk==NULL){
		ilk=yeni;
		son=yeni;
		ilk->onceki=NULL;
		son->sonraki=NULL;
	}else{
		son->sonraki=yeni;
		yeni->onceki=NULL;
		son=yeni;
		son->sonraki=NULL;
	}
}


KarakterYazdir(int baslangic,int adet){
    karakter*yazdir=ilk;
    int basla=0;
	while(yazdir!=NULL){
		if(basla >= baslangic && basla < baslangic+adet){
			printf("%c  ",yazdir->deger);
		}
		yazdir=yazdir->sonraki;
		basla++;
	}
}

SayiYazdir(int baslangic,int adet){
	karakter*yazdir=ilk;
	int basla=0;
	while(yazdir!=NULL){
		if(basla >= baslangic && basla < baslangic+adet){
			printf("%c  ",yazdir->deger);
		}
	    yazdir=yazdir->sonraki;
		basla++;
	}
}

int main(){
	FILE *dosya = fopen("karakter.txt", "r");
    char deger[20];
	int sayac=0;
	if(dosya==0){
		printf("DOSYA BULUNMADII !!");
	}
	while(! feof(dosya)){
		fscanf(dosya,"%c\n",&deger[sayac]);
		sayac++;
	}
	printf("Okunan degerler:\n");
	for(int i=0;i<sayac;i++){
		printf("%c  ",deger[i]);
	}
	int maxkarakter=0;
	int karakterbaslangic;
	int maxrakam=0;
	int rakambaslangic;
	for(int i=0;i<sayac;i++){
    	int karaktersayac=0;
	    int rakamsayac=0;
	    int yedekkarakter=i;
	    int yedekrakam=i;
		if(deger[i] > 64 && deger[i] < 123){
		  	KarakterEkle(deger[i]);
		  	while(deger[yedekkarakter] > 64 && deger[yedekkarakter] < 123){
	            yedekkarakter++;
		     	karaktersayac++;
	    	}
    	}
		if(karaktersayac>maxkarakter){
			maxkarakter=karaktersayac;
			karakterbaslangic=i;
		}
		if(deger[i] > 47 && deger[i] < 58 ) {
			KarakterEkle(deger[i]);
			while(deger[yedekrakam] > 47 && deger[yedekrakam] < 58 ) {
		    	yedekrakam++;
		    	rakamsayac++;
		    }
		}
		if(rakamsayac > maxrakam){
			maxrakam=rakamsayac;
			rakambaslangic=i;
		}
	}
	printf("\n\nEn uzun karakter dizisi:\n");
	KarakterYazdir(karakterbaslangic,maxkarakter);
	printf("\nEn uzun rakam dizisi:\n");
	SayiYazdir(rakambaslangic,maxrakam);

    
    printf("\n\n\nAradiginiz karakter dizisini(3 karakter) aralarina virgul koyarak giriniz: (cikis yapmak icin 0 giriniz: )");
	char char1;
	char char2;
    char char3;
    scanf("%c,%c,%c",&char1,&char2,&char3);
    int kontrol=0;
    karakter*gecici=ilk;
    for(int i=0;i<sayac-2;i++){
		if(gecici->deger== char1){
		    gecici=gecici->sonraki;
			if(gecici->deger== char2){
				gecici=gecici->sonraki;
				if(gecici->deger==char3){
		           printf("Evet mevcuttur");
		           	kontrol=1;
		           	break;
				}
				gecici=gecici->onceki;
			}
			gecici=gecici->onceki;
	   	}
	    	gecici=gecici->sonraki;
   	}
   	if(kontrol==0){
	   	printf("Hayir mevcut degildir");
   	}
   
}
