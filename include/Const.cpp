
#include "Const.h"

 Const::Const(double c) {
}

string Const::ToString() const {

  ostringstream oss;
  oss << c_;
  return oss.str();
}

DerivableFunction Const::Derive() const {

  return new Const(0);
}

double Const::Evaluate(double ) const {

  return c_;
}

