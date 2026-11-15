#include "../include/complex.hpp"

#include <iostream>
using namespace std;
complex ::complex(int r, int i) {
  this->real = r;
  this->img = i;
}
void complex ::setReal(int x) { real = x; }
void complex::setImg(int x) { img = x; }
int complex::getReal() const { return real; }
int complex::getImg() const { return img; }

complex complex ::operator+(int x) {
  complex c1(real + x, img + x);
  return c1;
}
complex complex ::operator-(int x) {
  complex c1(real - x, img - x);
  return c1;
}

complex complex ::operator*(int x) {
  complex c1(real * x, img * x);
  return c1;
}
complex complex ::operator%(int x) {
  complex c1(real % x, img % x);
  return c1;
}

complex complex ::operator/(int x) {
  complex c1(real / x, img / x);
  return c1;
}

complex complex::operator*=(int x) {
  this->real = this->real * x;
  this->img = this->img * x;
  return *this;
}
complex complex::operator-=(int x) {
  this->real = this->real - x;
  this->img = this->img - x;
  return *this;
}
complex complex::operator/=(int x) {
  this->real = this->real / x;
  this->img = this->img / x;
  return *this;
}
complex complex::operator+=(int x) {
  this->real = this->real + x;
  this->img = this->img + x;
  return *this;
}
complex complex::operator%=(int x) {
  this->real = this->real % x;
  this->img = this->img % x;
  return *this;
}
complex complex::operator&=(int x) {
  this->real = this->real & x;
  this->img = this->img & x;
  return *this;
}
complex complex::operator|=(int x) {
  this->real = this->real | x;
  this->img = this->img | x;
  return *this;
}
complex complex::operator^=(int x) {
  this->real = this->real ^ x;
  this->img = this->img ^ x;
  return *this;
}
complex complex::operator<<=(int x) {
  this->real = this->real << x;
  this->img = this->img << x;
  return *this;
}
complex complex::operator>>=(int x) {
  this->real = this->real >> x;
  this->img = this->img >> x;
  return *this;
}
complex complex::operator==(int x) {
  this->real = this->real == x;
  this->img = this->img == x;
  return *this;
}
complex complex::operator!=(int x) {
  this->real = this->real != x;
  this->img = this->img != x;
  return *this;
}
complex complex::operator>=(int x) {
  this->real = this->real >= x;
  this->img = this->img >= x;
  return *this;
}
complex complex::operator<=(int x) {
  this->real = this->real <= x;
  this->img = this->img <= x;
  return *this;
}
complex complex::operator>(int x) {
  this->real = this->real > x;
  this->img = this->img > x;
  return *this;
}
complex complex::operator<(int x) {
  this->real = this->real < x;
  this->img = this->img < x;
  return *this;
}

complex complex::operator!() {
  this->real = !this->real;
  this->img = !this->img;
  return *this;
}
complex complex::operator||(int x) {
  this->real = this->real || x;
  this->img = this->img || x;
  return *this;
}
complex complex::operator&&(int x) {
  this->real = this->real && x;
  this->img = this->img && x;
  return *this;
}

complex complex ::operator&(int x) {
  complex c1(real & x, img & x);
  return c1;
}
complex complex ::operator|(int x) {
  complex c1(real | x, img | x);
  return c1;
}
complex complex ::operator^(int x) {
  complex c1(real ^ x, img ^ x);
  return c1;
}
complex complex ::operator~() {
  complex c1(~real, ~img);
  return c1;
}
complex complex ::operator>>(int x) {
  complex c1(real >> x, img >> x);
  return c1;
}
complex complex ::operator<<(int x) {
  complex c1(real << x, img << x);
  return c1;
}
complex complex ::operator++() {
  complex c1(real++, img++);
  return c1;
}
complex complex ::operator--() {
  complex c1(real--, img--);
  return c1;
}
complex ::~complex() {}

std::ostream& operator<<(std::ostream& os, const complex& c) {
  os << "(" << c.getReal() << "," << c.getImg() << "i)";
  return os;
}