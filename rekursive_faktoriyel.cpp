/*
Faktöriyel 

 
 
 #include<stdio.h>
 int faktor(int n, int sonuc)
 {
 
 	sonuc=sonuc*n;
 	if(n==1)
 	{
 		return sonuc;
     }
    else
    {
    	n--;
    	faktor(n,sonuc);
    	
	}
 	
 	
 }
 int main()
 {
 	int n;
 	int sonuc=1;
 	printf("faktoriyelini hesaplamak istediginiz sayiyi giriniz: ");
 	scanf("%d",&n);
 	faktor(n,sonuc);
 	printf("%d sayisinin faktoriyeli %d",n,faktor(n,sonuc));
 	printf("\n\n\n");
 	
 	
 	main();
 	
 }
