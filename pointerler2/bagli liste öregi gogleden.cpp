#include <stdio.h>
#include <stdlib.h>
typedef struct NODE{
	int x;
	struct NODE * next; 
}NODE;

NODE * CreateNode(int x){
	NODE * node;
	node=(NODE *)malloc(sizeof(NODE));
	if(node){
		node->x=x; 
		node->next=NULL;
	}
	return node;
}
void RemoveNode(NODE *previous,NODE *node){
	if(!node){
		return;
    }
	if(previous){	
		previous->next=node->next;
	}

	free(node);
	return;
}



void PrintList(NODE * root){
	NODE * tmp=root;
	while(tmp){
		printf("%d,",tmp->x);
	
		tmp=tmp->next;
	}
	return;
}


//Ana fonksiyon.
int main(void){
	NODE * tmp=NULL;
	NODE * node=NULL;
	NODE * root=NULL;
	int x=0;

	//Ýlk düðüm oluþturuluyor.
	root=CreateNode(0);
	node=root;

	do{
		printf("\nx:");
		//Klavyeden yeni düðüm için tam sayý bir deðer okunuyor.
		scanf("%d",&x);
		//Okunan deðerle yenir düðüm oluþturuluyor.
		tmp=CreateNode(x);
		if(tmp){
			//Oluþturulan düðümün adresi bir önceki düðüme kaydediliyor.
			node->next=tmp;
			node=node->next;
		}
		//Baðlý liste ekrana yazdýrýlýyor.
		PrintList(root);
	}while(x!=0);

	return 0;
}
