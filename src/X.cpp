#include "X.h"
#include "Const.h"

string X::ToString() const {
  return "X";
}

DerivableFunction *X::Derive() const {
  return new Const(1);
}

double X::Evaluate(double d) const {
  return d;
}
