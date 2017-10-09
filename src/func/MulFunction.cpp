#include "../../include/func/MulFunction.h"
#include "../../include/Const.h"
#include "../../include/X.h"
#include "../../include/func/PowFunction.h"

MulFunction::MulFunction(const DerivableFunction *left, const DerivableFunction *right) :
    BinaryFunction(left, right) {
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

DerivableFunction *MulFunction::Simplify() const {
  auto *sim_left = left_->Simplify();
  auto *sim_right = right_->Simplify();

  // simplification 1 * x = x and 0 * x = 0
  auto *con_left = dynamic_cast<Const *> (sim_left);
  if (con_left != nullptr) {
    auto value = con_left->Evaluate(0);
    if (value == 1.0) {
      // delete sim_left;
      return sim_right;
    } else if (value == 0.0) {
      // delete sim_left;
      // delete sim_right;
      return new Const(0);
    }
  }

  // simplification x * 1 = x and  x * 0 = 0
  auto *con_right = dynamic_cast<Const *> (sim_right);
  if (con_right != nullptr) {
    auto value = con_right->Evaluate(0);
    if (value == 1.0) {
      // delete sim_right;
      return sim_left;
    } else if (value == 0.0) {
      // delete sim_left;
      // delete sim_right;
      return new Const(0);
    }
  }

  // simplification x * x = x^2
  auto *con_left_x = dynamic_cast<X *> (sim_left);
  auto *con_right_x = dynamic_cast<X *> (sim_right);
  if (con_left_x != nullptr && con_right_x != nullptr) {
    return new PowFunction(new X(), new Const(2));
  }

  return new MulFunction(sim_left, sim_right);
}

BinaryFunction *MulFunction::NewInstance(const DerivableFunction *left, const DerivableFunction *right) const {
  return new MulFunction(left, right);
}
