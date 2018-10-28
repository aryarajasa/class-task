/*
 * Title  : Mencari bilangan prima.
 * Name   : Choirul Mahendrata Harpi
 * Class  : 18.IF.01
 * NIM    : 18.11.1869
 */


// Clue : Syarat Bilangan Prima yaitu bilangan yang habis di bagi bilangan itu sendiri dan dibagi 1, tapi angka 1 bukan bilangan prima.

#include <iostream> // mengimport standar library c++ yang berisi, cin, cout.
using namespace std; // Memberi tahu program bahwa kita menggunakan namespace std tanpa ini kita menuliskan std:cout, maka itu kita menggunakan ini.

int main(){ // fungsi utama

 int min, max; // deklarasi variabel min, max tipe int  

 cout << "Masukkan range bilangan." << endl; // outputkan string
 cout << "min : "; // outputkan string
 cin >> min; // inputkan nilai ke var min
 cout << "max : "; // outputkan
 cin >> max; // inputkan nilai ke var max
 cout << endl; // endline untuk space 

  if (!(min >= max)){ // jika nilai min tidak lebih besar dari max maka jalankan.
     cout << "Bilangan Prima dari " << min << " sampai " << max << " adalah :" << endl; // tampilkan string dan var yang disebut
     for(int i = min; i <= max; i++) // perulangan dengan dimulai dengan anga min, hingga kurang dari sama dengan max.
     {
      int factor = 0; // ini sebagai penanda bahwa bilangan prima hanya dapat dibagi 1 dan bilangan itu sendiri. 2 kali pembagian selebihnya/sekurangnya bukan
      for(int x = 1; x <= i; x++) // perulangan sebagai faktor memodulus antara nilai ke var 1 sampai dengan nilai i.
      {
        if (i % x == 0) { // jika nilai ke i dibagi nilai ke x sama dengan 0, maka faktornya increment / +1.
          ++factor;
        } // jika tidak maka skip / loncat ke bilangan selanjutnya
      }
      if (factor == 2) // jika faktor sama dengan 2 maka memenuhi syarat bilangan prima
      {
        cout << i << " "; // tampilkan nilai var ke i, yang mana itu memenuhi syarat bilangan prima 
      }
     }
  } else { // jika nilai min lebih dari max maka tampilkan peringatan ini
    cout << "Bilangan min tidak boleh sama dengan atau lebih besar dari bilangan max."; // outpput string
  }

  cout << endl; // outputkan endline untuk space
  cout << endl; // outputkan endline untuk space

  return 0;
}