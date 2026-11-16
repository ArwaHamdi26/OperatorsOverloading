#include <iostream>

#include "./include/complex.hpp"
using namespace std;

int main() {
  complex c(15, 7);
  complex c1(10, 5);
  complex c7 = c - c1;
  cout << c7 << endl;
  c1 *= 2;
  cout << c1 << endl;
  complex c9 = 2 * c;
  cout << "int times complex: " << c9 << endl;
  complex c8(5, 6);
  cout << (c8 < 6) << endl;
  complex c2(10, 5);
  complex c3 = c2 / 2;
  cout << c3 << endl;
  c2 /= 2;
  cout << c2 << endl;
  c - 5;
  cout << c << endl;
}
