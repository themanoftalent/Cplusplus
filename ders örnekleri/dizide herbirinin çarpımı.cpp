#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j, a[5],b[5],sonuc;
    for(i=0;i<5;i++)
    {
         printf("1.Dizinin %d. elemanini giriniz = ",i+1);
         scanf("%d",&a[i]);
         
    }
    printf("**********************\n");
    for(i=0;i<5;i++)
    {
         printf("2.Dizinin %d. elemanini giriniz = ",i+1);
         scanf("%d",&b[i]);
         
    }
    for(i=0;i<5;i++)
    {
                    for(j=0;j<5;j++)
                    {
                     sonuc=a[i]*b[j];
                     printf("sonuc = %d\n",sonuc);
                    }
    }
    
    
    
getch();
return 0;
}
