#include <cmath> // allow the math operation of sin

#include "../../include/unary/Sin.h"

Sin::Sin(const DerivableFunction *argument) : UnaryFunction(argument) {}

string Sin::ToString() const {
  return "sin(" + argument_->ToString() + ")";
}

// (sin(x))' = cos(x)
DerivableFunction *Sin::Derive() const {
  return new Cos(argument_);
}

double Sin::Evaluate(double d) const {
  return sin(d);
}

UnaryFunction *Sin::NewInstance(const DerivableFunction *other) const {
  return new Sin(other);
}
