#include<stdio.h>
#include<stdlib.h>

typedef struct Dugum{
	char deger;
	Dugum*onceki;
	Dugum*sonraki;
}Dugum;

typedef struct Yigin{
	char deger;
	Yigin*onceki;
	Yigin*sonraki;
}Yigin;

Dugum*ilkd=NULL;
Dugum*sond=NULL;

Yigin*ilky=NULL;
Yigin*sony=NULL;

DugumYazdir(){
	Dugum*yazdir=ilkd;
	while(yazdir!=NULL){
		printf("%c ",yazdir->deger);
		yazdir=yazdir->sonraki;
	}
}

YiginYazdir(){
	Yigin*yazdir=ilky;
	while(yazdir!=NULL){
		printf("%c ",yazdir->deger);
		yazdir=yazdir->sonraki;
	}
}

DugumEkle(char deger){
	Dugum*yeni=(Dugum*)malloc(sizeof(Dugum));
	yeni->deger=deger;
	if(ilkd==NULL){
		ilkd=yeni;
		sond=ilkd;
		ilkd->sonraki=NULL;
		ilkd->onceki=NULL;
	}else{
		sond->sonraki=yeni;
		yeni->onceki=sond;
		sond=yeni;
		sond->sonraki=NULL;
	}
	printf("\n\nPostfix :\n");
	DugumYazdir();
}

YiginEkle(char deger){
	Yigin*yeni=(Yigin*)malloc(sizeof(Yigin));
	yeni->deger=deger;
	if(ilky==NULL){
		ilky=yeni;
		sony=ilky;
		ilky->sonraki=NULL;
		ilky->onceki=NULL;
	}else{
		sony->sonraki=yeni;
		yeni->onceki=sony;
		sony=yeni;
		sony->sonraki=NULL;
	}
	printf("\n\nYigin :\n");
	YiginYazdir();
}

int OncelikBul(char deger){
	if(deger == '+' || deger=='-'){
		return 1;
	}else if(deger == '*' || deger=='/'){
		return 2;
	}
}

int main(){
	char dizi[]={'a','/','b','-','c','+','d','*','e','-','a','*','c'};
	for(int i=0;i<sizeof(dizi);i++){
		if(dizi[i]=='+' || dizi[i]=='-' || dizi[i]=='*' || dizi[i]=='/'){
			while(ilky!=NULL){
				if(sony->deger == '('){
					break;
				}else if(OncelikBul(sony->deger) >= OncelikBul(dizi[i])){
					char temp = sony->deger;
					if(sony==ilky){
						ilky=NULL;
					}else {
						sony=sony->onceki;
					    sony->sonraki=NULL;
					}
					DugumEkle(temp);
				}else{
					break;
				}
			}
			YiginEkle(dizi[i]);
		}else if(dizi[i]==')'){
			while(1){
				if(sony->deger == '('){
				/*	if(sony==ilky){
						ilky=NULL;
					}*/
					break;
				}
				char temp = sony->deger;
				DugumEkle(temp);
				sony=sony->onceki;
			}
		}else if(dizi[i]== '('){
			YiginEkle(dizi[i]);
		}else{
			DugumEkle(dizi[i]);
		}
	}
	while(ilky!=NULL){
		char temp = sony->deger;
		sony=sony->onceki;
		DugumEkle(temp);
	}
}
