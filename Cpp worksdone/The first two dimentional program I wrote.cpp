#include<stdio.h>
#include<conio.h>

#define N 2
#define M 2

  int i,j,sum;
  int A[M][N];
  
  int main()
  
  {
  	
  	for(i=0;i<N;i++){
  	
  	for(j=0;j<M;j++){
  	
  	
  	printf("A(%d)(%d)",i,j);
  	scanf("%d",&A[i][j]);
  	
  }}
  	
  	for(i=0;i<N;i++){
  	
  	for(j=0;j<M;j++){
  	
  	
  	printf("%d\t",A[i][j]);
  	
  	
  	
  	
  }
  }
  	
  	sum=0;
  	
  		for(i=0;i<N;i++){
  	
  	for(j=0;j<M;j++){
  	
  	sum=sum+A[i][j];
  }
  	printf("\nThe sum of the %d is %d:",i+1,sum);
  	
}
  	getch();
  }

