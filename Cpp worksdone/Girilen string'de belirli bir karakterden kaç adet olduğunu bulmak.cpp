#include <stdio.h>
#include <string.h>

int main()
{
	char metin[80], aranan;
	char *bulunanPtr;
	int toplam = 0;
	int i = 0;
	
	printf("Metin Girin\n");
	fgets(metin, 79, stdin);
	printf("\nAranacak karakter = ");
	scanf("%c", &aranan);
	
	while ((bulunanPtr = strchr(&metin[i], aranan)) != NULL) {
		toplam++;
		i = bulunanPtr + 1 - &metin[0];
	}
	
	printf("\n%c den %d adet bulundu\n", aranan, toplam);
	
	return 0;
}
