/*4. 100 sayýsýndan küçük çift ve 3’e bölünmeyen ilk 10 adet tam sayýyý diziye alan ve küçükten
büyüðe yazdýran program kodunu yazýnýz.*/
#include<stdio.h>
int main()
{
	int sayi=99,dizi[10],sayac=0;
	while(sayac<10)
	{
		if( sayi%2==0 && sayi%3!=0)
		{
			dizi[sayac]=sayi;
			sayac++;
		}
		sayi--;
	}
	int sayac1,yedek;
	while(sayac1!=0)
	{
		sayac1=0;
	    for(int i=0;i<10;i++)
	    {
		    if(dizi[i]<dizi[i+1])
	    	{
	    		sayac1++; // sayac1=0 oldugu zaman yani ifin icine hic girmemisse dizi sýralanmistir
		    	yedek=*(dizi+i);
		    	*(dizi+i)=*(dizi+i+1);
			    *(dizi+i+1)=yedek;
	    	}
    	}
	}
	for( int i=0;i<10;i++)  //diziyi terten de yazdirabilirdim ama caným böyle yapmak istedi bir onraki soruda direk tersten yazdiririm
	{
		printf("%d\n",*(dizi+i));
	}
}
