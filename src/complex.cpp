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

complex complex ::operator+(int x) const {
  complex c1(real + x, img + x);
  return c1;
}
complex complex ::operator-(int x) const {
  complex c1(real - x, img - x);
  return c1;
}
complex complex ::operator-(complex x) const {
  complex c1(this->real - x.real, this->img - x.img);
  return c1;
}

complex complex ::operator+(complex x) const {
  complex c1(this->real + x.real, this->img + x.img);
  return c1;
}

complex complex ::operator*(complex x) const {
  complex c1(this->real * x.real, this->img * x.img);
  return c1;
}
complex complex ::operator/(complex x) const {
  complex c1(this->real / x.real, this->img / x.img);
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
complex& complex::operator/=(int x) {
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
bool complex::operator==(int x) {
  if ((this->img == 0) && (this->real == x)) {
    return true;
  }

  else if (((this->img == x) && (this->real == x))) {
    return true;
  } else {
    return false;
  }
}
bool complex::operator!=(int x) {
  if ((this->img == 0) && (this->real != x)) {
    return true;
  }

  else if (((this->img != x) && (this->real != x))) {
    return true;
  } else if (((this->img != x) && (this->real == 0))) {
    return true;
  } else {
    return false;
  }
}
bool complex::operator>=(int x) {
  if (this->img == 0) {
    if (this->real >= x) {
      return true;
    }
  } else if (((this->img >= x) && (this->real >= x)) ||
             ((this->img == x) && (this->real >= x))) {
    return true;

  } else {
    return false;
  }
}
bool complex::operator<=(int x) {
  if (this->img == 0) {
    if (this->real <= x) {
      return true;
    }
  } else if (((this->img <= x) && (this->real <= x)) ||
             ((this->img == x) && (this->real <= x))) {
    return true;

  } else {
    return false;
  }
}
bool complex::operator>(int x) {
  if (this->img == 0) {
    if (this->real > x) {
      return true;
    }
  } else if (((this->img == x) && (this->real > x)) ||
             ((this->real == x) && (this->img > x))) {
    return true;

  } else if ((this->real > x) && (this->img > x)) {
    return true;
  } else {
    return false;
  }
}
bool complex::operator<(int x) {
  if (this->img == 0) {
    if (this->real < x) {
      return true;
    }
  } else if (((this->img == x) && (this->real < x)) ||
             ((this->real == x) && (this->img < x))) {
    return true;

  } else if ((this->real < x) && (this->img < x)) {
    return true;
  } else {
    return false;
  }
}

complex complex::operator!() {
  this->real = !this->real;
  this->img = !this->img;
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
std::istream& operator<<(std::istream& is, complex& c) {
  int r, i;
  is >> r >> i;
  c.setReal(r);
  c.setImg(i);
  return is;
}
complex operator-(int x, complex c) {
  complex c1(x - c.real, x - c.img);
  return c1;
}
complex operator+(int x, complex c) {
  complex c1(x + c.real, x + c.img);
  return c1;
}
complex operator*(int x, complex c) {
  complex c1(x * c.real, x * c.img);
  return c1;
}
complex operator/(int x, complex c) {
  complex c1(x / c.real, x / c.img);
  return c1;
}