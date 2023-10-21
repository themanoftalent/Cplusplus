#include<stdio.h>
#include<conio.h>
int main()
{
    int i, a[5],sonuc,x,y;
    for(i=1;i<6;i++)
    {
         printf("Dizinin %d elemanini giriniz = ",i);
         scanf("%d",&a[i]);
         
    }
    printf("carpilcak 1. eleman ? = ");
    scanf("%d",& x);
    printf("%d\n",a[x]);
    
    printf("carpilcak 2. eleman ? = ");
    scanf("%d",& y);
    printf("%d\n",a[y]);
    
    
    sonuc= a[x]*a[y];
    printf("sonuc = %d",sonuc);
    
    
    
    
    
getch();
return 0;
}
