#include<stdio.h>
#include<stdlib.h>

typedef struct Yigin{
	char deger;
	Yigin*onceki;
	Yigin*sonraki;
}Yigin;

Yigin*ilky=NULL;
Yigin*sony=NULL;

YiginYazdir(){
	Yigin*yazdir=ilky;
	while(yazdir!=NULL){
		printf("%c ",yazdir->deger);
		yazdir=yazdir->sonraki;
	}
}

YiginaEkle(char deger){
	Yigin*yeni=(Yigin*)malloc(sizeof(Yigin));
	yeni->deger=deger;
	if(ilky==NULL){
		ilky=yeni;
		sony=yeni;
		ilky->sonraki=NULL;
		ilky->onceki=NULL;
	}else{
		sony->sonraki=yeni;
		yeni->onceki=sony;
		sony=yeni;
		sony->sonraki=NULL;
	}
	printf("\nYigin\n");
	YiginYazdir();
}

int main(){
	char dizi[]={'a', 'b', '/','c', '-', 'd', 'e', '*','+', 'a','c', '*', '-'};
    char T[6];
    int degisken=0;
	for(int i=0;i<sizeof(dizi);i++){
    	if(dizi[i]== '*' || dizi[i]== '/' || dizi[i]== '+' || dizi[i]== '-'){
    		int tempsag=sony->deger;
    		sony=sony->onceki;
    		sony->sonraki=NULL;
    		int tempsol=sony->deger;
    		if(sony==ilky){
    			ilky=NULL;
			}else{
				sony=sony->onceki;
    	     	sony->sonraki=NULL;
			}
    		if(dizi[i]== '*'){
    			printf("\nT%d = %c*%c\n",degisken+1,tempsol,tempsag);
    			degisken++;
			}else if(dizi[i]== '/'){
    			printf("\nT%d = %c/%c\n",degisken+1,tempsol,tempsag);
    			degisken++;
			}else if(dizi[i]== '+'){
    			printf("\nT%d = %c+%c\n",degisken+1,tempsol,tempsag);
    			degisken++;
			}else if(dizi[i]== '-'){
    			printf("\nT%d = %c-%c\n",degisken+1,tempsol,tempsag);
    			degisken++;
			}
			YiginaEkle('T'); // T degerini 1 2 3 diye numaralandirip yazdiramadigim icin sadece T olarak yigina alinmaktadir.
		}else{
			YiginaEkle(dizi[i]);
		}
	}
	
//	printf("\n\n\nIfadenin degeri  = %c ",T);
}
