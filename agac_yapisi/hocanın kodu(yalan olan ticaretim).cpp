#include<stdio.h>
#include <stdlib.h>


 typedef struct Agac
 {
 	struct Agac *sol;
 	struct Agac *sag;
 	int sayi;
 	char adi[15];
 	
  }Agac;
  
  Agac * Ekle( Agac *dugum, int sayi)
  {
  	
  	if(dugum==NULL)
  	{
  		Agac *kok= (Agac *)malloc(sizeof(Agac));
		kok->sayi= sayi;
		kok->sol=NULL;
		kok->sag=NULL;
		return kok;
	}
	
	if(sayi < dugum->sayi)
	{
		dugum->sol= Ekle(dugum->sol, sayi);
		return dugum;
	}
	
	dugum->sag= Ekle(dugum->sag, sayi);
	return dugum;
	
  	
  }
  
  void PrefixOrder(Agac *dugum)
  {
  	if(dugum==NULL)
  	{
  		return;
	}
	
	printf("%d\t", dugum->sayi);
	
	PrefixOrder(dugum->sol);
	PrefixOrder(dugum->sag);
  }
  
  

  
 void InOrder(Agac *dugum)
  {
  	if(dugum==NULL)
  	{
  		return;
	}
	
	InOrder(dugum->sol);
	printf("%d\t", dugum->sayi);
	InOrder(dugum->sag);
  }
  
   void MaxOrder(Agac *dugum)
  {
  	if(dugum==NULL)
  	{
  		return;
	}
	
	MaxOrder(dugum->sag);
	printf("%d\t", dugum->sayi);
	MaxOrder(dugum->sol);
  }
  
  
   int Ara(Agac *dugum, int sayi)
  {
  	if(dugum==NULL)
  	{
  		return -1;
	}	
	if(dugum->sayi==sayi)
	{
		return 1;
	}
	
	Ara(dugum->sol, sayi);
	Ara(dugum->sag, sayi);
  }
  
  int Bul2(Agac *dugum,int aranan){
	if(dugum == NULL)
		return -1;
	if(dugum->sayi == aranan)	return 1;
	if(Bul2(dugum->sag,aranan)==1)	return 1;
	if(Bul2(dugum->sol,aranan)==1)	return 1;
	return -1;
}
  
  
  main()
  {
  	Agac *kok=NULL;
  	kok= Ekle(kok, 10);
  	Ekle(kok, 5);
  	Ekle(kok, 20);
  	Ekle(kok, 16);
  	Ekle(kok, 50);
  	Ekle(kok, 4);
  	Ekle(kok, 8);
  	Ekle(kok, 12);
  	Ekle(kok, 100);
  	
  	PrefixOrder(kok);
  	printf("\ InOrder\n");
	InOrder(kok);
	
	printf("\ MaxOrder\n");
	MaxOrder(kok);
	
	if(Ara(kok, 100)==1)
	{
		printf("\nBu sayi agacta vardir");
	}
	else
	{
		printf("\nBu sayi agacta yoktur");
	}
  } 
