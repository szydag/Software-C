#include<stdio.h>
int main()
{
	int a=5,*ap;
	float b=3.2,*bp;
	double c=3.412,*cp;
	char d='a',*dp;
	int sayilar[5]={1,2,3,4,5};
	int *arrayp;
	ap=&a;
	bp=&b;
	cp=&c;
	dp=&d;
	arrayp=&sayilar[1];
	
	printf("%u adresindeki intin degeri %d\n",ap,*ap);
	printf("%u adresindeki floatin degeri %f\n",bp,*bp);
	printf("%u adresindeki doublenin degeri %lf\n",cp,*cp);
	printf("%u adresindeki charin degeri %c\n",dp,*dp);
	printf("%u adresindeki dizinin degeri %d",arrayp,*arrayp);
}
