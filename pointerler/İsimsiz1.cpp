#include<stdio.h>
int main()
{
	int a=88;
	printf("%d",sizeof(a));
	int*pointer;
	pointer=&a; //adresi(&) pointere at�yoruz
	printf("\nadres %d",pointer); //adresini g�steriyor
	printf("\nicerik %d",*pointer); //degiskenin karsiligini g�sterir
	
	int b;
	b=*pointer;
	printf("\nb=%d ",b);
	
	*pointer=15; //tan�mlarken y�ld�zl�,adreskeny�ld�zs�z,icerikken y�ld�zl�
	printf("\nyeni icerik %d  %d",*pointer,a); //a *pointer olunca *pointer degisince a da degisiyor
	printf("\nadres %d",pointer); 
	
	int yeniSayi=10;
	yeniSayi=yeniSayi+ *pointer;
	*pointer=yeniSayi;
	printf("\ntoplam= %d   pointer %d",yeniSayi,*pointer);
	
	*pointer+=1;
	printf("\n pointer %d   icerik %d  a %d",pointer,*pointer,a);
	*(pointer++); //pointer adresini bir artt�r =>adres 4bit artt�
	printf("\n yeni pointer adresi %d  icerigi %d",pointer,*pointer); 
	
	int sayi=1;
	int*pointer2=&sayi;
	//pointer2=pointer;
	printf("\npointer 2 adresi %d  icerigi %d",pointer2,*pointer2);
    (pointer2++);
	
	printf("\nbir adres yukari %d",pointer2);
	int fark=pointer2-pointer;
	printf("\n%d",fark);
	(pointer+fark);
	printf("\npointer + fark %d",pointer);
}
