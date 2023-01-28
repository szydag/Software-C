#include <stdio.h>
#include <stdlib.h>

//Tek yönlü baðlý liste düðümü.
typedef struct NODE{
	//Düðüme ait veri.
	//Farklý tipte deðiþkenler burada tanýmlanabilir.
	int x;
	//Bir sonraki düðümün adresi.
	struct NODE * next; 
}NODE;

//Tek yönlü baðlý listede yeni bir düðüm oluþuturan fonksiyon.
NODE * CreateNode(int x){
	NODE * node;
	//Yeni düðüm için bellekten yer ayrýlýyor.
	node=(NODE *)malloc(sizeof(NODE));
	if(node){
		//Yeni düðüme veri kaydediliyor.
		node->x=x; 
		//NULL anlamý sonrasýnda düðüm olmadýðýdýr.
		node->next=NULL;
	}
	return node;
}

//Tek yönlü baðlý listede düðüm silme fonksiyonu.
//ilk düðümü silmek için fonkiyon RemoveNode(NULL,ilk_düðüm); þeklinde çaðrýlmalý.
void RemoveNode(NODE *previous,NODE *node){
	//Düðümün adresinin geçerli bir adres olduðu kontrol ediliyor.
	if(!node){
		return;
	}
	//Bir önceki düðümün varlýðý kontrol ediliyor.
	if(previous){
		//Bir önceki düðümün sonraki düðüm adresine 
		//silinecek düðümden sonraki düðümün adresi kaydediliyor.		
		previous->next=node->next;
	}

	//Düðüm siliniyor.
	free(node);
	return;
}


//Baðlý listyi ekrana yazdýran fonksiyon.
void PrintList(NODE * root){
	NODE * tmp=root;
	while(tmp){
		printf("%d,",tmp->x);
		//Bir sonraki düðüm tmp deðiþkenine aktarýlýyor.
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
