#include <sstream>

#include "../../include/nullary/Const.h"

using namespace std;

Const::Const(double argument) : argument_(argument) {}

string Const::ToString() const {
  ostringstream oss;
  oss << argument_;
  return oss.str();
}

DerivableFunction &Const::Derive() const {
  return *new Const(0);
}

double Const::Evaluate(double) const {
  return argument_;
}
