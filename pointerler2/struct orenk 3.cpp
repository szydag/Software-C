#include<stdio.h>
#include<string.h>
struct Adres{
	char mahalle[15];
	char cadde[20];
	char sokak[15];
};
struct Ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
	int yas;
	struct Adres adres;
};
int main()
{
	struct Ogrenci ogrenci1;
	strcpy(ogrenci1.isim,"mustafa");
	strcpy(ogrenci1.soyisim,"baltaci");
	ogrenci1.numara=132;
	ogrenci1.yas=23;
	strcpy(ogrenci1.adres.mahalle,"bahcelievler");
	strcpy(ogrenci1.adres.cadde,"7. cad");
	strcpy(ogrenci1.adres.sokak,"20666.sk");
	printf("%s\n%s\n%d\n%d\n%s\n%s\n%s\n",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara,ogrenci1.yas,ogrenci1.adres.mahalle,ogrenci1.adres.cadde,ogrenci1.adres.sokak);
	return 0;
}
