#include<stdio.h>
#include<conio.h>


int main(){
    
    int a[3],i,b,c[3],d,toplama;
    for( i=0; i<3; i++){
    
    printf("1. dizinin %d. sayi giriniz\n",i);
    scanf("%d\n",&a[i]);
         }
    for(i=0; i<3; i++){
             printf("2. dizinin %d. sayi giriniz\n",i);
             scanf("%d\n",&c[i]);
             }
         
      printf("kacinci degeri istiyosn\n");
         scanf("%d\n",&b);
         printf("girdignz degerin dizideki karsiligi %d dir\n",a[b]);
         
         printf("\nkacinci degeri istiyosn");
         scanf("%d",&d);
         printf("girdignz degerin dizideki karsiligi %d dir\n",c[d]);
         toplama=a[b]+c[d];
         printf("toplama isleminin sonucu=%d\n",toplama);
         
         getch();
         return 0;
         }
