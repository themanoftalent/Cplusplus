#include<stdio.h>
#include<conio.h>
// üst kýsýmda programýn ana karakterleri
int main() {
   int s1;
   int s2;
   int snc;
   
   printf("hesap makinasi \n");
   
   printf("Sayi 1 = ");
   scanf("%d",&s1);
   
   printf("Sayi 2 = ");
   scanf("%d",&s2);
   
   snc = (s1 + s2);
    
   printf("Sonuc = %d", snc);
   
   
   
    getch();
return 0;
}
