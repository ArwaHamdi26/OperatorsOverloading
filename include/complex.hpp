#ifndef COMPLEX_HPP
#define COMPLEX_HPP
#include <iostream>
using namespace std;
class complex {
 private:
  int real;
  int img;

 public:
  complex(int r = 0, int i = 0);

  void setReal(int x);
  void setImg(int x);
  int getReal() const;
  int getImg() const;

  complex operator+(int x) const;
  complex operator-(int x) const;
  complex operator+(complex x) const;
  complex operator*(complex x) const;
  complex operator/(complex x) const;
  complex operator-(complex x) const;
  complex operator*(int x);
  complex operator/(int x);
  complex operator*=(int x);
  complex operator-=(int x);
  complex& operator/=(int x);
  complex operator%(int x);
  complex operator+=(int x);
  complex operator%=(int x);
  complex operator|=(int x);
  complex operator&=(int x);
  complex operator^=(int x);
  complex operator<<=(int x);
  complex operator>>=(int x);
  bool operator!=(int x);
  bool operator==(int x);
  bool operator<(int x);
  bool operator>(int x);
  bool operator<=(int x);
  bool operator>=(int x);
  complex operator!();
  complex operator>>(int x);
  complex operator<<(int x);
  complex operator&(int x);
  complex operator|(int x);
  complex operator~();
  complex operator^(int x);
  complex operator++();
  complex operator--();
  friend std::ostream& operator<<(std::ostream& os, const complex& c);
  friend std::istream& operator<<(std::istream& is, complex& c);
  friend complex operator-(int x, complex c);
  friend complex operator+(int x, complex c);
  friend complex operator*(int x, complex c);
  friend complex operator/(int x, complex c);
  ~complex();
};

#endif