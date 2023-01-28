#include<stdio.h>
int main()
{
	int sayi1,sayi2;
	printf("iki adet sayi girelim hadi:");
	scanf("%d%d",&sayi1,&sayi2);
	int and_op=sayi1&sayi2;
	int or_op=sayi1|sayi2;
	int xor_op=sayi1^sayi2;
	int right=sayi1>>2;
	int left=sayi1<<2;
	
	printf("and operatoru %d\n",and_op);
	printf("or operatoru %d\n",or_op);
	printf("xor operatoru %d\n",xor_op);
	printf("right operatoru %d\n",right);
	printf("left operatoru %d\n\n",left);
	

	
	main();
}
