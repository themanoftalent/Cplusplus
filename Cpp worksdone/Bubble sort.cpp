#include<stdio.h>
#include<conio.h>

int A[100],N,i,b,FV;
int main()
{
 printf("Dizinin eleman sayisini giriniz :");  
 scanf("%d",&N);
 for(i=1;i<=N;i++)
 {
  printf("A(%d)=",i);  
  scanf("%d",&A[i]);             
}




printf("\n");   
printf("Dizimizin elemanlari :\n");
        for(i=1;i<=N;i++){
            printf("   %d\t",A[i]);  
              }
              
              
              
for(i=1;i<=N-1;i++){
   for(b=(i+1);b<=N;b++){
    if(A[b]<A[i]){
     FV=A[i];
     A[i]=A[b];
     A[b]=FV;
         }         
         }        
         } 
        printf("\n");         
        printf("Sirali dizi :\n\n");
        for(i=1;i<=N;i++){
              printf("   %d\t",A[i]);
              }
              getch();
              return 0;

}
