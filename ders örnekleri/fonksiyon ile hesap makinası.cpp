#include<stdio.h>
#include<conio.h>

int topla(int a, int b)
{
    int sonuc;
    sonuc=a+b;
    

return sonuc; 
}    
int cikar(int a, int b)
{
    int sonuc1;
    sonuc1=a-b;
    

return sonuc1; 
}   
int bol(int a, int b)
{
    float sonuc2;
    sonuc2=a/b;
   

return sonuc2; 
}   
int carp(int a, int b)
{
    int sonuc3;
    sonuc3=a*b;
    

return sonuc3; 
}   
int main()
{
    int islem,a,b;
    printf("islemi giriniz(1:toplama 2:cýkarma 3:bolme 4:carpma = \n");
    scanf("%d",&islem);
    printf("1. sayiyi giriniz = \n");
    scanf("%d",&a);
    printf("2. sayiyi giriniz = \n");
    scanf("%d",&b);
    
    if(islem==1)
    printf("Sonuc = %d", topla(a, b));
    else if (islem==2)
    printf("Sonuc = %d", cikar(a, b));
    else if (islem==3)
    printf("Sonuc = %d", bol(a, b));
    else if
    printf("Sonuc = %d", carp(a, b));





getch();
return 0;
}
