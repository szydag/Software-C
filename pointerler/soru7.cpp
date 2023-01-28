/*7. int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukarýdaki sayý dizisinde çift sayýlarý tek sayýya (kendinden bir sonraki sayýya) çeviren 
program kodunu yazýnýz. 20->21, 60->61 þeklinde olacaktýr.*/



#include<stdio.h>
int main()
{
	int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
	for(int i=0;i<14;i++)
	{
		if(*(sayilar+i)%2==0)
		{
			//printf(" %d => ",*(sayilar+i));   bunlar sadece degiseni gösteriyor 
			*(sayilar+i)=sayilar[i]+1;
		    //printf(" %d\n",*(sayilar+i));     asagýya tüm diziyi yazdirdim
		}
	}
	for(int i=0;i<14;i++)
	{
		printf(" %d ",*(sayilar+i));
	}
	return 0;
}
