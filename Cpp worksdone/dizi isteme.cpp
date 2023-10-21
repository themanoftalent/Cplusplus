#include<stdio.h>
#include<conio.h>

    int main()
    {
        int a[5],i,b,c,topla;
        
        for( i=0; i<5; i++){
             
             printf("%d. sayiyi giriniz",i);
             scanf("%d",&a[i] );
             }
        printf("dizinin kacinci elemanýný görüntülemek istiyorsunuz");
        scanf("%d",&b);
        printf(" sectignz elmn %d dir. \n",a[b]);
        
          printf("\n dizinin kacinci elemanýný görüntülemek istiyorsunuz");
        scanf("%d",&c);
        printf("sectignz elmn %d dir.",a[c]);
        topla=a[b]+a[c];
        printf("\n sonuc=%d",topla);
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        getch ();
        return 0;      
        }
