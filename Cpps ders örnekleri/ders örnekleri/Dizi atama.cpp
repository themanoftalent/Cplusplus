#include<stdio.h>
#include<conio.h>
int main(){
int a[6],i ,c ,d,b[6];
for(i=0;i<6;i++)
{
printf("1. dizinin %d. elemani :",i);
scanf("%d",&a[i]);
}

printf("**************\n");
for(i=0;i<6;i++)
{
printf("2. dizinin %d. elemani :",i);
scanf("%d",&b[i]);
}


printf("1.dizinin kacinci elemani gormek istiyorsun: ");
scanf("%d",&c);
printf("%d\n",a[c]);
printf("2.dizinin kacinci elemani gormek istiyorsun: ");
scanf("%d",&d);
printf("%d",b[d]);
getch();
return 0;
}
