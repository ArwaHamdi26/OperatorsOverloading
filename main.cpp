#include <iostream>

#include "./include/complex.hpp"
using namespace std;

int main() {
  complex c(10, 5);
  complex c1(10, 5);
  c1 *= 2;
  cout << c1 << endl;
  complex c2(10, 5);
  complex c3 = c2 / 2;
  cout << c3 << endl;
  c2 /= 2;
  cout << c2 << endl;
  c - 5;
  cout << c << endl;
}
