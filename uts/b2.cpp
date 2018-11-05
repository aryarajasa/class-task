#include <iostream>

using namespace std;

int main () {
  int a, b;

  a = 15 / (3 + 1);
  b = a / 2;
  if (a + b == 8 / 2){
    cout << a;
  } else {
    cout << b;
  }
}