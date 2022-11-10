//Nama        : Muhammad Haekal Fadhlanarsy
//Nim         : 152021136
//Kelas       : E
//Matakuliah  : Pemrograman Dasar

#include <iostream>
#include <string>

using namespace std;

int main() {
  string nama_1, nama_2, nama_3;
  float nilai_1, nilai_2, nilai_3;

  cout << " 1 NAMA  :";
  cin >> nama_1;
  cout << "   JUMLAH PERMEN :";
  cin >> nilai_1;
  cout << " 2 NAMA  :";
  cin >> nama_2;
  cout << "   JUMLAH PERMEN :";
  cin >> nilai_2;
  cout << " 3 NAMA  :";
  cin >> nama_3;
  cout << "   JUMLAH PERMEN :";
  cin >> nilai_3;
  cout << "" << endl;

  if (nilai_1 > nilai_2) {
    cout << "permen " << nama_1;
    cout << " lebih banyak dari permen " << nama_2 << endl;
    cout << "dengan selisih permen :" << nilai_1 - nilai_2 << endl;
    cout << "" << endl;
  }
  if (nilai_1 < nilai_2) {
    cout << "permen " << nama_2;
    cout << " lebih banyak dari permen " << nama_1 << endl;
    cout << "dengan selisih permen :" << nilai_2 - nilai_1 << endl;
    cout << "" << endl;
  }
  if (nilai_1 > nilai_3) {
    cout << "permen " << nama_1;
    cout << " lebih banyak dari permen " << nama_3 << endl;
    cout << "dengan selisih permen :" << nilai_1 - nilai_3 << endl;
    cout << "" << endl;
  }
  if (nilai_1 < nilai_3) {
    cout << "permen " << nama_3;
    cout << " lebih banyak dari permen " << nama_1 << endl;
    cout << "dengan selisih permen :" << nilai_3 - nilai_1 << endl;
    cout << "" << endl;
  }
  if (nilai_2 > nilai_3) {
    cout << "permen " << nama_2;
    cout << " lebih banyak dari permen " << nama_3 << endl;
    cout << "dengan selisih permen :" << nilai_2 - nilai_3 << endl;
    cout << "" << endl;
  }
  if (nilai_2 < nilai_3) {
    cout << "permen " << nama_3;
    cout << " lebih banyak dari permen " << nama_2 << endl;
    cout << "dengan selisih permen :" << nilai_3 - nilai_2 << endl;
    cout << "" << endl;
  }
  if (nilai_1 == nilai_3) {
    cout << "permen " << nama_1;
    cout << " sama dengan permen " << nama_3 << endl;
    cout << "dan selisih permen " << nama_1;
    cout << " dan " << nama_3;
    cout << " dengan permen " << nama_2;
    cout << " adalah " << nilai_1 - nilai_2 << endl;
    cout << "" << endl;
  }
  if (nilai_1 == nilai_2) {
    cout << "permen " << nama_1;
    cout << " sama dengan permen " << nama_2 << endl;
    cout << "dan selisih permen " << nama_1;
    cout << " dan  " << nama_2;
    cout << "  dengan permen " << nama_3;
    cout << " adalah " << nilai_1 - nilai_3 << endl;
    cout << "" << endl;
  }
  if (nilai_2 == nilai_3) {
    cout << "permen " << nama_2;
    cout << " sama dengan permen " << nama_3 << endl;
    cout << "dan selisih permen " << nama_2;
    cout << " dan  " << nama_3;
    cout << "  dengan permen " << nama_1;
    cout << " adalah " << nilai_3 - nilai_1 << endl;
    cout << "" << endl;
  }

  if (nilai_1 = nilai_2 == nilai_3) {
    cout << "permen " << nama_1;
    cout << ", " << nama_2;
    cout << " dan " << nama_3;
    cout << " adalah sama " << endl;
    cout << "" << endl;
  }

  return  0;
}
