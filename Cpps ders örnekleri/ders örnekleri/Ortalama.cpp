#include<stdio.h>
#include<conio.h>
// üst kýsýmda programýn ana karakterleri
int main() {
    
   int x,y,z; 
   double snc=0;
   printf("Sayi 1 = ");
   scanf("%d",&x);
   
   printf("Sayi 2 = ");
   scanf("%d",&y);
   
   printf("Sayi 3 = ");
   scanf("%d",&z);
   
   snc=(double)(x+y+z)/3;   
   printf("sonuc = %.2lf",snc);
   
   
    getch();
return 0;
}
