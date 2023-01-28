#include<stdio.h>
struct Araba
{
	int tekerekSayisi;
	int vitesSayisi;
	int model;
	float motor;
	int beygir;
}araba1,araba2;
int main()
{
	araba1={0};
	//struct Araba={
	//};
	araba1={4,6,2022,3.4,300};
	araba2=araba1;
	printf("%d %d %d %.2f %d",araba1.tekerekSayisi,araba1.vitesSayisi,araba1.model,araba1.motor,araba1.beygir);
	printf("\n%d %d %d %.2f %d",araba2.tekerekSayisi,araba2.vitesSayisi,araba2.model,araba2.motor,araba2.beygir);
	return 0;
}
