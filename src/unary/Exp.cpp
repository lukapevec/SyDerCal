#include <cmath>

#include "../../include/unary/Exp.h"

Exp::Exp(const DerivableFunction &argument) : UnaryFunction(argument) {}

string Exp::ToString() const {
  return "exp(" + argument_.ToString() + ")";
}

// (e(x))' = e(x) * x'
DerivableFunction &Exp::Derive() const {
  return *this * argument_.Derive();
}

double Exp::Evaluate(double d) const {
  return exp(d);
}

UnaryFunction &Exp::NewInstance(const DerivableFunction &argument) const {
  return *new Exp(argument);
}
