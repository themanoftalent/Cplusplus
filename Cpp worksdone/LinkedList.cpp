//
//  main.c
//  linkedList
//
//  Created by Furkan Zumrut on 12/11/13.
//  Copyright (c) 2013 Furkan Zumrut. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int data;
    struct node* next;
};
 
   // Arkadaþlar aslýnda linked-list'i dizilere benzetebiliriz. Farký ise farklý tiplerde(int, float, double) veri koyabilmemiz, ayrýca istediðimiz sýradaki veriye müdahale edebilmemiz.
int main() {
    struct node * head = NULL;
    struct node * tempNode;
 
     
     
    head = (struct node *) malloc(sizeof(struct node));
    // Þimdi bir düðüm var head bu düðümün ilk elemaný. Bu sebeple onu ayrý oluþturmak zorundayýz.
    
    tempNode = head;
    // Oluþturduðumuz head'in adresini kaybetmemek için tempNode ile baðlamalýyýz. Aksi taktirde serbest býrakmadan ekstra iþlem yaptýðýmýzda
    // düðüm kopar.
     
    int i;
    // for döngüsü sadece elemanlarý yerleþtirmek için.
    for(i=0; i<5; i++) {
 
         
        tempNode->data = i; //Þuanda ilk elemandayýz for döngüsüde i=0 döndüreceðinden ilk eleman 0 olacak. Her dönüþte 1 artacak.
         
        tempNode->next = (struct node *) malloc(sizeof(struct node));
        //Burada sadece düðümün sonraki elemanlarý için bellekte yer açýyoruz
         
        tempNode = tempNode->next;
        //Bellekte yer açtýðýmýz elemana gitmek için yazýyoruz.
    }
     
    // Yukarýdaki for döngüsü ile 5 elemanýmýzý da yerleþtirdik ama linked-list sýnýrsýz sayýda eleman alabildiðinden bunun sonunu
    //bizim belirlememiz gerekiyor.
    //Tekrar aþaðýdaki kod satýrýný yazarak sonraki elemana yani düðümü bitirmek istediðimiz 6. elemana geçiyoruz.
    //ve NULL'a eþitliyoruz. Böylece düðüm sona eriyor.
    tempNode->next = NULL;
     
     
     
    //Þimdi oluþturduðumuz linked list'i sýrasýyla basmak için ilk elemanýmýzýn adresine tekrar gitmemiz gerekiyor. Böylece her yazdýrdýðýmýzda ileri giderek bir sonraki adresteki veriyi alabileceðiz son düðüm olan 6. düðümün NULL deðerine gelene kadar.
    tempNode = head;
     
    int j;
     
    for (j = 0;tempNode->next != NULL ; j++) { // tempNode 6. elemana geldiðinde for döngüsü yanlýþ olacak ve döngü kýrýlacak.
        printf("%d. Eleman %d\n",j+1,tempNode->data); // Düðümdeki veriyi yazdýrýyoruz.
        tempNode=tempNode->next; // Bir sonraki düðüme gidiyoruz.
    }
 
     
    return 0;
}
