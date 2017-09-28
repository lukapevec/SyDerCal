#include "MulFunction.h"

MulFunction::MulFunction(const DerivableFunction *left, const DerivableFunction *right) : left_(left), right_(right) {}

double MulFunction::Evaluate(double x) const {
  return left_->Evaluate(x) * right_->Evaluate(x);
}

string MulFunction::ToString() const {
  return "(" + left_->ToString() + " * " + right_->ToString() + ")";
}

DerivableFunction *MulFunction::Derive() const {
  return *(*left_->Derive() * right_) + *left_ * right_->Derive();
}
