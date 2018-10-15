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

#include <iostream> // Menginputkan standar library c++ yang berisi, cin, cout.
#include <iomanip>  // Menginputkan standar library c++ yang setw() dan masih banyak lagi.

using namespace std;

int main()
{

  const int price = 15000; // variabel const bertipe integer bernama price
  int items, // deklarasi variabel bernama items dan total bertipe integer
      total;
  float disc; // deklarsi variabel bernama disc bertipe float

  cout << "-- Kulakan Jambu 15k, diskonan --- " << endl; // output string
  cout << "   Harga Rp. " << price << "/kg" << endl // output string disertai variable price
       << endl; // baris baru
  cout << "   Beli :      kg\b\b\b\b\b\b\b"; // output string dengan backspace agar inputan items bergeser ke kiri
  cin >> items; // masukkan ke variabel items

  total = items * price; // perhitungan jumlah item yang dibeli dikali harga
  disc = (items > 5) ? (items > 10) ? 10 : 5 : 0; // penentuan diskon menggunakan ternary operator
  disc *= total / 100;  // penghitungan diskon total beli dibagi / 100 dikali diskon

  cout << endl // baris baru
       << "   Total: Rp. " << setw(10) << total << endl; // setw : menggeser ke kanan 10 baris atau memberikan lebar bidang
  cout << "   Disc.: Rp. " << setw(10) << disc << endl;  // setw : menggeser ke kanan 10 baris atau memberikan lebar bidang
  cout << "          ___________________ _" << endl; // output string

  cout << "   Bayar: Rp. " << setw(10) << total - disc << endl // penentuan potongan harga total harga - total diskon dan  menggeser ke kanan 10 baris atau memberikan lebar bidang
       << endl                                                 // baris baru
       << endl;                                                // baris baru
       return 0;
}