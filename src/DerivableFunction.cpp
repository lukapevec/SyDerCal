#include "DerivableFunction.h"
#include "AddFunction.h"
#include "MulFunction.h"
#include "SubFunction.h"
#include "DivFunction.h"

double DerivableFunction::operator()(double x) const {
  return Evaluate(x);
}

DerivableFunction::operator string() const {
  return this->ToString();
}

DerivableFunction *DerivableFunction::Add(const DerivableFunction *other) const {
  return new AddFunction(this, other);
}

DerivableFunction *DerivableFunction::operator+(const DerivableFunction *other) const {
  return Add(other);
}

DerivableFunction *DerivableFunction::Sub(const DerivableFunction *other) const {
  return new SubFunction(this, other);
}

DerivableFunction *DerivableFunction::operator-(const DerivableFunction *other) const {
  return Sub(other);
}

DerivableFunction *DerivableFunction::Mul(const DerivableFunction *other) const {
  return new MulFunction(this, other);
}

DerivableFunction *DerivableFunction::operator*(const DerivableFunction *other) const {
  return Mul(other);
}
DerivableFunction *DerivableFunction::Div(const DerivableFunction *other) const {
  return new DivFunction(this, other);
}
DerivableFunction *DerivableFunction::operator/(const DerivableFunction *other) const {
  return Div(other);
}
