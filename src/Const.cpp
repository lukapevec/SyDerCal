#include <sstream>

#include "Const.h"

using namespace std;

Const::Const(double c) : c_(c) { }

string Const::ToString() const {
  ostringstream oss;
  oss << c_;
  return oss.str();
}

DerivableFunction *Const::Derive() const {
  return new Const(0);
}

double Const::Evaluate(double) const {
  return c_;
}
