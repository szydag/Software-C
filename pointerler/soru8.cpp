/*8. int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukar�daki say� dizisinde indisleri tek olan say�lar�n ortalamas�n� bulan ve ortalamadan 
b�y�k olan (sadece tek indisli) say�lar� ekrana yazd�ran program kodunu yaz�n�z. 
Not: indis 0 ile ba�lar. 20 say�s� 0. �ndistedir. 60, 42, 24 gibi say�lar i�leme tabi tutulmal�d�r.
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
