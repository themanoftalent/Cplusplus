#include<stdio.h>
#include<conio.h>
int main()
{
    
    int i, toplam=0;
    printf("1den 10a kadar toplayan program\n");
    for(i=1;i<10;i++)
    {
    toplam=toplam+i;
    printf("%d.toplam = %d\n",i,toplam);
    }

getch ();
return 0;
}
