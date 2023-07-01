

#include <iostream>
//#define PI 3.14

using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	float r, alan;
	const float PI = 3.14;
	cout << "Yarıçap Giriniz"<<endl ;
	cin >> r;
	alan = PI * r * r;
	cout << "Alan\n" << alan<<endl ;


}

