#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  const int price = 15000;
  int beli, diskon;

  cout << "-- Dodol Jambu 15k ae --- " << endl;
  cout << "   Harga Rp. " << price << "/kg" << endl << endl;
  cout << "   Beli :      kg\b\b\b\b\b\b\b";
  cin >> beli;
  cout << endl << endl;
  cout << "   Total: Rp. " << setw(10) << total << endl;
  cout << "   Disc.: Rp. " << setw(10) << diskon << endl;
  cout << "          ___________________ _" << endl;

  cout << "   Bayar: Rp. " << setw(10) << total - diskon << endl;
  cout << endl << endl;
}