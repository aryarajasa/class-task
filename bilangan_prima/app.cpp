/*
 * Title  : Mencari bilangan prima.
 * Name   : Choirul Mahendrata Harpi
 * Class  : 18.IF.01
 * NIM    : 18.11.1869
 */

#include <iostream>
using namespace std;

int main(){

 int min, max;

 cout << "Masukkan range bilangan." << endl;
 cout << "min : ";
 cin >> min;
 cout << "max : ";
 cin >> max;
 cout << endl;

  if (!(min >= max)){
     cout << "Bilangan Prima dari " << min << " sampai " << max << " adalah :" << endl;
     for(int i = min; i <= max; i++)
     {
      int factor = 0;
      for(int x = 1; x <= i; x++)
      {
        if (i % x == 0) {
          ++factor;
        }
      }
      if (factor == 2)
      {
        cout << i << " ";
      }
     }
  } else {
    cout << "Bilangan min tidak boleh sama dengan atau lebih besar dari bilangan max.";
  }

  cout << endl;
  cout << endl;

  return 0;
}