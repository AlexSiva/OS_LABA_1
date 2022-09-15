#pragma once
#include <iostream>
#include <math.h>
template <class T>
class Number {
 public:
  explicit Number(T val) { this->value = val; }
  Number() = default;
  ~Number() = default;
  friend Number<T> operator+(const Number<T>& x, const Number<T>& y) {
    return Number<T>(x.value + y.value);
  }
  friend Number<T> operator-(const Number<T>& x, const Number<T>& y) {
    return Number<T>(x.value - y.value);
  }
  friend Number<T> operator*(const Number<T>& x, const Number<T>& y) {
    return Number<T>(x.value * y.value);
  }
  friend Number<T> operator/(const Number<T>& x, const Number<T>& y) {
    return Number<T>(x.value / y.value);
  }
  T getValue() { return this->value; }
  void setValue(T numb) { this->value = numb; }
  Number<T> Sqrt() {
      return Number<T>(sqrt(this->getValue()));
  }
 private:
  T value;
};

Number<double> Zero(0);
Number<double> One(1);

