#include<stdio.h>
#include<stdlib.h>

Yazdir(int dizi[],int size){
	printf("\n");
	for(int i=0;i<size;i++){
		printf("%d ",dizi[i]);
	}
}


QuickSort(int dizi[],int first, int last,int size){
	int pivot=first;
	int i;
	int j;
	int temp;
	if(last>first){
		pivot=first;
		i=first;
		j=last;
		while(i<j){
			while(dizi[i]<=dizi[pivot]  &&  i<last && j>i){
				i++;
			}
			while(dizi[j]>=dizi[pivot] && j>=first && j>=i){
				j--;
			}
			if(j>i){
			    temp = dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=temp;
			}
		}
		temp=dizi[j];
		dizi[j]=dizi[pivot];
		dizi[pivot]=temp;
    	Yazdir(dizi,size);
		QuickSort(dizi,first,j-1,size);
		QuickSort(dizi,j+1,last,size);
	}
}
int main(){
	printf("Dizinin boyutunu giriniz: ");
	int size;
	scanf("%d",&size);
	
	int dizi[size];
	for(int i=0;i<size;i++){
		printf("dizinin %d. elemanini giriniz :",i+1);
		scanf("%d",&dizi[i]);
	}
	
	printf("Dizinin baslangic durumu\n");
	Yazdir(dizi,size);
	QuickSort(dizi,0,size-1,size);
}
