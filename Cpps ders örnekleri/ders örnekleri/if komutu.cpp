#include<stdio.h>
#include<conio.h>
// üst kýsýmda programýn ana karakterleri
int main() {
    int sicaklik;
    printf("Hava Durumunu Giriniz = ");
    scanf("%d",&sicaklik);
    
    if(sicaklik<26){
    printf(" Hava Soguk Siki giyin");
}
    else
{
    printf("hava sicak cool takil");
}
    getch();
return 0;
}
