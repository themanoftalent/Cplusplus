#include<stdio.h>
#include<conio.h>
int main(){
    
    int a[3],i,b,c[3],d, s,toplama;
    for( i=0; i<3; i++){
    
    printf("1. dizinin %d. sayi giriniz :",i);
    scanf("%d",&a[i]);
         }
         printf("***************");
    for(i=0; i<3; i++){
             printf("2. dizinin %d. sayi giriniz :",i);
             scanf("%d",&c[i]);
             }
             
             printf("***************");
             for(i=0; i<3; i++){
                     for(s=0; s<3; s++){
             toplama=a[i]+c[s];
             
             printf("1. dizinin %d. elemani %d ile 2. dizinin %d. elmani %d nin toplamamýnýn sonucu :%d dir\n",i,a[i],s,c[s],toplama);
             printf("***************");}
             }
             
             
             
             getch();
             }
