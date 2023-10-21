#include<stdio.h>
#include<conio.h>




/*int main()

{
    int s1;
 
    printf("Bir sayý giriniz = ");
    scanf("%d",&s1);
    
    if(s1%2==0){
    
        printf("Sayi Cifttir");
}
    else
{
    
    printf("Sayi Tektir");
}
    
   
 */
 int main()
{
    
    
    int s1;
    
    printf("Bir sayi girilecek");
    scanf("%d",s1);
    
    if (s1%2==0) {
        
        printf("The number is even");
    } else {
        printf("The number is odd");
    }
    
 
 getch();

    
    
    return 0;
    
    
}
