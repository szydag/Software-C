#include<stdlib.h>
#include<stdio.h>
Yazdir(int dizi[]){
	for(int i=0;i<10;i++){
		printf("%d\t",dizi[i]);
	}
	printf("\n");
}
BubbleSort(int dizi[]){
	for(int i=0;i<10;i++){
		for(int j=0;j<9-i;j++){
			if(dizi[j] < dizi[j+1]){
				int temp=dizi[j+1];
				dizi[j+1]=dizi[j];
				dizi[j]=temp;
			}
	    	Yazdir(dizi);
		}
		printf("\n\n\n");
	}
}
int main(){
	int dizi[10];
	for(int i=9;i>=0;i--){
		dizi[i]=(i+1)*10;
	}
	BubbleSort(dizi);
}
