#include<stdio.h>
#include<conio.h>
int main()
{
    
    int brs,pdr,is ;
    float snc=0;
    
    printf("Peder Bank ve Devlet Bank");
    printf("Kacinci islemi yapacaksiniz (1,2,3,4) \n");
    scanf("%d",&is);
          switch(is){
                     case 1:
                     printf("bursu giriniz:");
                     scanf("%d",&brs);
                     
                     printf("Babadan alinan giriniz:");
                     scanf("%d",&pdr);
                     
                     snc=brs+pdr;
                     printf("Sonuc = %.2f",snc);
                break;                
               
                case 2:
                     printf("bursu giriniz:");
                     scanf("%d",&brs);
                     
                     printf("Babadan alinan giriniz:");
                     scanf("%d",&pdr);
                     
                     snc=(brs+pdr)/2;
                     printf("Sonuc = %.2f",snc);
                break; 
                
                case 3:
                     printf("bursu giriniz:");
                     scanf("%d",&brs);
                     
                     printf("Babadan alinan giriniz:");
                     scanf("%d",&pdr);
                     
                     snc=brs-pdr;
                     printf("Sonuc = %.2f",snc);
                break;    
                
                default:
                        printf("Hatali Giris");                   
                                   
                break;                           
      
}
    
    getch();
return 0;
}
