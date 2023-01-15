#include<stdio.h>
#include<stdlib.h>
#include<math.h>
	
typedef struct  Dugum{
	int Katsayi;
	int Taban;
	int Us;
	struct Dugum *sonraki;
}Dugum;

Dugum*gecici=NULL;
Dugum*yeni=NULL;
Dugum*ilk=NULL;


DugumTopla(){
	gecici=ilk;
	while(gecici!=NULL){
		int sayi = gecici->Katsayi * (pow(gecici->Taban,gecici->Us));
		printf("%d x %d^%d = %d\n",gecici->Katsayi,gecici->Taban,gecici->Us,sayi);
		gecici=gecici->sonraki;
	}
}

DugumAra(int sayi){
	gecici=ilk;
	while(gecici!=NULL){
		if(gecici->Katsayi * (pow(gecici->Taban,gecici->Us)) == sayi){
			printf("%d x %d^%d = %d",gecici->Katsayi,gecici->Taban,gecici->Us,sayi);
			break;
		}
		gecici=gecici->sonraki;
	}
}

DugumBirlestir(){
	for(int i=0;i<10;i++){
    	gecici=ilk;
		while(gecici->sonraki!=NULL){
	    	Dugum*kontrol = gecici->sonraki;
	    	if(gecici->Taban == kontrol->Taban  &&  gecici->Us == kontrol->Us){
		    	gecici->Katsayi+=kontrol->Katsayi;
		     	kontrol=kontrol->sonraki;
		      	gecici->sonraki=kontrol;
		      	break;
	    	}
	    	gecici=gecici->sonraki;
    	}
	}
}

int KatsayiSirala(Dugum*degis1,Dugum*degis2){
	if(degis1->Katsayi > degis2->Katsayi){
		int tempu=degis1->Us;
	   	int tempt=degis1->Taban;
	   	int tempk=degis1->Katsayi;
	   	degis1->Us=degis2->Us;
	   	degis1->Taban=degis2->Taban;
	   	degis1->Katsayi=degis2->Katsayi;
	   	degis2->Us=tempu;
	   	degis2->Taban=tempt;
	   	degis2->Katsayi=tempk;
	}
	else{
		return 0;
	}
}

int UsSirala(Dugum*degis1,Dugum*degis2){
	if(degis1->Us > degis2->Us){
		int tempu=degis1->Us;
	   	int tempt=degis1->Taban;
	   	int tempk=degis1->Katsayi;
	   	degis1->Us=degis2->Us;
	   	degis1->Taban=degis2->Taban;
	   	degis1->Katsayi=degis2->Katsayi;
	   	degis2->Us=tempu;
	   	degis2->Taban=tempt;
	   	degis2->Katsayi=tempk;
	}
	else if(degis1->Us == degis2->Us){
		KatsayiSirala(gecici,gecici->sonraki);
	}
	else{
		return 0;
	}
}

 DugumEkle(int katsayi,int taban,int us){
    yeni=NULL;
    yeni=(Dugum*) malloc (sizeof(Dugum));
    yeni->Katsayi=katsayi;
    yeni->Taban=taban;
    yeni->Us=us;
    if(ilk==NULL){
    	ilk=yeni;
    	ilk->sonraki=NULL;
    	gecici=ilk;
	}else{
		if(yeni->Taban < ilk->Taban){
			yeni->sonraki=ilk;
			ilk=yeni;
     	}
		else{
			gecici=ilk;
			while(gecici!=NULL){
		    	if(gecici->sonraki ==NULL && gecici->Taban <= yeni->Taban){
		    		yeni->sonraki=NULL;
		    		gecici->sonraki=yeni;
		    		break;
		    	}
		    	if(gecici->sonraki->Taban > yeni->Taban){
		    		yeni->sonraki=gecici->sonraki;
		    		gecici->sonraki=yeni;
		    		break;
				}
		    	gecici=gecici->sonraki;
	    	}
		}	
	}
    for(int i=0;i<10;i++){
    	gecici=ilk;
    	while(gecici!=NULL){
    		if(gecici->sonraki!=NULL &&gecici->Taban == gecici->sonraki->Taban){
    			UsSirala(gecici,gecici->sonraki);
	    	}
	     	gecici=gecici->sonraki;
    	}
	}
}



DugumYazdir(){
	Dugum*gecici=ilk;
	while(gecici!=NULL){
		printf("%d *(%d^%d)\n",gecici->Katsayi,gecici->Taban,gecici->Us);
		gecici=gecici->sonraki;
	}
}
int main(){
	FILE *dosya = fopen("sayilar.txt", "r");
	int katsayi[10];
	int taban[10];
	int us[10];
	int i=0;
	while(! feof(dosya) ){
		fscanf(dosya,"%d %d %d",&katsayi[i],&taban[i],&us[i]);
		i++;
    }
    fclose(dosya);
    for(int i=0;i<10;i++){
    	DugumEkle(katsayi[i],taban[i],us[i]);
	}
	printf("Sirali Liste\n");
	DugumYazdir();
	
	DugumBirlestir();
	printf("\nBirlestirilmis Liste\n");
	DugumYazdir();
	
	while(1){
		printf("\nBir sayi giriniz ( 0 girilirse aramadan cikis yapilacakatir)");
    	int sayi;
    	scanf("%d",&sayi);
    	if(sayi==0){
    		printf("Aramadan cikis yapildi");
    		break;
    	}
    	DugumAra(sayi);
 	}
 	
 	printf("\n\nToplam gosterim\n");
 	DugumTopla();
}
