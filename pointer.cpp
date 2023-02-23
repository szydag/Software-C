#include<stdio.h>
int main()
{
	int a=88;
	printf("%d",sizeof(a));
	int*pointer;
	pointer=&a; //adresi(&) pointere atıyoruz
	printf("\nadres %d",pointer); //adresini gösteriyor
	printf("\nicerik %d",*pointer); //degiskenin karsiligini gösterir
	
	int b;
	b=*pointer;
	printf("\nb=%d ",b);
	
	*pointer=15; //tanımlarken yıldızlı,adreskenyıldızsız,icerikken yıldızlı
	printf("\nyeni icerik %d  %d",*pointer,a); //a *pointer olunca *pointer degisince a da degisiyor
	printf("\nadres %d",pointer); 
	
	int yeniSayi=10;
	yeniSayi=yeniSayi+ *pointer;
	*pointer=yeniSayi;
	printf("\ntoplam= %d   pointer %d",yeniSayi,*pointer);
	
	*pointer+=1;
	printf("\n pointer %d   icerik %d  a %d",pointer,*pointer,a);
	*(pointer++); //pointer adresini bir arttır =>adres 4bit arttı
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
