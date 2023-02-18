#include<stdio.h>

int main()
{
	
	
	FILE*dosya=fopen("OgrenciNotlar.txt","r");
	FILE*dosyac=fopen("CiftNoluOgrenciler.txt","w");
	FILE*dosyat=fopen("TekNoluOgrenciler.txt","w");
	

	if(dosyac==0)
	{
		printf("Cift notlar dosyasi bulunamdi");
	}
	if(dosyat==0)
	{
		printf("Tek notlar dosyasi bulunmadi");
	}
	if(dosya==0)
	{
		printf("Notlar dosyasi Bulunmadi");
	}
	
	fprintf(dosyac,"OGRENI NO\t AD\t\tVIZE\t FINAL\t GENELORTALAMA\t HARFNOTU\t GECTI/KALDI\n");
	fprintf(dosyat,"OGRENI NO\t AD\t\tVIZE\t FINAL\t GENELORTALAMA\t HARFNOTU\t GECTI/KALDI\n");
	
	char*format="%d\t %s\t %d\t %d\n";
	char*format2="%d\t %s\t %d\t  %d\t \t\t%d\t\t\t%c%c\t \t %c\n";
	int OgrenciNo,Vize,Final,GenelOrtalama;
	char Ad[20];
	char HarfNotu;
	char Gecti_Kaldi;
	
	
	int GenelVizeOrtCift=0,GenelFinalOrtCift=0,GenelVizeOrtTek=0,GenelFinalOrtTek=0,SinifGenelOrtCift=0,SinifGenelOrtTek=0,SayacGectiCift=0,SayacGectiTek=0,sayaccift=0,sayactek=0;
	
	while(!feof(dosya))
	{
		fscanf(dosya,format,&OgrenciNo,&Ad,&Vize,&Final);
		printf(format,OgrenciNo,Ad,Vize,Final);
		
		GenelOrtalama=Vize*0.4+Final*0.6;
		if(GenelOrtalama>=81)
		{
			HarfNotu='A';
			Gecti_Kaldi='G';
    	}
		else if(GenelOrtalama<81 && GenelOrtalama>=61)
		{
			HarfNotu='B';
			Gecti_Kaldi='G';
     	}
		else if(GenelOrtalama<61 && GenelOrtalama>=41)
		{
			HarfNotu='C';
			Gecti_Kaldi='G';
     	}
		else if(GenelOrtalama<41 && GenelOrtalama>=0)
		{
			HarfNotu='D';
			Gecti_Kaldi='K';
     	}
		
		
		if(OgrenciNo%2==0)
		{
			if(HarfNotu=='A' || HarfNotu=='B' || HarfNotu=='C')
			{
				SayacGectiCift++;
			}
			GenelVizeOrtCift+=Vize;
			GenelFinalOrtCift+=Final;
			SinifGenelOrtCift+=GenelOrtalama;
			sayaccift++;
			printf("cift dosyaya yazdiriliyor...\n");
			fprintf(dosyac,format2,OgrenciNo,Ad,Vize,Final,GenelOrtalama,HarfNotu,HarfNotu,Gecti_Kaldi);
		}
		else
		{
			if(HarfNotu=='A' || HarfNotu=='B' || HarfNotu=='C')
			{
				SayacGectiTek++;
			}
			GenelVizeOrtTek+=Vize;
			GenelFinalOrtTek+=Final;
			SinifGenelOrtTek+=GenelOrtalama;
			sayactek++;
			printf("tek dosyaya yazdiriliyor...\n");
			fprintf(dosyat,format2,OgrenciNo,Ad,Vize,Final,GenelOrtalama,HarfNotu,HarfNotu,Gecti_Kaldi);
		}

   }
   
    
	GenelVizeOrtCift=GenelVizeOrtCift/sayaccift;
	GenelFinalOrtCift=GenelFinalOrtCift/sayaccift;
	SinifGenelOrtCift=SinifGenelOrtCift/sayaccift;
	fprintf(dosyac,"\n\n--------   ------    %d    %d            %d           ---        %d",GenelVizeOrtCift,GenelFinalOrtCift,SinifGenelOrtCift,SayacGectiCift);
	
	GenelVizeOrtTek=GenelVizeOrtTek/sayactek;
	GenelFinalOrtTek=GenelFinalOrtTek/sayactek;
	SinifGenelOrtTek=SinifGenelOrtTek/sayactek;
	fprintf(dosyat,"\n\n--------   ------    %d    %d            %d           ---         %d",GenelVizeOrtTek,GenelFinalOrtTek,SinifGenelOrtTek,SayacGectiTek);
}  
