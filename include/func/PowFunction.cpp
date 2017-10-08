
#include "PowFunction.h"

 PowFunction::PowFunction(const DerivableFunction & base, const DerivableFunction & exponent) {

}

double PowFunction::Evaluate(double x) const {

  return pow(base_->Evaluate(x), exponent_->Evaluate(x));
}

string PowFunction::ToString() const {

  return "(" + base_->ToString() + "^" + exponent_->ToString() + ")";
}

DerivableFunction PowFunction::Derive() const {

  auto newExp = exponent_->Sub(new Const(1));
  auto nextPow = base_->Pow(newExp);
  return exponent_->Mul(nextPow);
}

