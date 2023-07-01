#define _CRT_SCURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include<locale.h>
#define PI  3.14
int main()
{
	setlocale(LC_ALL, "Turkish");

	//1 soru Girilen iki sayının ortalamasını hesaplayan C programını yazınız.
	
	double x, y, o;
	printf("1'inci Sayıyı Giriniz \n");
	scanf_s("%d", &x);
	printf("2'inci Sayıyı Giriniz \n");
	scanf_s("%d", &y);
	o = (x + y) / 2;
	printf("2  sayıyın ortalaması %d\n", o);

	// 2 soru Bir kenar uzunluğu ve o kenara ait yüksekliği girilen üçgenin alanını hesaplayan C programını yazınız.
	float z, h, a;
	printf("Üçgenin kenar uzunluğunu giriniz\n");
	scanf_s("%f", &z);
	printf("Üçgenin Yüksekliğini giriniz\n");
	scanf_s("%f", &h);
	a = (z * h) / 2;
	printf("Üçgenin Alanı %f\n", a);

	//3 soru Bir öğrencinin almış olduğu vize notu ile final notunun ortalamasını hesaplayan C programını yazınız.
	float v, f, g;
	printf("Vize notunu Giriniz\n");
	scanf_s("%f", &v);
	printf("Final notunu Giriniz\n");
	scanf_s("%f", &f);
	g = (v + f) / 2;
	printf("Dersin Ortalamsı %2.f\n", g);

	//4 soru Yarıçapı girilen dairenin çevresini ve alanını hesaplayan C programını yazınız
	float r, c, al;
	printf("Yarıçapı Giriniz\n");
	scanf_s("%f", &r);
	al = PI * r * r;
	c = 2 * PI * r;
	printf("Dairenin Alanı %f\n", al);
	printf("Dairenin Çevresi %f\n", c);

	//5 soru Derece cinsinden girilen bir açıyı, Radyan ve Grad cinsine çeviren C programını yazınız.

	float derece,grad,rady;
	printf("Açının derecesini Giriniz\n");
	scanf_s("%f", &derece);
	grad = (derece * PI) / 200;
	rady = (derece * PI) / 180;
	printf("Gradyan Cinsinden %f\n", grad);
	printf("Gradyan Cinsinden %f\n", rady);

	// 6 soru Kısa kenarı ve uzun kenarı girilen dikdörtgenin çevresini ve alanını hesaplayan C programını yazınız.

	float uk, kk,da,dc;
	printf("Uzun kenarı Giriniz\n");
	scanf_s("%f", &uk);
	printf("Kısa kenarı Giriniz\n");
	scanf_s("%f", &kk);
	da = uk * kk;
	dc = (uk + kk) * 2;
	printf("Dikdörtgenin alanı %f\n",da);	printf("Dikdörtgenin çevresi %f\n", dc);

	//Örnek 7: Girilen bir fiyatın KDV (%18) eklendikten sonraki KDV’li fiyatını ekrana yazdıran C programını yazınız.


	float fiyt, kdv,sf;
	printf("Ürünün etiket fiyatını Giriniz\n");
	scanf_s("%f", &fiyt);
	printf("Kdv oranını  Giriniz\n");
	scanf_s("%f", &kdv);
	sf = ((fiyt * kdv)/100) + fiyt;
	printf("Ürünün Satış Fiyattı %f Tl\n",sf);
  
	//Örnek 8: İki dik kenarı girilen dik üçgenin hipotenüsünü hesaplayan C programını yazınız.
	
    float b, i, m;
	printf("Üçgenin kenarını Giriniz\n");
	scanf_s("%f", & b);
	printf("Üçgenin kenarını Giriniz\n");
	scanf_s("%f", & i);
	m =sqrt(pow(b,2) + pow(i,2));
	printf("Üçgenin Hipotenüs kenarını %f\n",m);

	//Örnek 9: Yarıçapı girilen kürenin alanını ve hacmini hesaplayan C programını yazınız.
	
	
	float u, ka, ha;

	printf("Yarıçapı Giriniz\n");
	scanf_s("%f",& u);
	ka = ( 4 * PI * pow(u,2) / 3;
	ha = (4 * PI *pow(u,3) / 3;
	printf("Kürenin Alanı %f\n",ka);
	printf("Kürenin Hacimi %f\n", ha);

}
