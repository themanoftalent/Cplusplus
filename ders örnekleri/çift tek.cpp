#include<stdio.h>
#include<conio.h>
// �st k�s�mda program�n ana karakterleri
int main() {
    int s1;
    printf("Bir sayi giriniz = ");
    scanf("%d",&s1);
    
    if(s1%2==0){
    printf("Sayi Cifttir");
}
    else
{
    printf("Sayi Tektir");
}
    getch();
return 0;
}
