#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include "Vect.h"
Vector Vector::Sum(Vector v1, Vector v2) {
  return Vector(v1.getCoord1() + v2.getCoord1(),
                v1.getCoord2() + v2.getCoord2());
}

Number<double> Vector::Rad() {
  Number<double> rad((coord1.getValue() * coord1.getValue()) +
                     (coord2.getValue() * coord2.getValue()));
  return rad.Sqrt();
}

Number<double> Vector::Angle() {
  Number<double> angle(coord2.getValue() / coord1.getValue());
  angle.setValue(atan(angle.getValue()));
  return angle;
}