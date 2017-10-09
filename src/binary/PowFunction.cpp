#include "cmath"

#include "../../include/binary/PowFunction.h"
#include "../../include/unary/Const.h"

PowFunction::PowFunction(const DerivableFunction *base, const DerivableFunction *exponent) :
    BinaryFunction(base, exponent) {
}

double PowFunction::Evaluate(double x) const {
  return pow(left_->Evaluate(x), right_->Evaluate(x));
}

string PowFunction::ToString() const {
  return "(" + left_->ToString() + "^" + right_->ToString() + ")";
}

// Derivation of the division
// pow(x,n) = n * pow(x,n-1)
// pow(x,0) = 1
DerivableFunction *PowFunction::Derive() const {
  auto newExp = right_->Sub(new Const(1));
  auto nextPow = left_->Pow(newExp);
  return right_->Mul(nextPow);
}

DerivableFunction *PowFunction::Simplify() const {
  auto *sim_left = left_->Simplify();
  auto *sim_right = right_->Simplify(); // TODO
  return new PowFunction(sim_left, sim_right);
}


BinaryFunction *PowFunction::NewInstance(const DerivableFunction *left, const DerivableFunction *right) const {
  return new PowFunction(left, right);
}
