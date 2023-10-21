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
 
   // Arkada�lar asl�nda linked-list'i dizilere benzetebiliriz. Fark� ise farkl� tiplerde(int, float, double) veri koyabilmemiz, ayr�ca istedi�imiz s�radaki veriye m�dahale edebilmemiz.
int main() {
    struct node * head = NULL;
    struct node * tempNode;
 
     
     
    head = (struct node *) malloc(sizeof(struct node));
    // �imdi bir d���m var head bu d���m�n ilk eleman�. Bu sebeple onu ayr� olu�turmak zorunday�z.
    
    tempNode = head;
    // Olu�turdu�umuz head'in adresini kaybetmemek i�in tempNode ile ba�lamal�y�z. Aksi taktirde serbest b�rakmadan ekstra i�lem yapt���m�zda
    // d���m kopar.
     
    int i;
    // for d�ng�s� sadece elemanlar� yerle�tirmek i�in.
    for(i=0; i<5; i++) {
 
         
        tempNode->data = i; //�uanda ilk elemanday�z for d�ng�s�de i=0 d�nd�rece�inden ilk eleman 0 olacak. Her d�n��te 1 artacak.
         
        tempNode->next = (struct node *) malloc(sizeof(struct node));
        //Burada sadece d���m�n sonraki elemanlar� i�in bellekte yer a��yoruz
         
        tempNode = tempNode->next;
        //Bellekte yer a�t���m�z elemana gitmek i�in yaz�yoruz.
    }
     
    // Yukar�daki for d�ng�s� ile 5 eleman�m�z� da yerle�tirdik ama linked-list s�n�rs�z say�da eleman alabildi�inden bunun sonunu
    //bizim belirlememiz gerekiyor.
    //Tekrar a�a��daki kod sat�r�n� yazarak sonraki elemana yani d���m� bitirmek istedi�imiz 6. elemana ge�iyoruz.
    //ve NULL'a e�itliyoruz. B�ylece d���m sona eriyor.
    tempNode->next = NULL;
     
     
     
    //�imdi olu�turdu�umuz linked list'i s�ras�yla basmak i�in ilk eleman�m�z�n adresine tekrar gitmemiz gerekiyor. B�ylece her yazd�rd���m�zda ileri giderek bir sonraki adresteki veriyi alabilece�iz son d���m olan 6. d���m�n NULL de�erine gelene kadar.
    tempNode = head;
     
    int j;
     
    for (j = 0;tempNode->next != NULL ; j++) { // tempNode 6. elemana geldi�inde for d�ng�s� yanl�� olacak ve d�ng� k�r�lacak.
        printf("%d. Eleman %d\n",j+1,tempNode->data); // D���mdeki veriyi yazd�r�yoruz.
        tempNode=tempNode->next; // Bir sonraki d���me gidiyoruz.
    }
 
     
    return 0;
}
