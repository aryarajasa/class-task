/*
 * Title  : Mencari bilangan terbesar dan terkecil.
 * Name   : Choirul Mahendrata Harpi
 * Class  : 18.IF.01
 * NIM    : 18.11.1869
 */

#include <iostream>  // Menginputkan standar library c++ yang berisi, cin, cout.
using namespace std; // Memberi tahu program bahwa kita menggunakan namespace std tanpa ini kita menuliskan std:cout, maka itu kita menggunakan ini.

int main()
{
  int numbers[3], // Array dengan tipe integer dengan size 3 digunakan menyimpan nilai yang akan dibandingkan.
      besar,      // Variabel dengan tipe integer yang digunakan untuk menyimpan nilai terbesar.
      kecil;      // Variabel dengan tipe integer yang digunakan untuk menyimpan nilai terkecil.

  cout << "masukkan angka : ";                   // mengoutputkan.
  cin >> numbers[0] >> numbers[1] >> numbers[2]; // minginputkan 3 angka dengan dibatasi spasi.

  for (int i = 0; i < 3; i++) // perulangan hingga kurang dari 3.
  {
    if (numbers[i] >= besar)
    {                     // kondisi ketika numbers[i] lebih besar atau sama dengan dari variabel.
      besar = numbers[i]; // jika true maka ganti nilai variabel besar dengan nilai variabel array index ke i.
    }
    else
    {                     // jika nilai numbers ke i tidak besar atau sama dengan maka lakukan else.
      kecil = numbers[i]; // jik false maka ganti nilai variabel kecil dengan nilai variabel array index ke i.
    }
  }

  cout << "Bilangan terbesar adalah " << besar << endl; // mengoutputkan hasil nilai terbesar.
  cout << "Bilangan terkecil adalah " << kecil;         // mengoutputkan hasil nilai terkecil.

  return 0;
}