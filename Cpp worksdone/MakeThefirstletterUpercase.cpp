#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    int i=0;
     char cumle[100];
    char c;
    printf( "Cumle giriniz\n");
    gets( cumle );
    putchar (toupper(cumle[0]));
    i++;
    while (cumle[i])
{
                      
                      if(cumle[i]==' '){
                      printf(" ");
                      i++;                      
                      putchar (toupper(cumle[i]));
                      
                      }                 
                      else{
                      printf("%c",cumle[i]);
                      }
                      i++;
}
  
  getch();
  return 0;
}
