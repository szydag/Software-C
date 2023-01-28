#include<stdio.h>

void hesapla(int sayi)
{
	int dizi[100],j=0,i,sonuc;
	
	while(sayi>0)
	{
	    sonuc=sayi%2;
		dizi[j]=sonuc;
		sayi=sayi>>1;
		j++;
	}
	for( i=j-1;i>=0;i--)
	{
		printf(" %d ",dizi[i]);
	}
	printf("\n");
	
	
}

int main()
{
	int sayi1,sayi2;
	printf("iki adet sayi girelim hadi:");
	scanf("%d%d",&sayi1,&sayi2);
	hesapla(sayi1);
	hesapla(sayi2);
	int and_op=sayi1&sayi2;
	int or_op=sayi1|sayi2;
	int xor_op=sayi1^sayi2;
	int right=sayi1>>1;
	int left=sayi1<<1;
	
	printf("\nand operatoru %d\n",and_op);
	printf("or operatoru %d\n",or_op);
	printf("xor operatoru %d\n",xor_op);
	printf("right operatoru %d\n",right);
	printf("left operatoru %d\n\n",left);
	main();
}
