#include<stdio.h>
#include<conio.h>
int main ()
{
    int i, n, top=0, s;
    float ort=0;
    printf("kac eleman girilecek\n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
{
    printf("Eleman giriniz\n");
    scanf("%d",&s);
    top=top+s;
}   
    
    ort=(float)top/n;
    printf("Ortalama = %.2f",ort);    
    
getch();
return 0;
}
    
