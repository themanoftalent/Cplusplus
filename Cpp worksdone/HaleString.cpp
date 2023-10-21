#include<stdio.h>

#include<conio.h>

#include<string.h>

#include<ctype.h>


int main()

{

 char c,sen[100]; 

      int i=0;

     puts("Enter a Statement...\n");
    
	c=getchar();

      printf("\n");

      while(c!='\n')

      {

      sen[i]=c;

      i++;

      c=getchar();

      }

      sen[i]='\0';

      puts("The line entered\n");

      puts(sen); 
      
       

      getch();

      return 0;      

      }   
