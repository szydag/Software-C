/*9. int sayilar[]= { 1, 6, 5, 2, 1, 4, 2 };
Yukarýdaki sayý dizisinde kullanýcý tarafýndan girilen sayýya denk gelen dizi içerisindeki 
sayýlarýn yerlerine -1 yerleþtiren ve bu iþlemi tüm dizideki elemanlar -1 olana kadar devam 
ettiren ve böylece kaç farklý sayý olduðunu bulan program kodunu yazýnýz.
Örnek: 2 girildi. Dizi: [1, 6, 5, -1, 1, 4, -1]
 4 girildi. Dizi: [1, 6, 5, -1, 1, -1, -1]
 5 girildi. Dizi: [1, 6, -1, -1, 1, -1, -1]
…. Dizi: [-1, -1, -1, -1, 1, -1, -1]
Sonuç: 5 farklý sayý bulunmaktadýr*/


#include<stdio.h>

int main()
{
	int sayilar[]= { 1, 6, 5, 2, 1, 4, 2 };
	int sayi,sayac=0;
	 while(sayilar!='\0')
	{
        printf("bir sayi giriniz ");
        scanf("%d",&sayi);
        for(int i=0;i<7;i++)
        {
	    	if(*(sayilar+i)==sayi)
	    	{
	    		sayac++;
	    		*(sayilar+i)=-1;
			}

	  	}
	  	for(int i=0;i<7;i++)
	  	{
	  		printf(" %d ",*(sayilar+i));
		}
		
		printf("\n");
	}
	printf("%d adet var",sayac);
	return 0;
}
