#include<stdio.h>
int main()
{
	int sayi,dizi[100],i=0,j=0,ortalama=0;
	while(sayi!=-1)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&sayi);
		if(sayi>0)
		{
			ortalama+=sayi;
			dizi[j]=sayi;
			j++;
		}
		i++;
	}
	ortalama=ortalama/j;
	for(int k=0;k<j;k++)
	{
		printf(" %d ",*(dizi+k));
	}
	printf("\npozitif sayilarin ortalamasi: %d",ortalama);
	
}
