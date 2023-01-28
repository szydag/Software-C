/*6. int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukarıdaki sayı dizisinde yan yana kaç tane çift sayı ikilisi olduğunu bulan program 
kodunu yazınız. 20-60, 24-26, 50-30, 30-40 şeklinde 4 adet olarak ekrana yazdırılacaktır.*/
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
