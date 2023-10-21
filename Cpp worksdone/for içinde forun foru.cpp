#include<stdio.h>
#include<conio.h>
int main(){
    
    int a[3],i,b,c[3],d, s,toplama;
    for( i=0; i<3; i++){
    
    printf("1. dizinin %d. sayi giriniz",i);
    scanf("%d",&a[i]);
         }
    for(i=0; i<3; i++){
             printf("2. dizinin %d. sayi giriniz",i);
             scanf("%d",&c[i]);
             }
             for(i=0; i<3; i++){
                     for(s=0; s<3; s++){
             toplama=a[i]+c[s];
             
             printf("sonuc%d dir\n",toplama);
             }
             }
             
             
             
             getch();
             }
