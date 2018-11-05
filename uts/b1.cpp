#include <iostream>

using namespace std;

int main () {
  int a = 1;
  bool b = false;

  do {
    b = !b;
    a = a + 2;
  } while(b);
  cout << a;
}