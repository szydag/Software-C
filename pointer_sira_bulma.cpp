/* 5. int sayilar[] = { 10,15,20,33,22,11,9,8,48,47,12,25,12,21 };
Yukarýda verilen tam sayý dizisinde sayýnýn baþtan kaçýncý sýrada olduðunu bulan (yoksa 
“Bu sayý dizide bulunmamaktadýr” yazdýrýlacaktýr) program kodunu yazýnýz.*/
#include<stdio.h>
int main()
{
	int sayilar[]={10,15,20,33,22,11,9,8,48,47,12,25,12,21};
    int arananSayi;
	printf("aradiginiz sayiyi giriniz: ");
	scanf("%d",&arananSayi);
	int sayac1=0,sayac=0;
	for(int i=0;i<14;i++)
	{
		if(*(sayilar+i)==arananSayi)
		{
			printf("aradiginiz sayi %d. siradadir\n\n\n",i+1);
			sayac1++;
			break;
		}
		
	}

	if(sayac1==0)
	{
		printf("aradiginiz sayi dizide bulunamamistir\n\n\n");
	}
	main();
 
}
