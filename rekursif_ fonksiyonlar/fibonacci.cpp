	 
 
 
 
 #include<stdio.h>
 #include<conio.h>
 int fibonacci(int n,int sonuc)
 {
 	if(n==1)
 	{
 		return sonuc;
	 }
	 else if(n==2)
	 {
	 	return sonuc;
	 }
	 else
	 {
	 	sonuc=fibonacci(n-1,sonuc)+fibonacci(n-2,sonuc);
	 	
	 }
 }
 int main()
 {
 	int n;
 	int sonuc=1;
 	printf("fibonacci dizisini kacinci basamagini  hesaplamak istiyorsunuz: ");
 	scanf("%d",&n);
 	fibonacci(n,sonuc);
 	printf("fibonacci dizisinin %d. basamagi %d\n\n\n",n,fibonacci(n,sonuc));
 	
 	
 	main();
 }
 
