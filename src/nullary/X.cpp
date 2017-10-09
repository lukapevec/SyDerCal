#include "../../include/nullary/X.h"
#include "../../include/unary/Const.h"

string X::ToString() const {
  return "x";
}

DerivableFunction *X::Derive() const {
  return new Const(1);
}

double X::Evaluate(double d) const {
  return d;
}

NullaryFunction *X::NewInstance() const {
  return new X();
}
