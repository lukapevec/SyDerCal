#include "../../include/func/DivFunction.h"

DivFunction::DivFunction(const DerivableFunction *left, const DerivableFunction *right) :
    BinaryFunction(left, right) {
}

double DivFunction::Evaluate(double x) const {
  return left_->Evaluate(x) / right_->Evaluate(x);
}

string DivFunction::ToString() const {
  return "(" + left_->ToString() + " / " + right_->ToString() + ")";
}

// Derivation of the division
// (x / y)' = (x'y - xy') / (y*y)
DerivableFunction *DivFunction::Derive() const {
  auto num1 = *left_->Derive() * right_; // x'y
  auto num2 = *left_ * right_->Derive(); // xy'
  auto den = right_->Mul(right_); // y*y
  return num1->Sub(num2)->Div(den);
}

BinaryFunction *DivFunction::NewInstance(const DerivableFunction *left, const DerivableFunction *right) const {
  return new DivFunction(left, right);
}
