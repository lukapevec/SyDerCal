#include "../../include/func/AddFunction.h"

AddFunction::AddFunction(const DerivableFunction *left, const DerivableFunction *right) :
    BinaryFunction(left, right) {
}

double AddFunction::Evaluate(double x) const {
  return left_->Evaluate(x) + right_->Evaluate(x);
}

string AddFunction::ToString() const {
  return "(" + left_->ToString() + " + " + right_->ToString() + ")";
}

// Derivation of the addition
// (x + y)' = x' + y'
DerivableFunction *AddFunction::Derive() const {
  return *left_->Derive() + right_->Derive();
}

BinaryFunction *AddFunction::NewInstance(const DerivableFunction *left, const DerivableFunction *right) const {
  return new AddFunction(left, right);
}
