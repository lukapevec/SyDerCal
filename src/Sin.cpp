#include <cmath> // allow the math operation of sin

#include "Sin.h"

Sin::Sin(const DerivableFunction *argument) : argument_(argument) {}

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
