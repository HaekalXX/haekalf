#include <iostream>
#include <string>

using namespace std;

int maeihun()
{
  int pin;
  int i;
  for (i = 1; i < 4; i++) {
    cout << "masukkan pin : "; cin >> pin;
      cout<<"PIN yang anda masukan salah!"<<endl;
  }
  cout << "KARTU ANDA TELAH DIBLOKIR, SILAHKAN HUBUNGI BANK TERDEKAT" << endl;
  return 0;
}
