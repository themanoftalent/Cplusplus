#include<stdio.h>
#include<conio.h>
int main()
{
     char is;
     int s1,s2;
     float snc=0;
     
     printf("Hesap Makinesi \n");
     printf("Islemi Seciniz(+,-,*,/)");
     is=getchar();
    
     switch(is){
                case '+':
                     printf("S1 giriniz:");
                     scanf("%d",&s1);
                     
                     printf("S2 giriniz:");
                     scanf("%d",&s2);
                     snc=s1+s2;
                     printf("Sonuc = %f",snc);
                break;                     
                
                 case '-':
                     printf("S1 giriniz:");
                     scanf("%d",&s1);
                     
                     printf("S2 giriniz:");
                     scanf("%d",&s2);
                     snc=s1-s2;
                     printf("Sonuc = %f",snc);
                break;         
                
                 case '*':
                     printf("S1 giriniz:");
                     scanf("%d",&s1);
                     
                     printf("S2 giriniz:");
                     scanf("%d",&s2);
                     snc=s1*s2;
                     printf("Sonuc = %f",snc);
                break;         
                
                 case '/':
                     printf("S1 giriniz:");
                     scanf("%d",&s1);
                     
                     printf("S2 giriniz:");
                     scanf("%d",&s2);
                     snc=s1/s2;
                     printf("Sonuc = %f",snc);
                break;         
                }
    
    getch();
return 0 ;
}
