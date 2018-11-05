#include <iostream>

using namespace std;

int main () {
  int y = true && (7 + 8 % (3 + 2) > 10); // modulus didahulukan

  cout << y;
}