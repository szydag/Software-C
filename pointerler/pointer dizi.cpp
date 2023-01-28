#include<stdio.h>
int main()
{
	int boyut=5;
	int dizi[boyut];
	for(int i=0;i<boyut;i++) //pointersiz kullaným
	{
		dizi[i]=(i+1)*10;
		printf("\n%d",dizi[i]);
	}
	printf("\n\n");
	for(int i=0;i<boyut;i++) //pointerli kullanim
	{
		*(dizi+i)=(i+1)*10;
		printf("\n%d",*(dizi+i));
	}
		printf("\n\n");
//tersten yazdirma geriye gittigi icin önce veriyi kaydetip ikinci forda yazdiriyoruz
	for(int i=0;i<boyut;i++)
	{
		*(dizi+boyut-i-1)=(i+1)*10;
	}
	for(int i=0;i<boyut;i++)
	{
		printf("\n%d",*(dizi+i));
	}
}
