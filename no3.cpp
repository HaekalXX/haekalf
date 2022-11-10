//Nama        : Muhammad Haekal Fadhlanarsy
//Nim         : 152021136
//Kelas       : E
//Matakuliah  : Pemrograman Dasar

#include <iostream>
#include <string>

using namespace std;

int main()
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
