#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main( void )
{
    char cumle[100];
    char c;
    printf( "Cumle giriniz\n");
    gets( cumle );

    
    for(int i=0;cumle[ i ]!='\0';i++)
    {
            if(cumle[i]==' ')
            {
              printf("\n");

            }
            else
            {
             printf("%c",cumle[i]);
             }
             }
      getch();
      return 0;      
      }  
