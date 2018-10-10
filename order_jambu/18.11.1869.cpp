/*
 * Title  : Toko Jambu diskon.
 * Name   : Choirul Mahendrata Harpi
 * Class  : 18.IF.01
 * NIM    : 18.11.1869
 *
 * Beli > 5kg diskon 5%
 * Beli > 10kg diskon 10%
 *
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  const int price = 15000;
  int items,
      total;
  float disc;

  cout << "-- Kulakan Jambu 15k, diskonan --- " << endl;
  cout << "   Harga Rp. " << price << "/kg" << endl
       << endl;
  cout << "   Beli :      kg\b\b\b\b\b\b\b";
  cin >> items;

  total = items * price;
  disc = (items > 5) ? (items > 10) ? 10 : 5 : 0;
  disc *= total / 100;

  cout << endl
       << "   Total: Rp. " << setw(10) << total << endl;
  cout << "   Disc.: Rp. " << setw(10) << disc << endl;
  cout << "          ___________________ _" << endl;

  cout << "   Bayar: Rp. " << setw(10) << total - disc << endl
       << endl
       << endl;
}