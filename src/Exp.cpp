#include <cmath>

#include "../include/Exp.h"

Exp::Exp(const DerivableFunction *argument) : argument_(argument) {}

string Exp::ToString() const {
  return "exp(" + argument_->ToString() + ")";
}

// (e(x))' = e(x) * x'
DerivableFunction *Exp::Derive() const {
  return *this * argument_->Derive();
}

double Exp::Evaluate(double d) const {
  return exp(d);
}
