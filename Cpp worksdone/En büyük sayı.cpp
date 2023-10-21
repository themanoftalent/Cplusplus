#include<stdio.h>
#include<conio.h>
int main()
{
    int s1,s2,s3,eb;
    printf("sayi 1 giriniz \n");
    scanf("%d", &s1);
    
    printf("sayi 2 giriniz \n");
    scanf("%d", &s2);
    
    printf("sayi 3 giriniz \n");
    scanf("%d", &s3);
    
    eb=s1;
    
    if(eb<s2)
    eb=s2;
    
    if(eb<s3)
    eb=s3;
    
    printf("en buyuk sayi %d",eb);
              


getch();
return 0;
}
