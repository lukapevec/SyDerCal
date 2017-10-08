#include "../../include/func/SubFunction.h"

SubFunction::SubFunction(const DerivableFunction *left, const DerivableFunction *right) :
    BinaryFunction(left, right) {
}

double SubFunction::Evaluate(double x) const {
  return left_->Evaluate(x) - right_->Evaluate(x);
}

string SubFunction::ToString() const {
  return "(" + left_->ToString() + " - " + right_->ToString() + ")";
}

// Derivation of the subtraction
// (x - y)' = x' - y'
DerivableFunction *SubFunction::Derive() const {
  return *left_->Derive() - right_->Derive();
}

BinaryFunction *SubFunction::NewInstance(const DerivableFunction *left, const DerivableFunction *right) const {
  return new SubFunction(left, right);
}
