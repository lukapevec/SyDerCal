#include <cmath>

#include "Cos.h"

Cos::Cos(const DerivableFunction *argument) : argument_(argument) {}

string Cos::ToString() const {
  return "cos(" + argument_->ToString() + ")";
}

// (cos(x))' = -sin(x)
DerivableFunction *Cos::Derive() const {
  return (new Sin(argument_))->Mul(new Const(-1.0));
}

double Cos::Evaluate(double d) const {
  return cos(d);
}

