#include<stdio.h>
#include<math.h>
void binary(long long int sayi)
{
	long long int i=0,j,sonuc,dizi[500];
	while(sayi>0)
	{
		sonuc=sayi%2;
		dizi[i]=sonuc;
		sayi=sayi>>1;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",dizi[j]);
	}
}
void decimal(long long  int sayi)
{
	long long int i=0,sonuc=0,sonuc1=0;
	while(sayi>0)
	{
		sonuc=sayi&1;
		sonuc1=sonuc1+sonuc*pow(2,i);
		i++;
		sayi=sayi>>1;
	}
	printf("%d",sonuc1);
}
int main()
{
	 int sayi1=0,sayi2=0,i;
	 int dizi[]={2,1,4000,50000,6000,3,4,8,12,10,30000,5,50,60,90,100}; //50000 sayisi 16 bitten fazla oldugu için sýkýþtýrma iþlemine tabi tutulmamýþtýr.
	 long long int sayi3=0,veri; //long ile tanýmladýðýmda verinin tamamýný almýyordu o sebebpten long long intle tanýmladým
	printf("***DORTLUK BITLER***\n\n");
	printf("***Binary Cevirme***\n");
	for(i=0;i<16;i++)
	{
		if(dizi[i]<16)
		{
			printf("%d. indis-)   %d decimal =",i,dizi[i]);
		    binary(dizi[i]);
			printf(" binary \n birlestirilmis hali: ");
			sayi1=sayi1<<4;
			sayi1=sayi1|dizi[i];
			binary(sayi1);
			printf("\n");
		}
	}
	printf("dortluk  bitlerin birlestirilmis hali: \n");
	binary(sayi1);
	printf("\n\n");
	printf("***Decimal Cevirme***\n");
	while(sayi1>0)
	{
		veri=sayi1; //sayi1 degeri kaybolmasýn diye yedekledim
		veri=veri&15;
		binary(veri);
		printf("  =  ");
		decimal(veri);
		printf("\n");
		sayi1=sayi1>>4;
	}
	
	
	printf("\n\n\n\n");
	printf("***SEKIZLIK BITLER***\n\n");
	printf("***Bianry Cevirme***\n");
	for(i=0;i<16;i++)
	{
		
		if(dizi[i]>15 && dizi[i]<256)
		{
			printf("%d. indis-)   %d decimal =",i,dizi[i]);
			binary(dizi[i]);
			printf(" binary \n birlestirilmis hali: ");
			sayi2=sayi2<<8;
			sayi2=sayi2|dizi[i];
			binary(sayi2);
			printf("\n");
			
        }	
   }
	printf("sekizlik bitlerin birlestirilmis hali: \n");
	binary(sayi2);
	printf("\n\n");
	printf("***Decimal Cevirme***\n");
	while(sayi2>0)
	{
		veri=sayi2;
		veri=veri&255;
		binary(veri);
		printf("  =  ");
		decimal(veri);
		printf("\n");
		sayi2=sayi2>>8;
	}
	
	
	printf("\n\n\n\n");
	printf("***ONALTILIK BITLER***\n\n");
	printf("***Binary Cevirme***\n");
	for(i=0;i<16;i++)
	{
		if(dizi[i]>255 && dizi[i]<32768)
		{
			printf("%d.indis-)   %d decimal =",i,dizi[i]);  
			binary(dizi[i]);
			printf(" binary \n birlestirilmis hali: ");
			sayi3=sayi3<<16;
			sayi3=sayi3|dizi[i];
			binary(sayi3);
			printf("\n");
		}
	}
	printf("onaltilik bitlerin birlestirilmis hali: \n");
	binary(sayi3);
	printf("\n\n");
	printf("***Decimal Cevirme***\n");
	while(sayi3>0)
	{
		veri=sayi3;
		veri=veri&32767;
		binary(veri);
		printf("  =  ");
		decimal(veri);
		printf("\n");
		sayi3=sayi3>>16;
	}
	
}
