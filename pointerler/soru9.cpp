/*9. int sayilar[]= { 1, 6, 5, 2, 1, 4, 2 };
Yukar�daki say� dizisinde kullan�c� taraf�ndan girilen say�ya denk gelen dizi i�erisindeki 
say�lar�n yerlerine -1 yerle�tiren ve bu i�lemi t�m dizideki elemanlar -1 olana kadar devam 
ettiren ve b�ylece ka� farkl� say� oldu�unu bulan program kodunu yaz�n�z.
�rnek: 2 girildi. Dizi: [1, 6, 5, -1, 1, 4, -1]
 4 girildi. Dizi: [1, 6, 5, -1, 1, -1, -1]
 5 girildi. Dizi: [1, 6, -1, -1, 1, -1, -1]
�. Dizi: [-1, -1, -1, -1, 1, -1, -1]
Sonu�: 5 farkl� say� bulunmaktad�r*/


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
