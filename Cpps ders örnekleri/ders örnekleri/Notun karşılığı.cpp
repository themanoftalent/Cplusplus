#include<stdio.h>
#include<conio.h>
int main()
{
    int s1=0,i;
    printf("notunuzu giriniz \n");
    scanf("%d",&s1);
    
    
    if (s1>=90)
    printf("Harf Notunuz AA Gelmistir");
    
      else if (s1<90 && s1>=80)
    printf("Harf Notunuz BB Gelmistir");
    
      else if (s1<80 && s1>=70)
    printf("Harf Notunuz CC Gelmistir");
    
      else if (s1<70 && s1>=60)
    printf("Harf Notunuz DD Gelmistir");
    
      else 
    printf("Harf Notunuz FF Gelmistir");



getch();
return 0;
}
