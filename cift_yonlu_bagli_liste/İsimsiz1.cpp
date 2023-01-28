#include<stdio.h>
#include<stdlib.h>

typedef struct dugum{
	int sayi;
	struct dugum *sonraki;
	struct dugum *onceki;
}dugum;

dugum *ilk=NULL;
dugum *son=NULL;
main(){

   int i=0;
   for(i=0;i<5;i++){
    	dugum*yeni=(dugum*)malloc(sizeof(dugum));
	    yeni->sayi=(i+1)*10;
    	if(ilk==NULL){
	    	ilk=yeni;
	    	son=ilk;
	    	ilk->sonraki=NULL;
	    	ilk->onceki=NULL;
	    }
	    else{
	    	son->sonraki=yeni;
		    yeni->onceki=son;
		    son=yeni;
		    son->sonraki=NULL;
    	}
}
    dugum *gecici=ilk;
    while(gecici!=NULL){
    	printf("%d\n",gecici->sayi);
	    gecici=gecici->sonraki;
    }
}
