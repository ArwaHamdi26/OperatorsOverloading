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

  complex operator+(int x);
  complex operator-(int x);
  complex operator*(int x);
  complex operator/(int x);
  complex operator*=(int x);
  complex operator-=(int x);
  complex operator/=(int x);
  complex operator%(int x);
  complex operator+=(int x);
  complex operator%=(int x);
  complex operator|=(int x);
  complex operator&=(int x);
  complex operator^=(int x);
  complex operator<<=(int x);
  complex operator>>=(int x);
  complex operator!=(int x);
  complex operator==(int x);
  complex operator<(int x);
  complex operator>(int x);
  complex operator<=(int x);
  complex operator>=(int x);
  complex operator!();
  complex operator||(int x);
  complex operator&&(int x);
  complex operator>>(int x);
  complex operator<<(int x);
  complex operator&(int x);
  complex operator|(int x);
  complex operator~();
  complex operator^(int x);
  complex operator++();
  complex operator--();
  friend std::ostream& operator<<(std::ostream& os, const complex& c);
  ~complex();
};

#endif