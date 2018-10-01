/*
 * Title  : Menghitung Luas, Keliling Lingkaran dan Segitiga.
 * Name   : Choirul Mahendrata Harpi
 * Class  : 18.IF.01
 * NIM    : 18.11.1869
 *
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
  int options;
  cout << "Daftar rumus, pilih dengan menggunakan angka." << endl << endl;
  cout << "[1] Segitiga\n[2] Lingkarang\n[3] About Me" << endl;

  cout << "Pilih : ";
  cin >> options;
  cout << endl;
  system("clear");

  if (options == 1) {
    cout << "Pilih rumus Segitiga" << endl;
    cout << "[1] Keliling Segitiga\n[2] Luas Segitiga" << endl;
    cout << "Pilih : ";
    cin >> options;
    system("clear");

      if (options = 1) {
        cout << "Keliling segitiga : " << endl;
        cout << "[1] Segitiga Siku\n[2] Segitiga Sama Sisi\n[3] Segitiga Sama Kaki" << endl;
      } else if (options == 2) {
        cout << "Luas seigitiga : " << endl;
        cout << "[1] Segitiga Siku\n[2] Segitiga Sama Sisi\n[3] Segitiga Sama Kaki" << endl;
      } else {
        cout << "Pilihan tidak tersedia";
      }

  } else if (options == 2) {
    cout << "Pilih rumus Lingkaran";
  } else if (options == 3) {
    cout << "Name\t: Choirul Mahendrata Harpi" << endl;
    cout << "Class\t: 18.IF.01" << endl;
    cout << "Nim\t: 18.11.189" << endl;
  } else {
    cout << "Pilihan tidak tersedia";
  }

  cin.get();
  return 0;
}

