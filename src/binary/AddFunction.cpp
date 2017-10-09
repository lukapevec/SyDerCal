#include "../../include/binary/AddFunction.h"
#include "../../include/unary/Const.h"

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

DerivableFunction *AddFunction::Simplify() const {
  auto *sim_left = left_->Simplify();
  auto *sim_right = right_->Simplify();

  // simplification 0 + x = x
  auto *con_left = dynamic_cast<Const *> (sim_left);
  if (con_left != nullptr) {
    auto value = con_left->Evaluate(0);
    if (value == 0.0) {
      return sim_right;
    }
  }

  // simplification x + 0 = x
  auto *con_right = dynamic_cast<Const *> (sim_right);
  if (con_right != nullptr) {
    auto value = con_right->Evaluate(0);
    if (value == 0.0) {
      return sim_left;
    }
  }
  return new AddFunction(sim_left, sim_right);
}

BinaryFunction *AddFunction::NewInstance(const DerivableFunction *left, const DerivableFunction *right) const {
  return new AddFunction(left, right);
}
