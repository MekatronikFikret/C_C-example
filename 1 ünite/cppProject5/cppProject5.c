#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char k;
	char metin[25];
	int sayi1;
	float sayi2;
	double sayi3;

	printf("Bir Karakter Giriniz\n");
	scanf("%c", &k);

	printf("Bir Metin Giriniz\n");
	scanf("%s", &metin);

	printf("Tamsayı Giriniz\n");
	scanf("%d", &sayi1);

	printf("Float sayı Tipinde Giriniz\n");
	scanf("%f", &sayi2);

	printf("Double sayı Giriniz\n");
	scanf("%d", &sayi3);

	printf("%c\n", k);
	printf("%s\n", metin);
	printf("%d\n", sayi1);
	printf("%f\n", sayi2);
	printf("%d\n", sayi3);




}
