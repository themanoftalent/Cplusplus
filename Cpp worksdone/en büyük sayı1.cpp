#include<stdio.h>
#include<conio.h>
int main()
{
    int i, enbyk,sayi;
    for(i=1;i<6;i++)
    {
          printf("%d.sayiyi giriniz \n",i);
          scanf("%d", &sayi);
                    
          if(i==1)
          enbyk=sayi;
          if(enbyk<sayi)
          enbyk=sayi;
          
     }
     printf("en buyuk sayi %d",enbyk);
getch ();
return 0;
}
