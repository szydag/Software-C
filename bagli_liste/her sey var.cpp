#include<stdio.h>
 typedef struct Dugum
 {
 	int sayi;
 	struct Dugum*sonraki;
 }Dugum;
 
 
 const int boyut=10;
 Dugum*ilkDugum=NULL;
 
 
 ListeOlusturma()
 {
 	Dugum*geciciDugum=NULL;
 	
 	for(int i=0;i<boyut;i++)
 	{
 		Dugum*yeniDugum=(Dugum*)malloc(sizeof(Dugum));
 		if(ilkDugum==NULL)
 		{
 			ilkDugum=yeniDugum;
 			geciciDugum=ilkDugum;
 			ilkDugum->sonraki=NULL;
		 }
		 else
		 {
		 	geciciDugum->sonrak=yeniDugum;
		 	geciciDugum=yeniDugum;
		 	yeniDugum->sonraki=NULL;
		 }
	 }
 }
 listele()
 {
 	printf("\nilk dugum %d\n",ilkDugum);
 	Dugum*geciciDugum=ilkDugum;
 	
 	while(geciciDugum!=NULL)
 	{
 		
	 }
 }
 Ara()
 {
 	Dugum*geciciDugum=lkDugum;
 	int aranansayi;
 	printf("aranan degeri giriniz: ");
 	scanf("%d",&aranansayi);
 	
 	int sira=1;
 	while(geciciDugum!=NULL)
 	{
 		if(geciciDugum->ogrNo==aranansayi)
 		{
 			printf("\t %d\t %d. siradadir",geciciDugum->ogrNo,sira);
 			break;
		 }
		 sira++;
		 geciciDugum=geciciDugum->sonraki;
	 }
	 
	 if(geciciDugum==NULL)
	 {
	 	printf("\n %d sayisi listede yoktur",aranansayi);
	 }
 }
 Guncelle
 {
 	Dugum*geciciDugum=ilkDugum;
 	int arananSayi;
 	printf("\n aranan sayi;");
 	scanf("%d",&arananSayi);
 	
 	int sira=1;
 	
 	while(geciciDugum!=NULL)
 	{
 		int GuncelSayi;
 		printf("guncel sayiyi giriniz: ";)
 		scanf("%d",&geciciDugum->ogrNo;
 		printf("\n %d \t sayisi %d ile güncellebdi",geciciDugum->sonraki);
	 }
 }
 ArananElemaniSil()
 {
 	Dugum*oncekiiDugum=ilkDugum;
 	Dugum*geciciDugum=ilkDugum;
 	int silinecekSayi;
 	printf("\n silmek istediginiz sayi: ");
 	scanf("%d",&silinecekSayi);
 	while(geciciDugum!=NULL)
 	{
 		if(geciciDugum->ogrNo==silinecekSayi)
 		{
 			if(ilkDugum->ogrNo==silinecekSayi)
 			{
 				printf("\n burda");
 				//free(geciciDugum);
 				ilkDugum=ilkDugum->sonraki;
 				
			 }
			 else
			 {
			 	oncekiDugum->sonraki=geciciDugum->sonraki;
			 	//free(geciciDugum);
			 }
			 break;
			 
		 }
		 
			 oncekiDugum=geciciDugum;
			 geciciDugum=geciciDugum->sonraki;
	 }
	 if(geciciDugum==NULL)
	 {
	 	printf("\n %d ranan degeri yoktur",silineceksayi);
	 }
 }
 
 
 DugumSil()
 {
 	printf("\n kacinci dugumu silmek istiyorsunuz: ");
 	int arananIndex;
 	scanf("%d",arananIndex);
 	
 	Dugum*geciciDugum=ilkDugum;
 	Dugum*oncekiDugum=ilkDugum;
 	//oncekiDugum=geciciDugum;
 	
 	if(arananIndex==1)
 	{
 		Dugum*oncekiDugum=ilkDugum;
 		ilkDugum=ilkDugum->sonraki; //ilk veri siliniyorsa bu satirla iþ tamam
 		printf("\n onceki ilk dugum %d",oncekiDugum->ogrNo);
 	//	free(oncekiilkDugum);
 		printf("\n onceki dugum %d",oncekiilkDugum->ogrNo);
 		int index=1;
 		//while(index++< arananIndex &&geciciDugum!=NULL)
 		while(geciciDugum!=NULL)
		 {
		 	if(index==arananIndex)
		 	{
		 		break;
			 }
			 index++;
			 oncekiDugum=geciciDugum;
			 geciciDugum=geciciDugum->sonraki;
			 
 			
		 }
		 if(geciciDugum==NULL)
		 {
		 	printf(" dizi tasmis");
		 }
		 else
		 {
		 	oncekiDugum->sonraki=geciciDugum->sonraki;
		 	printf("\n geciciDugum-> %d",geciciDugum->sonraki);
		 }
 		
	 }
 }
 YerDegistir()//sinavda cikicak olan konu
 {
 	
 }
 ElemanEkle()
 {
 	while(1)
 	{
 		Dugum*oncekiDugum=ilkDugum;
 		Dugum*geciciDugum=ilkDugum;
 		printf("\n eklemek istediginiz sayi");
 		int eklenecekSayi;
 		scanf("%d",&eklenecekSayi);
 		
 		while(geciciDugum!=NULL)
 		{
 			if(geciciDugum->ogrNo > eklenecekSayi)
 			{
 				break;
			 }
			 oncekiDugum=geciciDugum;
			 geciciDugum=geciciDugum->sonraki;
		 }
		 Dugum*yeniDugum=(Dugum*)malloc(sizeof(Dugum));
		 yeniDugum->ogrNo=eklenecekSayi;
		 
		 if(geciciDugum==ilkDugum)
		 {
		 	yeniDugum->sonraki=ilkDugum;
		 	ilkDugum=yeniDugum;
		 }
		 else if(geciciDugum==NULL)
		 {
		 	oncekiDugum->sonraki=yeniDugum;
		 	yeniDugum->sonraki=NULL;
		 }
		 else
		 {
		 	oncekiDugum->sonraki=yeniDugum;
		 	yeniDugum->sonraki=geciciDugum;
		 }
		 
		 
	 }
 }
