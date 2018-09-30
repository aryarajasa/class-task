/*
 * Title  : Menghitung Luas, Keliling Lingkaran dan Segitiga.
 * Name   : Choirul Mahendrata Harpi
 * Class  : 18.IF.01
 * NIM    : 18.11.1869
 *
 */

#include <iostream>
using namespace std;

main(){
  int options;
  cout << "Daftar rumus, pilih dengan menggunakan angka." << endl << endl;
  cout << "[1] Segitiga\n[2] Lingkarang\n[3] About Me" << endl;

  cout << "Pilih rumus : ";
  cin >> options;
  cout << endl;

  if (options == 1) {
    cout << "Pilih rumus Segitiga" << endl;
    cout << "[1] Keliling Segitiga\n[2] Luas Segitiga" << endl;

  } else if (options == 2) {
    cout << "Pilih rumus Lingkaran";
  } else if (options == 3) {
    cout << "Name\t: Choirul Mahendrata Harpi" << endl;
    cout << "Class\t: 18.IF.01" << endl;
    cout << "Nim\t: 18.11.189" << endl;
  } else {
    cout << "Nomer yang anda masukkan tidak sesuai";
  }

  cin.get();
  return 0;
}

