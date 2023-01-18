#include<stdio.h>
#include<stdlib.h>

typedef struct personel{
	int Num;
	char Adi[20];
	char SoyAdi[20];
	personel*sagi=NULL;
}personel;

personel*gecici=NULL;

H_Yaz(int index, personel*Hash[],personel*yeni){
	if(Hash[index] == NULL){
        Hash[index]=yeni;
        yeni->sagi=NULL;
	}else{
		if(Hash[index]->Num > yeni->Num){
			yeni->sagi=Hash[index];
			Hash[index]=yeni;
		}else{
			gecici = Hash[index];
			while(gecici!=NULL){
				if(gecici->sagi == NULL && gecici->Num <= yeni->Num){
					yeni->sagi=NULL;
					gecici->sagi=yeni;
					break;
				}
				if(gecici->sagi->Num > yeni->Num){
					yeni->sagi = gecici->sagi;
					gecici->sagi =yeni;
					break;
				}
				gecici=gecici->sagi;
			}
		}
    }
}

H_Listele(personel*hash){
	printf("%d\t%s\t%s\n",hash->Num,hash->Adi,hash->SoyAdi);
	hash=hash->sagi;
	
	while(hash != NULL){
		printf("\t%d\t%s\t%s\n",hash->Num,hash->Adi,hash->SoyAdi);
		hash=hash->sagi;
 	}
}

int H_Arama(int aranan, personel*hash[], int boyut){
	int index = aranan%boyut;
	if(aranan == hash[index]->Num){
		printf("\n**Aradiginiz personel Hash tablosunda vardir");
		return 0;
	}else{
		gecici=hash[index];
		while(gecici!=NULL){
	    	if(aranan == gecici->Num){
	        	printf("\n**Aradiginiz personel Hash tablosunda vardir");
	          	return 0;
        	}
			gecici=gecici->sagi;	
		}
	}
	printf("Aradiginiz personel Hash tablosunda yoktur");
	
}

int H_Silme(int sil,personel*hash[],int boyut){
	int index = sil%boyut;
	if(sil == hash[index]->Num){
		hash[index] =hash[index]->sagi;
		return 0;
	}else{
		gecici=hash[index];
		personel*onceki=gecici;
		gecici=gecici->sagi;
		while(gecici!=NULL){
			if(sil == gecici->Num){
				onceki->sagi=gecici->sagi;
			}
			gecici=gecici->sagi;
			onceki=onceki->sagi;
		}
		return 0;
	}
	printf("Mevcut personel bulunamadi !!");
	
}

int main(){
	printf("Hash Tablosu kac indisten olussun ?");
	int N;
	scanf("%d",&N);
	personel*Hash[N];
	for(int i=0;i<N;i++){
		Hash[i]=NULL;
	}
	FILE *dosya = fopen("Personel.txt","r+");
	if(dosya == NULL){
		printf("Dosya Bulunamadi !!!!");
	}else{
		while(!feof(dosya)){
            personel*yeni = (personel*)malloc(sizeof(personel));
        	fscanf(dosya,"%d\t%s\t%s\n",&yeni->Num,&yeni->Adi,&yeni->SoyAdi);
        	int index = yeni->Num%N;
        	H_Yaz(index,Hash,yeni);	
    	}
    	printf("\n\n   ****Olusturulan Liste****\n\n");
    	for(int i=0;i<N;i++){ 
    	    if(Hash[i] == NULL){
    	    	continue;
	    	}
		    H_Listele(Hash[i]);
		}
		
		while(1){
			printf("\n\nAradiginiz personelin numarasini giriniz : \nArama islemini bitirmek icin 0 giriniz: ");
	    	int arananNum;
	      	scanf("%d",&arananNum);
	    	if(arananNum == 0){
	    		printf("arama islemi sonlanmistir!");
	    		break;
			}
	    	H_Arama(arananNum,Hash,N);
		}
		
		while(1){
			printf("\n\n Silmek istediginiz personelin numarasini giriniz : \nSilme islemini bitirmek icin 0 giriniz: ");
			int silinen;
			scanf("%d",&silinen);
			if(silinen==0){
				printf("Silme islemi sonlanmistir!");
				break;
			}
			H_Silme(silinen,Hash,N);
			for(int i=0;i<N;i++){ 
    	        if(Hash[i] == NULL){
    	    	    continue;
	        	}
		        H_Listele(Hash[i]);
	    	}
		}
	}
}
