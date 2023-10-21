#include<stdio.h>
#include<conio.h>
    
    int toplama( int s1, int s2)
    {
        int sonuc;
        sonuc=s1+s2;
        return sonuc;   }
        
        
        int cikarma(int s1 ,int s2){
            int sonuc;
            sonuc=s1-s2;
            return sonuc;}
            
            
            int carpma(int s1, int s2){
                int sonuc;
                sonuc=s1*s2;
                return sonuc;}
              
               int bolme(int s1, int s2){
                int sonuc;
                sonuc=s1/s2;
                return sonuc;}  
    
     int main(){
         int s1,s2,a;
         printf("1. sayiyi giriniz");
         scanf("%d",&s1);
          printf("2. sayýyý giriniz");
          scanf("%d",&s2);
        
          
           
          
          
          printf("toplama icin 1 \n cikarma icin 2  \ncarpma icin 3 \nbölme icin 4e Bass");
          scanf("%d",&a);
          if(a==1) printf("sonuc%d",toplama(s1,s2));
          else if(a==2)  printf("sonuc%d",cikarma(s1,s2));
          else if(a==3) printf("sonuc%d",carpma(s1,s2));
          else if(a==4) printf("sonuc%d",bolme(s1,s2));
          else 
          printf("bolme icin sonuc: %d",bolme(s1,s2));
          printf("carpma icin sonuc:%d",carpma(s1,s2));
          printf("cikarma icinsonuc:%d"cikarma(s1,s2));
           printf("toplama sonuc:%d",toplama(s1,s2));
          getch();
          return 0;
          }
