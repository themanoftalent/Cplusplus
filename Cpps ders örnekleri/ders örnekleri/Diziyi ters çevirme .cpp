#include<stdio.h>
#include<conio.h>
main ()
{
     int a[10],i,x,s;
     for(i=0;i<10;i++)
     {
                      printf(" sayiyi giriniz.  ");
                      scanf("%d",&a[i]);
                      
                      }
                      printf("********** \n");
                      for(i=0;i<5;i++){
                                       s=a[i];
                      a[i]=a[9-i];
                      a[9-i]=s;
                      
                      }
                                   for(i=0;i<10;i++){
                                                     printf(" %d \n",a[i]);
                                                     }     
                                        getch();
                                        }
                      
