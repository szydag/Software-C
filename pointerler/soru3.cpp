/*3. 10 say�s�ndan b�y�k tek ve 3�e tam b�l�nen ilk 5 adet tam say�y� diziye alan ve b�y�kten 
k����e yazd�ran program kodunu yaz�n�z.*/
#include<stdio.h>
int main()
{
	int sayac=0,sayi=0,dizi[5];
	while(sayac<5)
	{
		if(sayi>10 && sayi%2!=0 && sayi%3==0)
		{
			dizi[sayac]=sayi;
			sayac++;
		}
		sayi++;
	}
	int yedek;
	int i=0;
	int sayac1=1;
	while(sayac1!=0)
	{
		sayac1=0;
	    for(i=0;i<5;i++)
	    {
		    if(dizi[i]<dizi[i+1])
	    	{
	    		sayac1++; // sayac1=0 oldugu zaman yani ifin icine hic girmemisse dizi s�ralanmistir
		    	yedek=*(dizi+i);
		    	*(dizi+i)=*(dizi+i+1);
			    *(dizi+i+1)=yedek;
	    	}
    	}
	}
	for( i=0;i<5;i++)  //diziyi terten de yazdirabilirdim ama can�m b�yle yapmak istedi bir onraki soruda direk tersten yazdiririm
	{
		printf("%d\n",*(dizi+i));
	}
}
