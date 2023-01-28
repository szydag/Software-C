#include<stdio.h>
#include<stdlib.h>

Yazdir(int dizi[]){
	for(int i=0;i<10;i++){
		printf("%d\t",dizi[i]);
	}
	printf("\n");
}


selectionSort(int dizi[]){
	int index=0;
	for(int i=0;i<10;i++){
    	int enbuyuk=0;
		for(int j=0;j<10-i;j++){
			if(dizi[j] > enbuyuk){
			    enbuyuk=dizi[j];
			    index=j;
	    	}
		}
		int temp=dizi[10-i-1];
		dizi[10-i-1]=enbuyuk;
		dizi[index]=temp;
		Yazdir(dizi);
	}
}
int main(){
	int dizi[10];
/*	for(int i=0;i<10;i++){
		dizi[i]=(10-i)*10;
	}*/
	dizi[0]=12;
	dizi[1]=6;
	dizi[2]=3;
    dizi[3]=963;
    dizi[4]=12;
    dizi[5]=32;
    dizi[6]=1;
    dizi[7]=632;
    dizi[8]=74;
    dizi[9]=13;
    
	Yazdir(dizi);
	printf("\n\n");
	selectionSort(dizi);
}
