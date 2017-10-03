#include "math.h"

#include "PowFunction.h"
#include "Const.h"

PowFunction::PowFunction(const DerivableFunction *base, const DerivableFunction *exponent) :
    base_(base), exponent_(exponent) {
}

double PowFunction::Evaluate(double x) const {
  return pow(base_->Evaluate(x), exponent_->Evaluate(x));
}

string PowFunction::ToString() const {
  return "(" + base_->ToString() + "^" + exponent_->ToString() + ")";
}

// Derivation of the division
// pow(x,n) = n * pow(x,n-1)
// pow(x,0) = 1
DerivableFunction *PowFunction::Derive() const {
  auto newExp = exponent_->Sub(new Const(1));
  auto nextPow = base_->Pow(newExp);
  return exponent_->Mul(nextPow);
}
