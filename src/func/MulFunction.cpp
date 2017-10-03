#include "../../include/func/MulFunction.h"

MulFunction::MulFunction(const DerivableFunction *left, const DerivableFunction *right):
    left_(left), right_(right) {
}

double MulFunction::Evaluate(double x) const {
  return left_->Evaluate(x) * right_->Evaluate(x);
}

string MulFunction::ToString() const {
  return "(" + left_->ToString() + " * " + right_->ToString() + ")";
}

// Derivation of the multiplication
// (xy)' = x'y + xy'
DerivableFunction *MulFunction::Derive() const {
  return *left_->Derive()->Mul(right_) + left_->Mul(right_->Derive());
}
