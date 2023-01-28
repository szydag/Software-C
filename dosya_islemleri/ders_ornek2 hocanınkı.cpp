#include<stdio.h>

DosyayaYaz(FILE*dosya)
{
	int vize,final,ortalama;
	for(int i=0;i<5;i++)
	{
		printf("%d. vize notunu girelim...",i+1);
		scanf("%d",&vize);
		printf("%d. final notunu girelim...",i+1);
		scanf("%d",&final);
		ortalama=vize*0.4+final*0.6;
		fprintf(dosya,"%d\t%d\t%d\n",vize,final,ortalama);
	}
	printf("dosyaya yazma islemi tamam...\n");
}
DosyadanOku(FILE*dosya)
{
	int vize,final,ortalama;
	while(fscanf(dosya,"%d\t%d\t%d\n",&vize,&final,&ortalama)!=EOF)
	{
		printf("%d\t%d\t%d\n",vize,final,ortalama);
		
	}
}

main()
{
	FILE*dosya=fopen("notlarr.txt","w+");
	
	if(dosya==0)
	{
		printf("dosya bulunmadi");
	}
	//char *format="%s\t";
	DosyayaYaz(dosya);
	rewind(dosya);
	DosyadanOku(dosya);
	fclose(dosya);
	
}
