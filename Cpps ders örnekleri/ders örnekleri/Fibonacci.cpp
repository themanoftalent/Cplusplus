#include<stdio.h>
#include<conio.h>
int main()
{
    float i,n,x=1,y=1,z=1;
    printf("kac kez donecek = ");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
         x=y;
         y=z;
         z=x+y;
         printf("%f.Toplam = %f\n",i,x);
    }

getch();
return 0;
}
         
