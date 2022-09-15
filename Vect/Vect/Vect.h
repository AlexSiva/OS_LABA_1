#pragma once
#ifdef VECT_EXPORTS
#define VECT_API __declspec(dllexport)
#else
#define VECT_API __declspec(dllimport)
#endif
#include "Maths.h"
class VECT_API Vector {
 private:
  Number<double> coord1;
  Number<double> coord2;

 public:
  Vector() = default;
  ~Vector() = default;
  Vector(Number<double> _x, Number<double> _y) {
    coord1.setValue(_x.getValue());
    coord2.setValue(_y.getValue());
  }
  Vector Sum(Vector, Vector);
  Number<double> Rad();
  Number<double> Angle();
  Number<double> getCoord1() { return this->coord1; }
  Number<double> getCoord2() { return this->coord2; }
  void setCoord1(Number<double> numb) { this->coord1 = numb; }
  void setCoord2(Number<double> numb) { this->coord2 = numb; }
};

Vector zero(Zero, Zero);
Vector one(One, One);