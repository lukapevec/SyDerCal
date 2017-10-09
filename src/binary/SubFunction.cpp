#include "../../include/binary/SubFunction.h"
#include "../../include/unary/Const.h"

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

DerivableFunction *SubFunction::Simplify() const {
  auto *sim_left = left_->Simplify();
  auto *sim_right = right_->Simplify();

  // simplification x - 0 = x
  auto *con_right = dynamic_cast<Const *> (sim_right);
  if (con_right != nullptr) {
    auto value = (*con_right)(0);
    if (value == 0) {
      return sim_left;
    }
  }

  return new SubFunction(sim_left, sim_right);
}

BinaryFunction *SubFunction::NewInstance(const DerivableFunction *left, const DerivableFunction *right) const {
  return new SubFunction(left, right);
}
