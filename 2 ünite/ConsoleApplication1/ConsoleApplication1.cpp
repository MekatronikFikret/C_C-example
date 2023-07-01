
#include <iostream>
using namespace std;
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Turkish");
    
    float v, f, o;
  
    cout << "Vize notunu giriniz" << endl;
    cin >> v;
    cout << "Final  notunu giriniz" << endl;
    cin >> f;
    o = (v + f) / 2;







    
        if (50 <= o) {
    
            cout << "Dersten Geçti :" <<o<< endl;
        }


       
        else if(50 > o){
            cout << "Dersten Kaldı :" << o << endl;
        }


        if (o>=  85) {
            cout << " Harf Notu AA" <<endl;
        }
        else if (85> o && o >=80)
        {
            cout << " Harf Notu BA" << endl;
        }
        else if (80 > o && o >= 70) {
            cout << " Harf Notu BB" << endl;
        }
        else if (70 > o && o >= 65) {
            cout << " Harf Notu CB" << endl;
        }
        else if (65 > o && o >= 60) {
            cout << " Harf Notu CC" << endl;
        }
        else if (60 > o && o >= 55) {
            cout << " Harf Notu DC" << endl;
        }
        else if (55 > o && o >= 50) {
            cout << " Harf Notu DD" << endl;
        }
        else {
            cout << "Geçersiz Not" << endl;
        }
       

        float sayi;

        cout << "Sayı Giriniz" << endl;
        cin >> sayi;
        if (sayi > 0) {
            cout << "Sayı Pozitif" <<sayi<< endl;
        }
        else  if (sayi < 0) {
            cout << "Sayı Negatif" << sayi << endl;
        }
        else 
            cout << "Sayı Sıfırdır " << sayi << endl;



        int x;

        cout << "Sayı Giriniz" << endl;
        cin >>x;
        if (x > 0) {
            if (x % 2 == 1) {
                cout << "Sayı tektir " << x << endl;

            }
            else {
                cout << "Sayı Çiftir " << x << endl;
            }
        }
        else {
            cout << "Sayı Geçersizdir " << x << endl;
        }

        


    float x1, x2, x3;
    cout << "1'inci Sayıyı Giriniz" << endl;
    cin >> x1;

    cout << "2'inci Sayıyı Giriniz" << endl;
    cin >> x2;
    cout << "3'inci Sayıyı Giriniz" << endl;
    cin >> x3;

    if (x1 > x2 && x1 > x3) {
        cout << "En Büyük sayı " << x1 << endl;

    }


    else if (x2 > x1 && x2 > x3) {
        cout << "En Büyük sayı " << x2 << endl;
    }

    else if (x3 > x2 && x3 > x1) {
        cout << "En Büyük sayı " << x3 << endl;
    }
    else if(x1==x2 && x2==x3 && x1==x3)
    {
        cout << "Sayılar Birbirine eşittir " << endl;

    }
   

           float C;
           cout << "Sıcaklık Değerini Giriniz " << endl;
           cin >> C;

           if (C < 0) {
               cout << "Madde Katıdır" << endl;
           }
           else if (C > 100) {
               cout << "Madde Gazdır" << endl;
           }
           else 
               cout << "Madde Sıvıdır" << endl;


              
              float y1, y2;
              int c1;
              cout << "1'inci Sayıyı Giriniz" << endl;
              cin >>y1;
              cout << "2'inci Sayıyı Giriniz" << endl;
              cin >>y2;

              cout << "---İşlemler---" << endl,
                  cout << "---Toplama---" << endl,
                  cout << "---Çıkarma---" << endl,
                  cout << "---Bölme---" << endl,
                  cout << "---Çarpma---" << endl,
              cin >> c1;

              switch (c1) {
              case 1: {
                  cout << "Sayı1 + sayı2 = " << y1+y2 << endl;

                  break;
                 
                  }
              case 2: {
                  cout << "Sayı1 - sayı2 = " << y1-y2 << endl;
                 
                  break;
              }
              case 3: {
                  cout << "Sayı1 x sayı2 = " << y1*y2 << endl;


                  break;

              }
              case 4: {
                  cout << "Sayı1 / sayı2 = " << y1/y2 << endl;
                  break;

              }
              default: {
                  cout << "Geçersiz İşlem Seçildi "<< endl;

              }
              }

               

  



}

