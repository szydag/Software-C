/*6. int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukar�daki say� dizisinde yan yana ka� tane �ift say� ikilisi oldu�unu bulan program 
kodunu yaz�n�z. 20-60, 24-26, 50-30, 30-40 �eklinde 4 adet olarak ekrana yazd�r�lacakt�r.*/
#include<stdio.h>
int main()
{
	int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
	int sayac=0;
	for(int i=0;i<13;i++)
	{
		if(*(sayilar+i)%2==0  &&  *(sayilar+i+1)%2==0)
		{
			printf(" %d ve %d\n",*(sayilar+i),*(sayilar+i+1));
			sayac++;
		}
	}
	printf("\n %d adet var...",sayac);
	return 0;
}
