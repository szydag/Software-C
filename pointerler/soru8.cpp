/*8. int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukarýdaki sayý dizisinde indisleri tek olan sayýlarýn ortalamasýný bulan ve ortalamadan 
büyük olan (sadece tek indisli) sayýlarý ekrana yazdýran program kodunu yazýnýz. 
Not: indis 0 ile baþlar. 20 sayýsý 0. Ýndistedir. 60, 42, 24 gibi sayýlar iþleme tabi tutulmalýdýr.
*/
#include<stdio.h>
int main()
{
	int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
	int ortalama=0,teksayac=0,dizi[14];
	for(int i=0;i<14;i++)
	{
		if(i%2!=0)
		{
			ortalama+=*(sayilar+i);
			dizi[teksayac]=*(sayilar+i);
			teksayac++;
		}
	}
	ortalama=ortalama/teksayac;
	for(int i=0;i<teksayac;i++)
	{
		if(*(dizi+i)>ortalama)
		{
			printf("%d ",*(dizi+i));
		}
	}
	return 0;
}
