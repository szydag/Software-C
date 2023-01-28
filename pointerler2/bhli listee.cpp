#include <stdio.h>
#include <stdlib.h>

//Tek y�nl� ba�l� liste d���m�.
typedef struct NODE{
	//D���me ait veri.
	//Farkl� tipte de�i�kenler burada tan�mlanabilir.
	int x;
	//Bir sonraki d���m�n adresi.
	struct NODE * next; 
}NODE;

//Tek y�nl� ba�l� listede yeni bir d���m olu�uturan fonksiyon.
NODE * CreateNode(int x){
	NODE * node;
	//Yeni d���m i�in bellekten yer ayr�l�yor.
	node=(NODE *)malloc(sizeof(NODE));
	if(node){
		//Yeni d���me veri kaydediliyor.
		node->x=x; 
		//NULL anlam� sonras�nda d���m olmad���d�r.
		node->next=NULL;
	}
	return node;
}

//Tek y�nl� ba�l� listede d���m silme fonksiyonu.
//ilk d���m� silmek i�in fonkiyon RemoveNode(NULL,ilk_d���m); �eklinde �a�r�lmal�.
void RemoveNode(NODE *previous,NODE *node){
	//D���m�n adresinin ge�erli bir adres oldu�u kontrol ediliyor.
	if(!node){
		return;
	}
	//Bir �nceki d���m�n varl��� kontrol ediliyor.
	if(previous){
		//Bir �nceki d���m�n sonraki d���m adresine 
		//silinecek d���mden sonraki d���m�n adresi kaydediliyor.		
		previous->next=node->next;
	}

	//D���m siliniyor.
	free(node);
	return;
}


//Ba�l� listyi ekrana yazd�ran fonksiyon.
void PrintList(NODE * root){
	NODE * tmp=root;
	while(tmp){
		printf("%d,",tmp->x);
		//Bir sonraki d���m tmp de�i�kenine aktar�l�yor.
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

	//�lk d���m olu�turuluyor.
	root=CreateNode(0);
	node=root;

	do{
		printf("\nx:");
		//Klavyeden yeni d���m i�in tam say� bir de�er okunuyor.
		scanf("%d",&x);
		//Okunan de�erle yenir d���m olu�turuluyor.
		tmp=CreateNode(x);
		if(tmp){
			//Olu�turulan d���m�n adresi bir �nceki d���me kaydediliyor.
			node->next=tmp;
			node=node->next;
		}
		//Ba�l� liste ekrana yazd�r�l�yor.
		PrintList(root);
	}while(x!=0);

	return 0;
}
