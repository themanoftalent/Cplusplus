#include<stdio.h>
#include<conio.h>
#define N 2
#define M 2

int main()
{
    int i,j,sum;
    int A[N][M];
    
    
   
    for(i=0;i<N;i++)
    {
      for(j=0;j<M;j++)
      {
   
   printf("A(%d)(%d)=",i,j);   
   scanf("%d",&A[i][j]); 
    
}
}

printf("\n\n");
 for(i=0;i<N;i++)
    {
     
	  for(j=0;j<M;j++)
      {
   printf("\t%d",A[i][j]);      
}
printf("\n\n");
}




sum=0;
for(i=0;i<N;i++)
{
  for(j=0;j<M;j++)
  {
     sum=sum+A[i][j]; 
     }
     printf("Sum of %d row is %d\n",i+1,sum); 
    
     
}
     
getch(); 
return 0;

}             
