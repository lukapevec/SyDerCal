#include <cmath>

#include "../../include/unary/Cos.h"

Cos::Cos(const DerivableFunction *argument) : UnaryFunction(argument) {}

string Cos::ToString() const {
  return "cos(" + argument_->ToString() + ")";
}

// (cos(x))' = -sin(x)
DerivableFunction *Cos::Derive() const {
  return (new Const(-1.0))->Mul(new Sin(argument_));
}

double Cos::Evaluate(double d) const {
  return cos(d);
}

UnaryFunction *Cos::NewInstance(const DerivableFunction *argument) const {
  return new Cos(argument);
}

