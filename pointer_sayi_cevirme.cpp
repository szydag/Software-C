/*7. int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukar�daki say� dizisinde �ift say�lar� tek say�ya (kendinden bir sonraki say�ya) �eviren 
program kodunu yaz�n�z. 20->21, 60->61 �eklinde olacakt�r.*/



#include<stdio.h>
int main()
{
	int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
	for(int i=0;i<14;i++)
	{
		if(*(sayilar+i)%2==0)
		{
			//printf(" %d => ",*(sayilar+i));   bunlar sadece degiseni g�steriyor 
			*(sayilar+i)=sayilar[i]+1;
		    //printf(" %d\n",*(sayilar+i));     asag�ya t�m diziyi yazdirdim
		}
	}
	for(int i=0;i<14;i++)
	{
		printf(" %d ",*(sayilar+i));
	}
	return 0;
}
