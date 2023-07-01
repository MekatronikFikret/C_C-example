#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int s;
	printf("Sayı Giriniz\n");
	scanf_s("%d",& s);
	if (s%2==0) {
		printf("Sayı Çiftir\n");
	}
	else 
		printf("Sayı Tektir\n");

	float s1;
	
	printf("Sayı Giriniz\n");
	scanf_s("%f", &s1);
	if (s1 > 0) {

		printf("Sayı Pozitif %.2f", s1);

	}
	else if (s1 < 0) {
		printf("Sayı Negatif %.2f", s1);
	}
	else
		printf("Sayı Sıfırdır %.2f",s1);


  
	float s2,s3;

	printf("Sayı Giriniz\n");
	scanf_s("%f", &s3);

	printf("Sayı Giriniz\n");
	scanf_s("%f", &s2);

	if (s3 > s2) {

		printf("En büyük sayı =  %.2f", s3);

	}
	else if (s2 > s3) {
		printf("En büyük sayı =  %.2f", s2);
	}
	else
		printf("Sayılar eşittir %.2f %.2f  ", s2,s3);
	

	float k, b,v1;

	printf("Kilonuzu Giriniz *kg* \n");
	scanf_s("%f", &k);

	printf("Boyunuzu Giriniz *m* \n");
	scanf_s("%f", &b);

	v1 = k / (b * b);
	printf(" Beden kitle/kütle indeksini oranı  %.2f \n ", v1);

	if (v1 < 18.5) {
		printf("Zayıf    %.2f  \n", v1);

	} 
	else if (18.5 < v1 && v1 < 25) {
		printf("Normal Kilolu    %.2f \n ", v1);

	}
	else if (24.9 < v1 && v1 < 29.9) {
		printf("Fazla kilolu  %.2f  \n", v1);

	}
	else if (30 < v1 && v1 < 34.9) {
		printf(" |. derece obez  %.2f  \n", v1);

	}
	else if (35 < v1 && v1 < 39.9) {
		printf(" ||. derece obez  %.2f  \n", v1);

	}
	else if (39.9 < v1) {
		printf(" |||. derece obez  %.2f  \n", v1);

	}
	

	int s5, s6 ;
	float b1;
	printf("Sayı Giriniz\n");
	scanf_s("%d", &s5);

	printf("Sayı Giriniz\n");
	scanf_s("%d", &s6);
	b1 = s5/s6;
	if (b1==0) {
		printf("Sayı tam bölünüyor \n ");

	}
	else {
		printf("Sayı tam bölünmüyor  \n");
	}
		


}

