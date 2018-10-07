/*
 * Title  : Konversi.
 * Name   : Choirul Mahendrata Harpi
 * Class  : 18.IF.01
 * NIM    : 18.11.1869
 */

#include <iostream>  // Menginputkan standar library c++ yang berisi, cin, cout.
using namespace std; // Memberi tahu program bahwa kita menggunakan namespace std tanpa ini kita menuliskan std:cout, maka itu kita menggunakan ini.

int main()
{
  int nilai;

  cout << "Masukkan Nilai : ";
  cin >> nilai;


  if (nilai >= 86 and nilai <= 100) {
    cout << "Nilai A";
  } else if (nilai >= 66 and nilai <= 85) {
    cout << "Nilai B";
  } else if (nilai >= 46 and nilai <= 65) {
    cout << "Nilai C";
  } else if (nilai >= 1 and nilai <= 45) {
    cout << "Nilai D";
  } else if (nilai == 0) {
    cout << "Nilai E";
  } else {
    cout << "Nilai tidak Valid";
  }

  return 0;
}