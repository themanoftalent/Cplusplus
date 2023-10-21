#include<stdio.h>
#include<conio.h>
int fibonacci (int adet)
{
    int x=1,y=1,z=1,i;
    for(i=1;i<=adet;i++)
    {
         x=y;
         y=z;
         z=x+y;
         printf("%d.Toplam = %d\n",i,x);
    }

return x; 
}    
int main()
{
    int adet;
    printf("kac kez donecek = ");
    scanf("%d",&adet);
    fibonacci(adet);
    
getch();
return 0;
}
         
