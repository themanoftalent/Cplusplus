#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main( void )
{
    char cumle[100];
    char kelime[10];
    char *ptr;
    printf( "Cumle giriniz\n");
    gets( cumle );
    printf( "Kelimeyi giriniz\n");
     gets( kelime );
    ptr=strstr(cumle,kelime);
    
          if(ptr!=NULL)
          {
                      printf( "Baslangic notkasi: %d\n", ptr - cumle );
          }
          else
          {
                      printf( "Eslesme bulunamadi.\n" );
          }
          
      getch();
      return 0;      
      }  
