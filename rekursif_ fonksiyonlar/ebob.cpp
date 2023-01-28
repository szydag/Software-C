#include<stdio.h>
int ebob(int sayi1,int sayi2)
{
	if(sayi2==0)
	{
		return sayi1;
	}
	return ebob(sayi2,sayi1%sayi2);
}
int ekok(int sayi1,int sayi2)
{
	return sayi1*sayi2/ebob(sayi1,sayi2);
}
int main()
{
	int sayi1,sayi2,sonuc,sonuc2;
	printf("sayi1 degerini giriniz: ");
	scanf("%d",&sayi1);
	printf("sayi2 degerini giriniz: ");
	scanf("%d",&sayi2);
	sonuc=ebob(sayi1,sayi2);
	sonuc2=ekok(sayi1,sayi2);
	printf("ebob(%d,%d)=%d\n",sayi1,sayi2,sonuc);
	printf("ekok(%d,%d)=%d\n",sayi1,sayi2,sonuc2);
	main();
}

