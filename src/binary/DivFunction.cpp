#include "../../include/binary/DivFunction.h"
#include "../../include/nullary/Const.h"

DivFunction::DivFunction(const DerivableFunction &left, const DerivableFunction &right) :
    BinaryFunction(left, right) {
}

double DivFunction::Evaluate(double x) const {
  return left_.Evaluate(x) / right_.Evaluate(x);
}

string DivFunction::ToString() const {
  return "(" + left_.ToString() + " / " + right_.ToString() + ")";
}

// Derivation of the division
// (x / y)' = (x'y - xy') / (y*y)
DerivableFunction &DivFunction::Derive() const {
  auto &num1 = left_.Derive() * right_; // x'y
  auto &num2 = left_ * right_.Derive(); // xy'
  auto &den = right_.Mul(right_); // y*y
  return num1.Sub(num2).Div(den);
}

DerivableFunction &DivFunction::Simplify() const {
  auto &sim_left = left_.Simplify();
  auto &sim_right = right_.Simplify();

  // simplification x / 1 = x
  auto *con_right = dynamic_cast<Const *> (&sim_right);
  if (con_right != nullptr) {
    auto value = (*con_right)(1);
    if (value == 1) {
      return sim_left;
    }
  }

  return *new DivFunction(sim_left, sim_right);
}

BinaryFunction &DivFunction::NewInstance(const DerivableFunction &left, const DerivableFunction &right) const {
  return *new DivFunction(left, right);
}
