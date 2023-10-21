#include<stdio.h>
#include<conio.h>
#define N 3
#define M 3

int main()
{
    int i,j,sum,sum1,sum2;
    int A[N][M];
    int B[N][M];
    printf("                        Two Dimnsional Array:\n");
    printf("                        ---------------------\n\n");
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
     sum=0;
     } 
     printf("\n");
     sum=0;
for(j=0;j<M;j++)
{
  for(i=0;i<N;i++)
  {
     sum=sum+A[i][j]; 
     }
     printf("Sum of %d column is %d\n",j+1,sum); 
     sum=0;
     } 
     printf("\n");
     sum=0;
     for(i=0;i<N;i++)
     {
          sum=sum+A[i][1];
         
     }
      printf("Sum of 2. column is %d\n",sum); 
      printf("\n");
     sum1=0;
     for(j=0;j<M;j++){
                      sum1=sum1+A[0][j];
                      }
     printf("Sum of 1. row is %d\n",sum1);
     printf("\n");
     sum2=0;
     for(i=0;i<N;i++){
                      sum2=sum2+A[i][0];
                      }
     printf("Sum of 1. column is %d\n",sum2); 
     printf("sum1+sum2=%d",sum1+sum2);
     
      printf("\n\n");
     
     for(i=0;i<N;i++)
{
  for(j=0;j<M;j++)
  {
     B[j][i]=A[i][j];
     }   
     } 
     printf("Transpose\n\n");
  for(i=0;i<N;i++)
{
  for(j=0;j<M;j++)
  {
      
      printf("A(%d)(%d)=",i,j);
      printf("%d\n",B[i][j]); 
     }   
     }
     
     printf("\n\n");
     
     for(i=0;i<N;i++)
    {
      for(j=0;j<M;j++)
      {
   printf("\t%d",B[i][j]);      
}
printf("\n\n");
}
     
      
     
getch(); 
return 0;

}             
