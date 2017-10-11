#include <cfloat>
#include <cmath>

#include "../include/DerivableFunction.h"
#include "../include/binary/AddFunction.h"
#include "../include/binary/MulFunction.h"
#include "../include/binary/SubFunction.h"
#include "../include/binary/DivFunction.h"
#include "../include/binary/PowFunction.h"

double DerivableFunction::operator()(double x) const {
  return Evaluate(x);
}

DerivableFunction::operator string() const {
  return this->ToString();
}

DerivableFunction &DerivableFunction::Add(const DerivableFunction &other) const {
  return *new AddFunction(*this, other);
}

DerivableFunction &DerivableFunction::operator+(const DerivableFunction &other) const {
  return Add(other);
}

DerivableFunction &DerivableFunction::Sub(const DerivableFunction &other) const {
  return *new SubFunction(*this, other);
}

DerivableFunction &DerivableFunction::operator-(const DerivableFunction &other) const {
  return Sub(other);
}

DerivableFunction &DerivableFunction::Mul(const DerivableFunction &other) const {
  return *new MulFunction(*this, other);
}

DerivableFunction &DerivableFunction::operator*(const DerivableFunction &other) const {
  return Mul(other);
}

DerivableFunction &DerivableFunction::Div(const DerivableFunction &other) const {
  return *new DivFunction(*this, other);
}

DerivableFunction &DerivableFunction::operator/(const DerivableFunction &other) const {
  return Div(other);
}

DerivableFunction &DerivableFunction::Pow(const DerivableFunction &other) const {
  return *new PowFunction(*this, other);
}

DerivableFunction &DerivableFunction::operator^(const DerivableFunction &other) const {
  return Pow(other);
}

double DerivableFunction::Limit(double value, LimitSide limit) const {
  auto epsilon = DBL_EPSILON;
  auto leftSide = Evaluate(value - epsilon);
  auto rightSide = Evaluate(value + epsilon);
  switch (limit) {
    case LEFT:
      return leftSide;
    case RIGHT:
      return rightSide;
    case AVG:
      return leftSide / 2 + rightSide / 2;
    default:
      return NAN;
  }
}

DerivableFunction &DerivableFunction::Simplify() const {
  return const_cast<DerivableFunction &>(*this);
}
