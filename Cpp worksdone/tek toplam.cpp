#include<stdio.h>
#include<conio.h>
    
  int s1,s2,s3,buyuk,kucuk;
 
 
  int main()
  {
  	
  	printf("Lutfen 1.Sayiyi giriniz\n");
  	scanf("%d",&s1);
  	
  		printf("Lutfen 2.Sayiyi giriniz\n");
  	scanf("%d",&s2);
  	
	  	printf("Lutfen 3.Sayiyi giriniz\n");
  	scanf("%d",&s3);
  	
  	 buyuk=s1;
  
  	if(buyuk<s2) buyuk=s2;
  	if(buyuk<s3) buyuk=s3;
  	
  	kucuk=s1;
  
  	if(kucuk>s2) kucuk=s2;
  	if(kucuk>s3) kucuk=s3;
  	
  	
  	
  	printf("En Buyuk sayi%d:\n\t", buyuk);
  	printf("En kucuk sayi %d:",kucuk);
  	
	  
}
	  /* buyuk=s1;
  
  	if(buyuk<s2) buyuk=s2;
  	if(buyuk<s3) buyuk=s3;
  	
  	
  	
  	printf("En buyuk sayi %d :",buyuk);
  	
  	kucuk=s1;
  
  	if(kucuk>s2) kucuk=s2;
  	if(kucuk>s3) kucuk=s3;
  	
  	
  	
  	printf("En kucuk sayi %d :",kucuk);
  	
  	
  	 
  //	printf("En kucuk sayi %d:",kucuk);
  	
  	
  	
  	
  }*/
