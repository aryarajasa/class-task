/*
 * Title  : Konversi.
 * Name   : Choirul Mahendrata Harpi
 * Class  : 18.IF.01
 * NIM    : 18.11.1869
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string user_id; // panggilan
  string password; // nim

  cin >> user_id;
  cin >> password;

  if (user_id == "choirul" and password == "18.11.1869") {
    cout << "selamat anda login";
  } else {
    cout << "user_id atau password tidak sesuai.";
  }

  return 0;
}