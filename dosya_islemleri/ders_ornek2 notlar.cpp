#include<stdio.h>
int main()
{
	int i,vize[5],final[5];
	int ortalama[5];
	char ad[5][15];
	FILE*dosya=fopen("notlar","w");
	for(i=0;i<5;i++)
	{
	    printf("%d. ogrencinin adini girin: ",i+1);
		fgets(ad[i],15,stdin);
		fputs(ad[i],dosya);
	    
	    
		printf("%d. ogrencinin vize notunu girin: ",i+1);
		scanf("%d",&vize[i]);
		fprintf(dosya,"%d\n",vize[i]); 
		
		
		printf("%d. ogrencinin final notunu girin: ",i+1);
		scanf("%d",&final[i]);
		fprintf(dosya,"final notu %d\n",final[i]);
		ortalama[i]=vize[i]*0.4+final[i]*0.6;
		fprintf(dosya,"%d\n",ortalama[i]);
		printf("\n\n\n");
	}
}
