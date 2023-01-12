#include<stdlib.h>
#include<stdio.h>

int boyut=10;
int matris[10][10];
int *adres=&matris[0][0];

void Topla(){
	adres=&matris[0][0];
    int toplam=0;
	printf("\nKosegen: \n");
    for(int i=0;i<boyut;i++){
    	printf("%d  ",*adres);
    	toplam+=*adres;
    	adres+=(boyut+1);
	}
	printf("\n\n\nKosegenin toplami = %d\n",toplam);
}

void Carp(){
	adres=&matris[0][0];
	int carpim=1;
    for(int i=0;i<boyut;i++){
    	carpim*=*adres;
    	adres++;
	}
	printf("Kosegenin carpimi = %d \n\n\n",carpim);
}

void Sirala(){
	adres=&matris[0][0];
	int enkucuk=99;
	for(int i=0;i<boyut*boyut;i++){
		for(int j=0;j<boyut;j++){
			for(int k=0;k<boyut;k++){
				if(matris[j][k]< enkucuk && &matris[j][k] > adres){
					int temp=enkucuk;
					enkucuk=matris[j][k];
					matris[j][k]=temp;
				}
			}
		}
		*adres=enkucuk;
		adres++;
		enkucuk=99;
	}
}

void Yazdir(){
	adres=&matris[0][0];
	for(int i=0;i<boyut;i++){
		for(int j=0;j<boyut;j++){
			printf("%d ",*adres);
			adres++;
		}
		printf("\n");
	}
}

void DegerAta(){
	for(int i=0;i<boyut;i++){
		for(int j=0;j<boyut;j++){
			matris[i][j]=rand()%10+1;
		}
	}
}

main(){
	DegerAta();
	Yazdir();
	Topla();
	Carp();
	Sirala();
	Yazdir();
}
