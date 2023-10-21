#include<stdio.h>
#include<conio.h>


int main()

{
	int A[100];
	int count,number,N,i;
	count=0;
	
	printf("Kac eleman sayi giriniz\n");
	scanf("%d",&N);
	
	for(i=1;i<=N;i++) {
		
		printf("A(%u)",i);
		scanf("%d",&A[i]);
				
	}
	
	printf("Aramak istediginiz sayiyi giriniz\n");
	scanf("%d",&number);
	
	for(i=0;i<=N;i++) {
		
		if(A[i]==number){
			count++;
		
		
		
	}
	}
			printf("Belirlenen rakamdan %u tane vardir",count);
		  return 0; //	we can use getch(); here instead of return.
		  
		  
}
