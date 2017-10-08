
#include "X.h"

string X::ToString() const {

  return "x";
}

DerivableFunction X::Derive() const {

  return new Const(1);
}

double X::Evaluate(double d) const {

  return d;
}

